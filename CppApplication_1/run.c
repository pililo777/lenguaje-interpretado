//run.c github
#include <stdio.h>
#include <regex.h>
//#include <ncurses.h>
#include <math.h>


/*
#include <time.h>
#include <sys/time.h>

#include <sys/types.h>
*/


#include <glib.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>
#include <string.h>
//  #include <gdk/gdkkeysyms.h>


FILE * ficheros[10];

typedef struct xnodo {
    short int xconteo;
    char xllave[4][55];
    long int xrama[5];
    long int datoInt[4];
};

extern int ejecuta_desde_editor;
extern int linenumber;
extern int LineaInicial[20];
extern int contador_lineaInicial;
extern struct ast* nodografico;
extern struct ast* nodografico2;
extern short  int tam_registro;
extern struct ast * nuevonodo();

int flag_ventanas = 0;



#include "nodo.h"
#include "stdio.h"
#include "stdlib.h"




/*
typedef struct  {
          char        tipo;
          char        nombre[18];
          char        valor[127]; 
          double     numero;
          
} struct_variable;
*/

extern ast * pila_records[32]; // pila de registros

#include "vars.h"
typedef char tipollave;
extern tipollave llave[55];
extern xapuntador xraiz;


// double var[127]; // 127 variables numericas e indices a variables alfa y literales


extern int idx_vec;
extern ast * procedimientos[127];

extern ast * pila_programas[32];
extern int idx_prg;



extern int nro_decimales;

char msgbox[2550];
char mensaje2[255];
char modo_pausa = '0';
char en_pausa = '0';


extern long memoria;

double evalua(ast *);


static int counter1[32];
static int indice_ctr = 0;
static int error_getstring = 0;

void * execut(ast *);
short comprobar_regex(char * expregular, char * texto) ;


void push_param(int i) {
            pila[idx_pila].numero = array_variables[i].numero;
            pila[idx_pila].procedimiento = array_variables[i].procedimiento;
            pila[idx_pila].tipo = array_variables[i].tipo;
            strcpy(pila[idx_pila].nombre , array_variables[i].nombre);
            
            //strcpy(pila[idx_pila].valor , array_variables[i].valor); 
            if (pila[idx_pila].tipo=='S') {
                char * str1;
                int j;
                if (array_variables[i].string!=NULL) {
                    j = strlen(array_variables[i].string)+1;
                    str1 = (char *) malloc (j);
                    memoria+=j;
                    strcpy(str1 , array_variables[i].string);
                    pila[idx_pila].string = str1;
                }
            }
            pila[idx_pila].backup = i;
            idx_pila++;
}

void pop_param(int i) {
            int j;
            if (idx_pila == 0) return;
    
            idx_pila--;
            array_variables[i].numero = pila[idx_pila].numero;
            array_variables[i].procedimiento = pila[idx_pila].procedimiento;
            array_variables[i].tipo = pila[idx_pila].tipo;
            strcpy(array_variables[i].nombre, pila[idx_pila].nombre);
            if (array_variables[i].tipo=='S' || array_variables[i].tipo=='F' ) {
                if (pila[idx_pila].string!=NULL) {     //   pila[9].nombre
                    if (pila[idx_pila].string!=NULL)
                    j = strlen(pila[idx_pila].string)+1;
                    else
                        pausar();
                    array_variables[i].string = (char *) malloc(j);
                    memoria += j;
                    strcpy(array_variables[i].string, pila[idx_pila].string);
                    free(pila[idx_pila].string);
                    pila[idx_pila].string = NULL;
                    memoria -= j;
                }
            }
}



short push_argumentos(ast *f1, ast *g1, short * cantidad) {
    // en f tenemos el destino
    // en g tenemos el origen
    // en f son variables
    // en g son variables y/o constantes
    //short cantidad = 0;
    
    
    if (f1->subnodos > 0) {
        int i;
        int j;
        char t;
        ast * p1;
        i = f1->nodo1->num; //designator del primer parametro
        t = array_variables[i].tipo;
        
        if (t=='S' || t=='N') 
        {
                p1 = nuevonodo();
                p1->nodo1 = f1->nodo1;
                p1->nodo2 = g1->nodo1;
                
                if (t == 'N') {
                    p1->tipo = asigna_num;
                }
                else {
                    if (t == 'S') {
                        if (g1->nodo1->tipo == constante_literal) {
                            p1->tipo = asigna_alfa;
                        }
                        else {
                            p1->tipo = asigna_alfa_var;
                        }
                    }
                    else {
                        p1->tipo = 'I';
                    }
                }
                push_param(p1->nodo1->num);
                (*cantidad)++;
                execut(p1);
                free(p1);
                p1=NULL;
                nodos--;
                //memoria = memoria - sizeof(ast *);
                memoria -= sizeof(struct ast);
        }
        
        if (g1->subnodos > 1)
                    push_argumentos(f1->nodo2, g1->nodo2, cantidad);
    }
    return 1;
}


void pop_argumentos(short n) {
    int i;
    while (n>0)
    {
        idx_pila--;
        i = pila[idx_pila].backup;
        idx_pila++;
        pop_param(i);
        n--;
    }
}

void subcadena(int i, ast * a, ast * b, int var) {
    int aa, bb;
    char * subc;
    char * subc2;
    //subc = malloc(127);
    int k = 0;
    aa = (int) evalua(a);
    bb = (int) evalua(b);
    subc = (char * ) malloc(bb+1);
    memoria+=bb;
    for (int j=aa-1;j < (bb+aa-1);j++) {
        //subc[k] = array_variables[i].valor[j];
        subc[k] = (char *) array_variables[i].string[j];
        k++;
    }
    subc[k] = '\0';
    //strcpy (array_variables[var].valor, subc);
    subc2 = array_variables[var].string;
    if (subc2!=NULL) {
        i = strlen(subc);
        realloc (array_variables[var].string, i);
        //array_variables[var].string = NULL;
    }
    else
    {
        i = strlen(subc);
        array_variables[var].string = (char *) malloc (i);
    }
        
    //array_variables[var].string = subc;
    strcpy (array_variables[var].string,  subc);
    
    
    
    //free(subc);
}

void subcadena2(int i, ast * a, int var) {
    int aa, bb;
    char * subc, *subc2 ;
    //subc = malloc(127);
    int k = 0;
    aa = (int) evalua(a);
    //bb = (int) evalua(b);
    bb = (strlen(array_variables[i].string) - aa)+1;
    subc = (char * ) malloc(bb+1);
    memoria+=bb;
    for (int j=aa-1;j < (bb+aa-1);j++) {
        subc[k] = array_variables[i].string[j];
        k++;
    }
    if (subc==NULL) {
        pausar(); //error
        }
    subc[k] = '\0';
    
    subc2 = array_variables[var].string;
    if (subc2!=NULL) {
        free(array_variables[var].string);
        array_variables[var].string = NULL;
    }
    
    //strcpy (array_variables[var].valor, subc);
    array_variables[var].string = subc;
    //free(subc);
}

void izquierda(int i, ast * a,  int var) {
    int aa, bb;
    char * subc, *subc2;
    //subc = malloc(127);
    int k = 0;
    aa = (int) 1;
    bb = (int) evalua(a);
    subc = (char * ) malloc(bb+1);
    memoria+=bb;
    for (int j=aa-1;j < (bb+aa-1);j++) {
        subc[k] = array_variables[i].string[j];
        k++;
    }
    subc[k] = '\0';
    //strcpy (array_variables[var].valor, subc);
    subc2 = array_variables[var].string;
    if (subc2!=NULL) {
        free(array_variables[var].string);
        array_variables[var].string = NULL;
    }
    array_variables[var].string = subc;
    //free(subc);
}

void derecha(int i, ast * a,  int var) {
    //i es la variable que se recorta
    //a es la variable que tiene la cantidad
    //var es la que recibe el recorte
    int aa, bb;
    char * subc, *subc2;
    //subc = malloc(127);
    int k = 0;
    aa = (int) evalua(a);
    
    bb = strlen(array_variables[i].string);
    subc = (char * ) malloc(bb+1);
    memoria+=bb;
    aa = bb - aa;
    for (int j=aa;j < (bb+aa-1);j++) {
        subc[k] = array_variables[i].string[j];
    
        k++;
    }
    subc[k] = '\0';
    //strcpy (array_variables[var].valor, subc);
    subc2 = array_variables[var].string;
    if (subc2!=NULL) {
        free(array_variables[var].string);
        array_variables[var].string = NULL;
    }
    array_variables[var].string = subc;
    
    //free(subc);
}

short instr(int i, int a) {
    //i es la cadena en la cual buscar
    //a es la cadena buscada
    //var es el resultado
    char * subc1;
    char * subc2;
    char * result;
    short posicion;
    //short substringLen;
    //subc1 = malloc(127);
    //subc2 = malloc(127);
    subc1 = array_variables[i].string;
    subc2 = array_variables[a].string;
    result = strstr(subc1 ,subc2);
    
    posicion = 0;
    if (result)
    posicion = result - subc1 + 1;
    //free(subc1);
    //free(subc2);
    return posicion;
}


void initProcedimientos() {
    int i;
    i = 0;
    for (i=0; i < 127; i++) { procedimientos[i] = NULL ; };
    for (i=0; i < 256; i++) { array_variables[i].string = NULL ; };
    
}

//cambiamos INT por DOUBLE
double * nuevoValorEnteros(int cantidad) {  
    double * vector = malloc(sizeof (double) *  cantidad);   // 4 * cantidad (el * no es puntero)
    memoria += (sizeof (double) * cantidad);
    return vector;
}

char * nuevoValorAlfas(int cantidad) {
    //strings de 127 caracteres cada una
    char * vector = malloc(sizeof (char) *  cantidad * 127);   // 4 * cantidad (el * no es puntero)
    memoria += (sizeof (char) * cantidad * 127);
    //printf ("lugar en memoria: %p\n", vector);
    return vector;
}


GtkWidget*
    find_child(GtkWidget* parent, const gchar* name)
    {
            if (g_strcasecmp(gtk_widget_get_name((GtkWidget*)parent), (gchar*)name) == 0) { 
                    return parent;
            }

            if (GTK_IS_BIN(parent)) {
                    GtkWidget *child = gtk_bin_get_child(GTK_BIN(parent));
                    return find_child(child, name);
            }

            if (GTK_IS_CONTAINER(parent)) {
                    GList *children = gtk_container_get_children(GTK_CONTAINER(parent));
                    while ((children = g_list_next(children)) != NULL) {
                            GtkWidget* widget = find_child(children->data, name);
                            if (widget != NULL) {
                                    return widget;
                            }
                    }
            }

            return NULL;
    }

char *getstring(char *s) {
    int i, k = getchar();
    error_getstring = 0;
    /* Return NULL if no input is available */
    if (k == EOF)
        return NULL;

    if (k == 10) {
        //k = getchar();
        error_getstring = 1;
        //printf("se leyo un caracter 10\n");
        return NULL;
    }
    /* Read and store characters until reaching a newline or end-of-file */
    for (i = 0; k != EOF && k != '\n'; ++i) {
        s[i] = k;
        k = getchar();

        /* If a read error occurs, the resulting buffer is not usable. */
        if (k == EOF && !feof(stdin))
            return NULL;
    }

    /* Null-terminate and return the buffer on success.
    The newline is not stored in the buffer. */
    s[i] = '\0';

    return s;
}

ast *nodo1(tiponodo, ast *);
ast *nodo2(tiponodo, ast *, ast *);
ast *nodo3(tiponodo, ast *, ast *, ast *);
ast *nodo4(tiponodo, ast *, ast *, ast *, ast *);



extern int lineaEjecucion ;
extern int lineaAnterior ;

ast * nodo0(tiponodo Tipo, ast * a) {
    ast * p;
    p = nuevonodo();
    p->tipo = Tipo;
    p->num = 777;
    //p->nodo1 = a;
    p->nrolinea1 = LineaInicial[contador_lineaInicial];
    p->nrolinea2 = lineaEjecucion ;
    p->subnodos = 0;
    
    
/*
    if (p->tipo == stop) {
        pausar();
    }
*/
    if (depurar)
    printf("Tipo: %d\n", Tipo);
    return p;
}

ast * nodo1(tiponodo Tipo, ast * a) {
    ast * p;
    p = nuevonodo();
    p->tipo = Tipo;
    p->num = 777;
    p->nodo1 = a;
    p->nrolinea1 = LineaInicial[contador_lineaInicial];
    p->nrolinea2 = lineaEjecucion ;
    p->subnodos = 1;
    if (p->tipo == imprimir_varios)
        p->nrolinea2 = lineaAnterior;
    
/*
    if (p->tipo == stop) {
        pausar();
    }
*/

    if(depurar)
    printf("Tipo: %d\n", Tipo);
    return p;
}


extern char buff1[128];

void freevar(int i) {
    if (array_variables[i].string!=NULL) {
        free(array_variables[i].string);
        array_variables[i].string=NULL;
    }
}

void reservamem(int i, int j) {
    array_variables[i].string = (char *) malloc (j);
    memoria += j;
    array_variables[i].string[0]= 0;
}

void freevar2(int i, char * buff3 ) {
    char * input;
    int j;
    printf ("%d\n", i);
    input = buff1;
    sscanf( buff3, "%d", &j);
    printf ("%d\n", j);
    free(array_variables[j].string);
    array_variables[j].string=NULL;
}

ast * nodo2(tiponodo Tipo, ast * a, ast * b)
 {
    ast * p;
    p = nuevonodo();
    p->tipo = Tipo;
    p->num = 777;
    p->nodo1 = a;
    p->nodo2 = b;
    p->subnodos = 2;
    p->nrolinea1 = LineaInicial[contador_lineaInicial];
    p->nrolinea2 = lineaEjecucion ;
    if (p->tipo == asigna_num)
        p->nrolinea2 = a->nrolinea1;
        //lineaAnterior = lineaEjecucion;
    if(depurar)
    printf("Tipo: %d\n", Tipo);
    return p;

}

ast * nodo3(tiponodo Tipo, ast * a, ast * b, ast * c) {
    ast * p;
    p = nuevonodo();
    p->tipo = Tipo;
    p->num = 777;
    p->nodo1 = a;
    p->nodo2 = b;
    p->nodo3 = c;
    p->subnodos = 3;
    p->nrolinea1 = LineaInicial[contador_lineaInicial];
    p->nrolinea2 = lineaEjecucion ;

    if (p->tipo == asigna_vector)
        p->nrolinea2 = a->nrolinea1;

    if (p->tipo  == dibuja_circulo  )
        p->nrolinea2 = lineaAnterior;
    if(depurar)
    printf("Tipo: %d\n", Tipo);
    return p;

}

ast * nodo4(tiponodo Tipo, ast * a, ast * b, ast * c, ast * d) {
    ast * p;
    p = nuevonodo();
    p->tipo = Tipo;
    p->num = 777;
    p->nodo1 = a;
    p->nodo2 = b;
    p->nodo3 = c;
    p->nodo4 = d;
    p->subnodos = 4;
    p->nrolinea1 = LineaInicial[contador_lineaInicial];
    p->nrolinea2 = lineaEjecucion ;
    if (p->tipo == guardar_texto || p->tipo == dibuja_linea )
        p->nrolinea2 = lineaAnterior;
        //lineaAnterior = lineaEjecucion;
    if(depurar)
    printf("Tipo: %d\n", Tipo);
    return p;
}

ast * nodo5(tiponodo Tipo, ast * a, ast * b, ast * c, ast * d, ast * e) {
    ast * p;
    p = nuevonodo();
    p->tipo = Tipo;
    p->num = 777;
    p->nodo1 = a;
    p->nodo2 = b;
    p->nodo3 = c;
    p->nodo4 = d;
    p->nodo5 = e;
    p->subnodos = 5;
    p->nrolinea1 = LineaInicial[contador_lineaInicial];
    p->nrolinea2 = lineaEjecucion ;
    if(depurar)
    printf("Tipo: %d\n", Tipo);
    return p;
}

struct widgets { // para el array de ventanas
    GtkWidget *nombre;
    GtkWidget *box1;
    int indice;
    int posicion;
};

struct cajaTexto {
    int ventana;
    int proced;
    int var;
    GtkWidget * entry;
};


struct widgets arrayWidgets[100]; //array de ventanas
int idx_win = 0; //indice de ventanas
static int arrayIndices[100]; //almacena los handles de las ventanas
struct widgets arrayBotones[100];

int get_indice(int vnt_busq) {
    int i;
    for (i = 0; i < 20; i++) {
        if (arrayIndices[i] == vnt_busq) {
            return i;
        }
    }
    return -1;
}

void callback(GtkWidget *entry, gpointer data) { // al clicar los botones ********************************
    int el_proc;
    int indice;
    
    el_proc = (int *) data;
    indice = array_variables[el_proc].procedimiento;
    execut(procedimientos[indice]);
}

// actualiza un campo de texto caso haya cambiado de valor
static void enter_callback(GtkWidget *widget, gpointer data) // al dar enter en la caja de texto
{

    GtkWidget *entry;
    char * valor_entry;   // para saber si se ha modificado 
    


    entry = (GtkWidget *) data;

    const gchar *entry_text;
    char buffer[33];

    int numero;
    short int comparacion = 0;

    sprintf(buffer, entry->name); //el nombre de la variable es en realidad un numero indice en 'var' y su value esta en 'constantes' (ver abajo)
    sscanf(buffer, "%d", &numero); //coloca en numero el nombre
    
    //valor_entry = constantes [(int) var[numero]];
    valor_entry = array_variables[numero].string;


    entry_text = gtk_entry_get_text(GTK_ENTRY(entry));
    
    comparacion = strcmp(valor_entry, entry_text);
    if (comparacion != 0) {   //son distintos
        gtk_entry_set_text( entry,  valor_entry);
        gtk_widget_show (entry);
        
    }
    
/*
    strcpy(constantes [(int) var[numero]], entry_text); // aplicamos el nombre del entry a la variable
    strcpy(array_variables[numero].valor, entry_text);
*/
    
    
}





void enter_button(GtkWidget *widget, gpointer data) {
     
  GdkColor col = {0, 27000, 30000, 35000};   
  
  gtk_widget_modify_bg(widget, GTK_STATE_PRELIGHT, &col);
}



void configure_callback(GtkWindow *window, 
      GdkEvent *event, gpointer data) {
          
   int x, y;
   GString *buf;
   
   x = event->configure.x;
   y = event->configure.y;
   
   buf = g_string_new(NULL);   
   g_string_printf(buf, "%d, %d", x, y);
   
   gtk_window_set_title(window, buf->str);
   
   g_string_free(buf, TRUE);
}

// actualiza las cajas de texto si han cambiado de valor....
void set_focus(GtkWindow *window,  GdkEvent *event, gpointer data) {
    
    GtkWidget *widget;
    gchar * nombre;
    widget = (GtkWindow *) data;
    
       
    if(GTK_IS_CONTAINER(widget)) {
        GList *children = gtk_container_get_children(GTK_CONTAINER(widget));
         while ((children = g_list_next(children)) != NULL) {
                            GtkWidget* widget1 = (GtkWidget *) children->data;
                            if (widget1 != NULL) {
                                if (GTK_IS_ENTRY(widget1)) {
                                    nombre = gtk_widget_get_name(widget1);
                                    enter_callback(NULL, G_OBJECT(widget1) );
                                }
                            }
                    }
             
      }
   
}


// elimina la ventana que se cierra del indice de ventanas abiertas

void cerrar_ventana(gpointer data) {
    int i, j;
    i = (int) data;
    for (j = i; j < 100; j++) {
        arrayIndices[j] = arrayIndices[j + 1];
    }
    idx_win--;
}

//enlazar  la señal destroy a esta funcion

void close_window(GtkWidget *widget, gpointer data) {
    //gtk_widget_destroy(GTK_WIDGET(window));
    gtk_widget_destroy(widget);
    if (data == 99) return; //para cerrar cuadro de mensaje
    cerrar_ventana(data);
    //gtk_widget_hide(window);
}

void close_main_window(GtkWidget *widget, gpointer data) {
    idx_win = 0;
    gtk_main_quit();
}

/*
typedef struct {
                    GtkWidget *entry;
                    int variable;
                } e_texto;
 */

/*
struct entry_txt {
                    GtkWidget *entry;
                    int variable;
                } entry_texto;
 */

static void change_entry_callback(GtkWidget *widget, gpointer data) // al dar enter en la caja de texto
{

    GtkWidget *entry;
    
    entry = (GtkWidget *) data;

    const gchar *entry_text;
    char buffer[33];

    int numero;

    sprintf(buffer, entry->name); //el nombre de la variable es en realidad un numero indice en 'var' y su value esta en 'constantes' (ver abajo)
    sscanf(buffer, "%d", &numero); //coloca en numero el nombre
    

    entry_text = gtk_entry_get_text(GTK_ENTRY(entry));

    /*printf ("Entry contents: %s\n", entry_text);
    printf("variable  %d\n", numero);*/

    freevar(numero);
    reservamem(numero, (int) strlen(entry_text)+1);
    strcpy(array_variables[numero].string, entry_text); // aplicamos el nombre del entry a la variable
    //freevar(numero);
    //strcpy(array_variables[numero].string, entry_text);
    gtk_entry_set_text( entry,  array_variables[numero].string);
    
}



extern char buff1[128];
extern int yylex_destroy(void);
extern int yyparse(void);
extern int err_number;
//extern void execut (elnodo *);
//extern pila_programas[32];

int interpretar() {
    err_number = 0;
    //printf("entrammos en la funcion interpretar\n");
    
    int idx_prg_bak;
    idx_prg_bak = idx_prg;
    char * input;
    input = buff1;
/*
         printf ("el buff2 es : %s\n", buff1);
*/
        //printf("idx prg 1: %d\n", idx_prg);
    //        yypush_buffer_state();
    //yy_scan_string(input);
    linenumber = 1;
    idx_prg = 31;
    yypush_buffer_state(yy_scan_string(input));
    yyparse();
    //yy_delete_buffer(input);
    yylex_destroy();
    yypop_buffer_state();
    //   if (err_number == 0)
    /*
        printf("idx prg 2: %d\n", idx_prg);
     */
    if (err_number == 0) {
        /*
                printf("ejecutando programa 31\n");
         */
        execut(pila_programas[31]); liberar_nodo(pila_programas[31], 31);
        /*
                printf("fin programa 31\n");
         */
    }
    else
        printf("error en la compilacion");

    /*
        printf("idx prg 3: %d\n", idx_prg);     
     */
    //   liberar_nodo(pila_programas[31]);
    
    idx_prg = idx_prg_bak;
    
}
//static int profundidad = 0;



extern void ejecutar_string(ast * p);
extern void yyrestart(FILE * input_file);
extern FILE * yyin;
extern int mquit;
int retornar;
int salir1;


// variables para el resaltado
GtkTextIter start, end;
extern GtkTextView *textview2;
extern GtkTextBuffer * buffer2;
GtkTextMark *cursor;
extern  GtkWidget *label1, *label2, *label3, *label4;
char str_temp[256];
//char buf[256];


/* Determines if to continue the timer or not */
static gboolean continue_timer = FALSE;

/* Determines if the timer has started */
static gboolean start_timer = FALSE;

/* Display seconds expired */
static int sec_expired = 0;

static void
_quit_cb (GtkWidget *button, gpointer data)
{
    (void)button; (void)data; /*Avoid compiler warnings*/
    gtk_main_quit();
    return;
}



static gboolean
_label_update(gpointer data)
{
    GtkLabel *label = (GtkLabel*)data;
    char buf[256];
    memset(&buf, 0x0, 256);
    snprintf(buf, 255, "Time elapsed: %d secs", ++sec_expired);
    gtk_label_set_label(label, buf);
    if ((sec_expired % 3000)==0) printf("*** 3000 *****");
    return continue_timer;

}

static void
_start_timer (  gpointer data)
{
    
    GtkWidget *label = data;
    if(!start_timer)
    {
        g_timeout_add_seconds(10, _label_update, label);
        start_timer = TRUE;
        continue_timer = TRUE;
    }
}

static void
_pause_resume_timer (  gpointer data)
{
    
    if(start_timer)
    {
        GtkWidget *label = data;
        continue_timer = !continue_timer;
        if(continue_timer)
        {
            g_timeout_add_seconds(1, _label_update, label);
        }
        else
        {
            /*Decrementing because timer will be hit one more time before expiring*/
            sec_expired--;
        }
    }
}

static void
_reset_timer ( gpointer data)
{
      (void)data;/*Avoid compiler warnings*/
    /*Setting to -1 instead of 0, because timer will be triggered once more before expiring*/
    sec_expired = -1;
    continue_timer = FALSE;
    start_timer = FALSE;
}

gulong tiempo = 0L;

int pausar()
{
/*
        g_timeout_add_seconds(10, _label_update, label2);
        continue_timer = TRUE;
        start_timer = TRUE;
        gtk_widget_queue_draw(textview2);         
        gtk_widget_queue_draw(label2);         
        _start_timer(label2);
        return 0;
*/
    if (en_pausa == '0') {
        //gulong tiempo = 200001L;
        g_usleep (tiempo);
    }
}

int tamanio = 0;

void calcular_tamanio(ast * lista_de_campos) {
    //int tamanio = 0;
    int nnodos = 0;
    if (lista_de_campos->tipo!=listacampos) return;
    nnodos = lista_de_campos->subnodos;
    if (nnodos == 3) {
        tamanio = tamanio + lista_de_campos->nodo3->num;
        calcular_tamanio(lista_de_campos->nodo1);
        calcular_tamanio(lista_de_campos->nodo2);
        }
    else {
        tamanio = tamanio + lista_de_campos->nodo2->num;
    }
}

void leer_campos(ast * lista_de_campos, FILE * handler) {
    int nnodos = 0;
    int largo;
    int indice;
    char * nombre;
    //char * str1;
    //char buff[100];
    if (lista_de_campos->tipo!=listacampos) return;
    nnodos = lista_de_campos->subnodos;
    if (nnodos == 3) {
        largo = lista_de_campos->nodo3->num;
        indice = lista_de_campos->nodo2->num;
        nombre = array_variables[indice].nombre;
        reservamem(indice, largo+1);
        //str1 = (char *) malloc (largo+1);
        //memoria+=largo;
        fread(array_variables[indice].string, 1, largo, handler);
        //array_variables[indice].string = str1;
        if (depurar)
        printf("el campo se llama %s y contiene: %s\n", nombre, array_variables[indice].string );
        leer_campos(lista_de_campos->nodo1, handler);
        //leer_campos(lista_de_campos->nodo2);
        }
    else {
        largo = lista_de_campos->nodo2->num;
        indice = lista_de_campos->nodo1->num;
        nombre = array_variables[indice].nombre;
        reservamem(indice, largo+1);
        //str1 = (char *) malloc (largo+1);
        //memoria+=largo;
        fread(array_variables[indice].string, 1, largo, handler);
        //array_variables[indice].string = str1;
       
        if (depurar)
        printf("el campo se llama %s y contiene: %s\n", nombre, array_variables[indice].string );
    }
}



void guardar_campos(ast * lista_de_campos, FILE * handler) {
    int nnodos = 0;
    int largo;
    int indice;
    char * nombre;
    //char buff[100];
    if (lista_de_campos->tipo!=listacampos) return;
    nnodos = lista_de_campos->subnodos;
    if (nnodos == 3) {
        largo = lista_de_campos->nodo3->num;
        indice = lista_de_campos->nodo2->num;
        nombre = array_variables[indice].nombre;
        fwrite(array_variables[indice].string, 1, largo, handler);
        if (depurar)
        printf("el campo se llama %s y contiene: %s\n", nombre, array_variables[indice].string );
        guardar_campos(lista_de_campos->nodo1, handler);
        //leer_campos(lista_de_campos->nodo2);
        }
    else {
        largo = lista_de_campos->nodo2->num;
        indice = lista_de_campos->nodo1->num;
        nombre = array_variables[indice].nombre;
        fwrite(array_variables[indice].string, 1, largo, handler);
        if (depurar)
        printf("el campo se llama %s y contiene: %s\n", nombre, array_variables[indice].string );
    }
}


const gchar *mark_name = "lineaActual";
GtkTextMark *marca1;
gboolean * left_gravity = TRUE;
gboolean marca_creada = FALSE;
char nombrefuncion[50];

void * execut(ast * p) {
    
    double return_value; //sin uso
   
    //printf("profundidad: %d\n", profundidad);
    //profundidad++;
    
    if (retornar == 1)
        {
            return;
        }
    
    
/*
    if (p->tipo == asigna_vector)
        pausar();
*/
    
/*
     if (p->tipo == imprimir_varios)
        pausar();
*/
        
    
    if (p==NULL) {
        printf ("error en funcion execute\n");
        return;
     } 

    
    if (p->tipo != secuencia && p->tipo !=procedimiento && p->tipo !=funcion)  {
        int numlinea;
        
        if (p->tipo == si || p->tipo == mientras || p->tipo == desde  )
            numlinea = p->nrolinea1-1;
        else
            numlinea = p->nrolinea2-1;
        
        //printf ("Ejec linea: %d\n", numlinea+1);
    
        //resalta la linea del editorgtk en ejecucion
        //si no estamos interpretando buff1
        if (ejecuta_desde_editor ) {
        
        //en desarrollo: resaltar en editorgtk la linea del nodo ejecutado

        //movernos a la linea del nodo
        //if ( (numlinea>0 && numlinea<20000) ) {}
            
        gtk_text_buffer_get_start_iter (buffer2, &start);
        gtk_text_iter_set_line (&start, numlinea);
        
        
        
    

        //obtener un iter y posicionarlo en la posicion 0
        //gtk_text_iter_set_line_offset( &start,  (gint) 0 );

        // movernos al final de la linea

        end = start;
        
        gtk_text_iter_forward_to_line_end (&end);

        //seleccionar el texto
        gtk_text_buffer_select_range (buffer2, &start, &end); 

        //cambiar el color de la linea
        gtk_text_buffer_apply_tag_by_name (buffer2, "color", &start,
                           &end);
        
        if (marca_creada == FALSE) {
            marca1 = gtk_text_buffer_create_mark (buffer2,
                             mark_name,
                             &start,
                             left_gravity);
            marca_creada = TRUE;
        }
        else
        {
            gtk_text_buffer_move_mark (buffer2,
                           marca1,
                           &start);
        }
        
        //ir a la linea de ejecucion
        if (idx_prg!=39+1) //el ultimo indice de programa
        gtk_text_view_scroll_to_mark (textview2, marca1, 0.0, TRUE, 0.0, 0.17);

        sprintf(str_temp, "LINEA: %d   funcion: ", numlinea+1 );
        strcat (str_temp, nombrefuncion );
        
       
        gtk_label_set_label(label2, str_temp );
        gtk_widget_queue_draw(label2); 
        
         if (idx_prg!=39+1) //el ultimo indice de programa  VOLVER EL 39 A 31 DESPUES DE DEPURAR
         {
                if (modo_pausa == '1' ) {

                    en_pausa = '1';
                    while (en_pausa == '1') {
                        while (gtk_events_pending ()) gtk_main_iteration();
                    }
                    
                }

                
         }
        
        while (gtk_events_pending ())
            {
                gtk_main_iteration();
                //gtk_main_iteration();
            }
        }
        
        pausar();
        
    }
    
    /**
     * @param p  el nodo  (ast) que contiene la variable a escribir en el archivo
     * @return 
     */
    
    switch (p->tipo) {
        case pausa:
        { if(modo_pausa=='0')
            modo_pausa = '1';
        else
            modo_pausa = '0';
        }
        break;
        case push:
        {
            int i;
            i = (int) p->nodo1->num;
            push_param(i);
        }
            break;
            
        case pop:
        {
            int i;
            i = (int) p->nodo1->num;
            
            pop_param(i);
            
        }
            break;
            
        case escribir_archivo:
        {
             struct rec
                {
                    char mydata;
                };
            struct rec my_record;
            int n, n2; // numero de archivo y largo de la variable
            int i; /* indice de la variable string que se desea escribir al archivo
                    * en este sistema se usa un nodo para una variable
                    * en este caso el nodo2 y num es un indice para
                    * el array de variables:  array_variables[nnnn]
                    *  */
            char * s;
            unsigned int nulo = '\0';
            int n3; // largo del string
            int n4; // bool, si añadimos fin de linea
            
            n = p->nodo1->num;
            n = array_variables[n].numero;   // variable handle del numero de archivo
            i = p->nodo2->num;
            s = array_variables[i].string;
            
            
            if (p->subnodos == 2) {
                n3 = strlen(s);
                fwrite(s, 1, n3, ficheros[n] ); 
            } else {
                //OK pendiente, si n2 < strlen, guardar solo n2 bytes
                n2 = (int) evalua (p->nodo3);  // numero de bytes que se quieren guardar
                n3 = strlen(s);         // tamaño del string
                n4 = p->nodo4->num;
                fwrite(s, 1, n3, ficheros[n] );  //guardamos el string
                my_record.mydata=0;
                if (n2 > n3) {                   // padding con 000000
                    for (; n2 > n3; n3++) 
                      {
                        fwrite(&my_record, sizeof(struct rec), 1, ficheros[n]);
                      } //for
                    }  //if
                
                // añadimos fin de linea?
                      if (n4!=0) {
                            my_record.mydata = 10;
                            fwrite(&my_record, sizeof(struct rec), 1, ficheros[n]);
                      } //if
                } //else
            } // case
        break;
        
        case buscar_registro:
        {
            int tam;
            int pos;
            int sreg;
            int nroreg;
            char * datafile;
            FILE * handler2;
            ast * registro;
            
            
            int indice, indice2;
            indice = array_variables[(int) p->nodo1->num].procedimiento ;
            if (depurar)
            printf("buscaremos en el registro de %s \n", array_variables[(int) p->nodo1->num].nombre);
            registro = pila_records[indice];
            indice2 = registro->nodo2->num;
            datafile = constantes[indice2];
            nroreg = (int) array_variables[(int) p->nodo2->num].numero ;
            if (depurar)
            printf("con numero de registro %d\n", nroreg );
            //alla vamos....
    
            handler2 = fopen(datafile, "r");
            //bucle de calculo de tamaño de registro
            tamanio = 0;
            calcular_tamanio(registro->nodo3);
            tam = tamanio+1;  // temporalmente por el fin de linea
            pos = (tam * (nroreg - 1) );
            fseek(handler2, pos, SEEK_SET);
            leer_campos(registro->nodo3, handler2);
            //bucle de lectura de campos:
            //fread(&un_registro, 1, sizeof(un_registro), handler2);
            fclose(handler2);
        }
        break;
        
        
        case actualizar_registro:
        {
            int tam;
            int pos;
            int sreg;
            int nroreg;
            char * datafile;
            FILE * handler2;
            ast * registro;
            
            
            int indice, indice2;
            indice = array_variables[(int) p->nodo1->num].procedimiento ;
            printf("buscaremos en el registro de %s \n", array_variables[(int) p->nodo1->num].nombre);
            registro = pila_records[indice];
            indice2 = registro->nodo2->num;
            datafile = constantes[indice2];
            nroreg = (int) array_variables[(int) p->nodo2->num].numero ;
            printf("con numero de registro %d\n", nroreg );
            //alla vamos....
    
            handler2 = fopen(datafile, "r+");
            //bucle de calculo de tamaño de registro
            tamanio = 0;
            calcular_tamanio(registro->nodo3);
            tam = tamanio+1;  // temporalmente por el fin de linea
            pos = (tam * (nroreg - 1) );
            
            fseek(handler2, pos, SEEK_SET);
            guardar_campos(registro->nodo3, handler2);
            //bucle de lectura de campos:
            //fread(&un_registro, 1, sizeof(un_registro), handler2);
            
            fclose(handler2);
        }
        break;
        
        case definir_registro: 
        {
        // procedimiento se esta usando para registrar el numero consecutivo de record
        int indice;
        indice = (int) p->nodo1->num;
        printf ("se ha encontrado la definicion del record: %d -- %s\n", array_variables[indice].procedimiento, array_variables[indice].nombre);
        }
        break;
    
        
        
        case actualizar:   // actualiza el box1 de la ventana
        {
            int i, j;
            GtkWidget * w;
            
            
            i = p->nodo1->num; // ventana que se desea actualizar
            j = ( (int) array_variables[i].numero  - (int) 1); // indice en el array de ventanas
            w = arrayWidgets[0].box1; // box1 de la ventana  (frame x,y)
 
            set_focus(  NULL,  NULL, G_OBJECT( w ) );  // refresca los entry text

        }
            break;
            
        
        case use_indice:
        {
            int n;  // indice de la variable string
            n = p->nodo1->num;
            char * filename;
            //FILE * handle;
            filename = array_variables[n].string;
            use(filename);
        }
            break;
            
        case close_indice:
        {
            t_close();
        }
            break;
            
        
        case buscar_clave:
        {
            int var;
            int indice;
            int nro_reg;
            char * llave;
            xapuntador nodoobjetivo = 0;
            posicion  posobjetivo = 0;
            int encontrar = 0;
            struct xnodo xnodoobjetivo;
            
            var = p->nodo1->num;
            llave = (int) array_variables[var].string;
            buscar(llave, &xraiz, &encontrar, &nodoobjetivo, &posobjetivo);
            var = p->nodo2->num;
            array_variables[var].numero = encontrar;
            if (encontrar) {
                leenodo(&nodoobjetivo, &xnodoobjetivo, tam_registro);
                nro_reg = xnodoobjetivo.datoInt[posobjetivo - 1];
                var = p->nodo3->num;
                array_variables[var].numero = nro_reg;
                //fprintf(stdout, "Se ha encontrado: %s\n\n", xnodoobjetivo.xllave[posobjetivo - 1]);
                fprintf(stdout, "Dato: %li\n\n", nro_reg );
                //mostrar_registro(nro_reg);
            }
            
            
/*
            if (encontrar) {
                printf("%s encontrado\n", llave);
                
            }
            
                else
                    printf("%s NO encontrado\n", llave);
*/
        }
            break;
            
        case insertar_clave:
        {
            int encontrar = 0;
            int var;
            int dato = 0;
            int tam, pos, nroreg;
 
            char * llave;
            ast * registro;
             FILE * handler2;
             char * datafile;  //fichero de datos dbf
             
             
            int indice, indice2;
            
            xapuntador nodoobjetivo = 0;
            posicion  posobjetivo = 0;
            
            indice = array_variables[(int) p->nodo3->num].procedimiento ;
            if (depurar)
            printf("buscaremos en el registro de %s \n", array_variables[(int) p->nodo3->num].nombre);
            registro = pila_records[indice];
            
            //obtengo el nombre fisico del archivo en disco
            indice2 = registro->nodo2->num;
            datafile = constantes[indice2];
            
            // obtengo el nombre de la clave que se quiere agregar
            var = p->nodo1->num;
            llave = (int) array_variables[var].string;
            
            //calculamos el numero de registro para el nuevo registro
            tamanio = 0;
            calcular_tamanio(registro->nodo3);
            tam = tamanio+1;  // temporalmente por el fin de linea
            handler2 = fopen(datafile, "r+");
            fseek(handler2, 0, SEEK_END);
            pos = ftell(handler2);
            nroreg = (pos / tam) + 1;   //sera el siguiente
            inserta(llave, &xraiz, &nroreg, &encontrar) ;
            if (encontrar) {
                //encontrado = 1
                var = p->nodo2->num;
                array_variables[var].numero = 1;
                printf("la clave ya existe, no se puede insertar......\n");
            }
            else
            {
            // la clave ya ha sido insertada con el numero de registro correspondiente
            // solamente falta insertar el registro de datos en fichero dbf
                guardar_campos(registro->nodo3, handler2);
                fwrite("\n", 1, 1, handler2);  //quitar esto posteriormente
            }
            fclose(handler2);
        
        }
            break;
            
        case eliminar_clave:
        {
            int var;
 
            char * llave;
            
            int encontrar = 0;
            var = p->nodo1->num;
            llave = (int) array_variables[var].string;
            
            eliminar(llave, &xraiz) ;
            
/*
            var = p->nodo2->num;
                array_variables[var].numero = encontrar;
*/
        
        }
            
            break;
            
        
        
        case procedimiento:
        {
            execut(p->nodo2);
        }
        break;
        
        case funcion:
        {
            execut(p->nodo3);
        }
            break;
        
        
        case  vaciar:
        {
            int  n;
            n = (int) p->nodo1->num;
            array_variables[n].string[0] = 0   ;
        }
        break;
        
        case sumar_alfa:
        {
            int n, m, x, y; char * str1;
            n = (int) p->nodo1->num;
            m = (int) p->nodo2->num;
            x = strlen(array_variables[n].string)+1;
            y = strlen(array_variables[m].string) + x+1;
/*
            printf("%d\n", y );
*/
            //if (y<=127)
            
            str1 = (char *) malloc (y);
            memoria+=y;
            strcpy(str1, array_variables[n].string);
            free(array_variables[n].string);
            array_variables[n].string=NULL;
            memoria-=x;
            
            strcat(str1, array_variables[m].string);
            array_variables[n].string = str1;
            //else printf("error concatenando...\n");
            
        }
        break;
        
        
	case mostrar:
	{
	   int n;
	   n = (int) p->nodo1->num;
           fflush(stdout);
	   printf ("%s", array_variables[n].string);
           fflush(stdout);
	}
	break;



        case abrir:   //  abrir ARCHIVO
        {
            int n;
            char * s;
            n = (int) p->nodo2->num;
            n = (int) array_variables[n].numero;
            s = array_variables[(int)   p->nodo1->num].string;
            
// pendiente  quitar VAR y poner array_variables
            if (depurar)
            printf("abriremos el fichero:  %s\n", s) ;
            if (exists(s))
                ficheros[n] = fopen(s, "r+");
            else {
                ficheros[n] = fopen(s, "w");
                fclose(ficheros[n]);
                ficheros[n] = fopen(s, "r+b");
            }
/*
            while (!feof(ficheros[n])) {
                char c = getc(ficheros[n]);
                printf("%c", c);
            }
            fclose(ficheros[n]);
*/
        }
        break;
        
        case cerrar:
        {
            int n;
            n = (int) p->nodo1->num;
            n = (int) array_variables[n].numero;
            fclose(ficheros[n]);
        }
        break;
        
        case leer_archivo:
        {
            int n, x, y, m;
            n = (int) p->nodo1->num;   // numero de archivo
            m = (int) p->nodo3->num;   // variable de status para codigo ascii
            x = (int) p->nodo2->num;   // variable donde se deposita la letra
            y = (int) array_variables[n].numero;
            char c = getc(ficheros[y]);
            
            if (c!=EOF) {
            
                array_variables[x].string[0] = c ;
                array_variables[x].string[1] = 0 ;
                array_variables[m].numero = (double) c ;
                
                } else {
                  array_variables[n].numero = 99.0;
/*
                  printf("%lf\n", array_variables[n].numero );
*/
            }
            
            
            
        }
        break;
        
        
        case stop:
            
            {
                mquit = 0;  //mquit en dbase.c
                printf("stop en linea %d. resuma con la instruccion quit.\n", (int)  p->nrolinea2  );
                {
                 int mquit = 0;
                 while (mquit == 0) {
                        mquit =  prompt();
                    }
                }
                mquit = 0;
            }
        break;

        case convertir_texto_a_numero:
        {
            double numero;
            numero = atof(array_variables[(int) p->nodo1->num].string);
                    //constantes[(int) var[ ] ]); //constantes [(int)p->nodo1->num]
            array_variables[(int) p->nodo2->num].numero = numero;

        }
        break;


        case convertir_numero_a_texto:
        {
            double numero;
            int i, n ;
            char buf[20];
            n = (int)  p->nodo2->num ;
            numero = array_variables[(int) p->nodo1->num].numero;
            //sprintf(constantes[(int) var[(int) p->nodo2->num ] ], "%lf", numero);
            sprintf(buf, "%.0lf", numero);
            i = strlen(buf)+1;
            reservamem(n, i);
            strcpy(array_variables[n ].string, buf);
            //sprintf(array_variables[n ].string, "%.0lf", numero);
        }
            break;

        case dibuja_circulo:
        {
            // el redibujado de la ventana grafica se tiene programar
            // en el fichero graficos.c
            flag_ventanas = 1; // hemos iniciado las ventanas
            //   nodografico2 = nuevonodo();
            nodografico2 = p;
            dibujarlinea();
        }

            break;

        case dimensionar:
        {
 // DIM designator NUMBER  { $$ = nodo2(dimensionar, $2, $3); /*dimensionar un vector entero */ }
            double * vector;
            int i;
            int j;
            j = (int) p->nodo2->num;  //NUMBER
            vector = nuevoValorEnteros(j); // cantidad
            for (i = 0; i < j; i++) vector [i] = 0;
            arrayVectores[idx_vec] = vector;
            //var[(int) p->nodo1->num] = idx_vec;
            i = (int) p->nodo1->num;
            array_variables[i].numero = (double) (idx_vec*1);
            //printf("he dimensionado el vector ");
            //printf ("%s ",  array_variables[i].nombre);
            //printf (" en %lf\n", array_variables[i].numero);
            idx_vec++;
            //printf (" idx_vec:  %d\n", idx_vec);
            

        }
            break;
            
          case dimensionar_alfa:
        {
 // DIM sdesignator NUMBER  { $$ = nodo2(dimensionar, $2, $3); /*dimensionar un vector entero */ }
            char * vector;
            int i;
            int j;
            j = (int) p->nodo2->num;  //NUMBER
            vector = nuevoValorAlfas(j); // cantidad
            for (i = 0; i < j; i++) vector [i] = NULL;  //no inicializamos el vector
            arrayVectoresAlfa[idx_vec2] = vector;
            array_variables[(int) p->nodo1->num].numero = idx_vec2;
            //var[(int) p->nodo1->num] = idx_vec2;
            idx_vec2++;
        }
            break;
        case asigna_vector:
        {
// designator '[' expression ']' EQ expression { $$ = nodo3(asigna_vector, $1, $3, $6 );  }            
            double * vector;
            int i, j;
            double valor;
            int posicion;
            i = (int) p->nodo1->num;    // el indice de la variable (designator)
            j = (int) array_variables[i].numero;
            vector = arrayVectores[j];   // hasta 32 vectores
            valor = (double) evalua(p->nodo3);
            posicion = (int) evalua(p->nodo2);
            vector[posicion] = valor ;   //expresion y expresion
        }

            break;
            
            case asigna_vector_alfa:
        {
// designator '[' expression ']' EQ expression { $$ = nodo3(asigna_vector, $1, $3, $6 );  }            
            char * vector;
            int i;
            int j;
            int k;
            //i = var[(int) p->nodo1->num];    // el indice de la variable (designator)
            i = (int) array_variables[(int) p->nodo1->num].numero;    // el indice de la variable (designator)
            j = (int) ( evalua(p->nodo2) * 127);
            k = (int) p->nodo3->num;
            vector = arrayVectoresAlfa[i];   // hasta 32 vectores
            //printf ("situacion en memoria: %p\n", vector);
           strcpy( &vector[j]  ,    constantes [ k ] ) ;   //expresion y expresion
        }

            break;
            
        case asigna_vector_alfa2:
        {
// sdesignator '[' expression ']' EQ sdesignator { $$ = nodo3(asigna_vector, $1, $3, $6 );  }            
            char * vector;
            int i;
            int j;
            int k;
            //i = var[(int) p->nodo1->num];    // el indice de la variable (designator)
            i = (int) array_variables[(int) p->nodo1->num].numero  ;    // el indice de la variable (designator)
            j = (int) ( evalua(p->nodo2) * 127);
            k = (int) p->nodo3->num;
            vector = arrayVectoresAlfa[i];   // hasta 32 vectores
            
           strcpy( &vector[j]  ,    array_variables[k].string ) ;   
        }
            break;
            
        case asigna_vector_alfa3:
        {
// sdesignator EQ sdesignator  '[' expression ']'  { $$ = nodo3(asigna_vector, $1, $3, $5 );  }  
            char * vector, *str1;
            int i;
            int j;
            int k;
            //i = var[(int) p->nodo2->num];    // el indice de la variable vector (designator)
            i = (int) array_variables[(int) p->nodo2->num].numero;    // el indice de la variable vector (designator)
            j = (int) ( evalua(p->nodo3) * 127);  // posicion en el vector
            k = (int) p->nodo1->num;
            vector = arrayVectoresAlfa[i];   // hasta 32 vectores
            //i = strlen(&vector[j]);
            //str1 = (char *) malloc (i); memoria+=i;
            //strcpy(str1,  ;   
            str1 = array_variables[k].string;
            if (str1!=NULL) {
                //i = strlen(str1)+1;
                //free(str1);
                //memoria -= i;
                //array_variables[k].string=NULL;
                i = strlen(&vector[j])+1;
                realloc(array_variables[k].string, i);
                memoria += i;
                strcpy (array_variables[k].string, &vector[j]);
                pausar();
            }
            else
            {
                i = strlen(&vector[j])+1;
                array_variables[k].string = (char *) malloc(i);
                memoria += i;
                strcpy (array_variables[k].string, &vector[j]);
                pausar();
            }
            
            
        }
            break;
            
        case asigna_vector_alfa4: 
        {
            // pausar();
             char * vector, *vector2;
            int i, i2;
            int j, j2;
            
            i = (int) array_variables[(int) p->nodo3->num].numero;    //variable origen
            j = (int) ( evalua(p->nodo4) * 127);  // posicion en el vector
            vector = arrayVectoresAlfa[i];   // base del vector

            i2 = (int) array_variables[(int) p->nodo1->num].numero;   //variable destino
            j2 = (int) ( evalua(p->nodo2) * 127);  // posicion en el vector
            vector2 = arrayVectoresAlfa[i2];   // hasta 32 vectores
            strcpy (&vector2[j2], &vector[j]);
        }
        
        break;

      //  pasar como parametros:  el indice del procedimiento que maneja el clic, el indice de la variable coordx, y el de coordy, un indice para cualBoton
        case graficos:
        {
            //nodografico = nuevonodo();
            nodografico = p;

            mainGraph();

        }
            break;

        case dibuja_linea:
        {
            flag_ventanas = 1; // hemos iniciado las ventanas
/*
            nodografico2 = nuevonodo();
*/
            nodografico2 = p;
            dibujarlinea();
        }
            break;


        case interpreta:

        {
            //ejecutar_string(p);
            
            int idx_prg_bak;
            
            idx_prg_bak = idx_prg;
            if (depurar)
            printf("CASO NODO interpreta\n");


            char * input;
            // constantes [(int)p->nodo1->num];
            input = constantes [(int) p->nodo1->num];


            /*Copy string into new buffer and Switch buffers*/
            yypush_buffer_state(yy_scan_string(input));


            idx_prg = 30;
            /*
                        printf("parse programa 1 %s \n", input);
             */
            yyparse();
            yylex_destroy();
            //yy_delete_buffer(input);

            /*
                         printf("fin parse programa 1\n");
             */
            yypop_buffer_state();
            //  yyrestart(input);


            /*Analyze the string*/
            //    yylex();
            //   yyparse();

            /*Delete the new buffer*/
            //  liberar_buffer();
            
            
            idx_prg = idx_prg_bak;

            if (err_number == 0) {
                /*
                            printf("ejecutando programa 1\n");
                 */

                execut(pila_programas[30]); // mejor hacer que el 1 sea el 31, es decir el último programa en el array de programas
                liberar_nodo(pila_programas[30], 30);
                
                //pendiente: liberar nodos de la memoria
                
                
                
            } else printf("hubieron errores, no se ejecuta\n");
        }

            break;



        case mensaje:
        {
            GtkWidget *ventana;

            GtkWidget *box1;
            GtkWidget *label;


            msgbox[0] = 0; //esto es importante porque empezamos a acumular datos en la variable
            execut(p->nodo1);
            fflush(stdout);
            printf("\n");

            ventana = gtk_window_new(GTK_WINDOW_TOPLEVEL);
            gtk_window_set_default_size(GTK_WINDOW(ventana), 300, 200);
            gtk_window_set_title((GtkWindow *) ventana, "MENSAJE");
            gtk_window_set_position(GTK_WINDOW(ventana), GTK_WIN_POS_CENTER);
            int n = 99;  //99 es la ventana msgbox
            g_signal_connect(ventana, "destroy", G_CALLBACK(close_window), n);
            

            //printf("--------> %s <------------", msgbox  );
            label = gtk_label_new(msgbox);
            box1 = gtk_vbox_new(FALSE, 0);

            /* Align the label to the left side.  We'll discuss this function and 
             * others in the section on Widget Attributes. */
            gtk_misc_set_alignment(GTK_MISC(label), 0, 0);

            /* Pack the label into the vertical box (vbox box1).  Remember that 
             * widgets added to a vbox will be packed one on top of the other in
             * order. */
            gtk_box_pack_start(GTK_BOX(box1), label, FALSE, FALSE, 0);

            gtk_container_add(GTK_CONTAINER(ventana), box1);

            gtk_widget_show(label);
            gtk_widget_show(box1);
            gtk_widget_show(ventana);
            msgbox[0] = 0;  // por si acaso vuelvo nula la string
        }

            break;

        case guardar_boton:
        {
            int a; //el indice de la ventana para el  boton
            a = (int) p->nodo1->num;
            a = get_indice(a);


            int literal;
            int procdesignator;
            literal = (int) p->nodo2->num; //texto del boton
            procdesignator = (int) p->nodo3->num; //indice del evento del boton

            int x;
            int y;
            x = (int) p->nodo4->num; // coordenadas
            y = (int) p->nodo5->num;

            //GtkWidget *fixed;
            GtkWidget *button;


            //fixed = gtk_fixed_new ();
            // gtk_container_add (GTK_CONTAINER (arrayWidgets[a].box1), button);

            button = gtk_button_new_with_label(constantes [literal]);
            gtk_signal_connect(GTK_OBJECT(button), "clicked", GTK_SIGNAL_FUNC(callback), (gpointer) procdesignator);
            gtk_fixed_put(GTK_FIXED(arrayWidgets[a].box1), button, x, y);
            //gtk_widget_show (fixed);    // el fijo
            gtk_widget_show(button); //el boton
            //gtk_widget_show (arrayWidgets[a].box1); 

        }

            break;

        case guardar_etiqueta:
        {
            int a;
            int l;
            int w;
            int h;

            a = (int) p->nodo1->num;
            a = get_indice(a);
            l = (int) p->nodo2->num;

            w = (int) p->nodo3->num;
            h = (int) p->nodo4->num;

            //GtkWidget *fixed;
            GtkWidget *label;

            //   fixed = gtk_fixed_new ();
            label = gtk_label_new(constantes [l]);

            //  gtk_container_add (GTK_CONTAINER (arrayWidgets[a].box1), label);
            gtk_fixed_put(GTK_FIXED(arrayWidgets[a].box1), label, w, h);
            gtk_widget_show(arrayWidgets[a].box1);
            //gtk_widget_show (fixed);
            gtk_widget_show(label);

        }

            break;

        case guardar_texto:
        {
            int a;
            int t;
            int w;
            int h;
            gchar *nombre;

            a = (int) p->nodo1->num; //ventana
            a = get_indice(a); //convierte a indice de ventanas
            t = (int) p->nodo2->num; // indice de variable alfa en var

            w = (int) evalua(p->nodo3); //ancho y alto
            h = (int) evalua(p->nodo4); //ancho y alto

            //GtkWidget *fixed;
            GtkWidget *entry;

            // fixed = gtk_fixed_new ();
            entry = gtk_entry_new();

            gchar buffer [33];


            sprintf(buffer, "%d", t); //le doy el nombre numerico

            gtk_widget_set_name(entry, buffer);
            gtk_entry_set_text(entry, array_variables[t].string);

            g_signal_connect(entry, "changed", G_CALLBACK(change_entry_callback), entry);
            //se activa con la tecla enter
            g_signal_connect(entry, "activate", G_CALLBACK(enter_callback), entry);

            //  gtk_container_add (GTK_CONTAINER (arrayWidgets[a].box1), entry);
            gtk_fixed_put(GTK_FIXED(arrayWidgets[a].box1), entry, w, h);
            gtk_widget_show(arrayWidgets[a].box1);
            //gtk_widget_show (fixed);
            gtk_widget_show(entry);

        }

            break;

        case crear_ventana: //los nombres se convierten en indices, hay que modificar/mejorar esto.
        {

            int aa;
            GtkWidget *box1;
            //box1 = gtk_vbox_new ( TRUE, 0);
            box1 = gtk_fixed_new();

            //int rows = 0; int cols = 0;

            aa = (int) p->nodo1->num; //ventana
            arrayIndices[idx_win] = aa; //convierte a indice
            int width;
            int heigh;

            width = (int) p->nodo2->num;
            heigh = (int) p->nodo3->num;

            //argv[0] =  constantes [(int)p->nodo1->num] ;

            arrayWidgets[idx_win].nombre = gtk_window_new(GTK_WINDOW_TOPLEVEL);
            arrayWidgets[idx_win].box1 = box1;
            gtk_window_set_default_size(GTK_WINDOW(arrayWidgets[idx_win].nombre), width, heigh);
            gtk_container_add(GTK_CONTAINER(arrayWidgets[idx_win].nombre), box1);
            gtk_widget_add_events(GTK_WIDGET(arrayWidgets[idx_win].nombre), GDK_CONFIGURE);
            if (idx_win == 0) {
                g_signal_connect(G_OBJECT(arrayWidgets[idx_win].nombre), "set-focus",  G_CALLBACK(set_focus), G_OBJECT(box1)  );
                //g_signal_connect(arrayWidgets[idx_win].nombre, "configure-event", G_CALLBACK(configure_callback), NULL);
                g_signal_connect(arrayWidgets[idx_win].nombre, "destroy", G_CALLBACK(close_main_window), NULL);
            } else
                // g_signal_connect (arrayWidgets[aa].nombre, "delete_event", G_CALLBACK (close_window), NULL);
                g_signal_connect(arrayWidgets[idx_win].nombre, "destroy", G_CALLBACK(close_window), idx_win);

            arrayWidgets[idx_win].indice = 1;
            
            if(depurar)
            printf("mostraremos la ventana %d\n", idx_win );

            gtk_widget_show(arrayWidgets[idx_win].nombre);

            idx_win++;
        }
            break;


        case cambiar_titulo:
        {
            gint a;
            gchar * argv[0];
            a = 1;
            argv[0] = "";
            gtk_init(&a, &argv);
            int aa;

            aa = (int) p->nodo1->num;
            aa = get_indice(aa);
            //argv[0] =  constantes [(int)p->nodo1->num] ;

            GtkWidget *ventana;
            ventana = arrayWidgets[aa].nombre;
            gtk_window_set_title((GtkWindow *) ventana, constantes [ (int) p->nodo2->num]);
            //gtk_widget_show (nuevo);

        }
            break;



/*
        case mostrar_ventana: 
              sin uso
		{
 		gint a;
      		gchar *argv[0] ;
 		a= 1;
      		argv[0] = "";
                gtk_init (&a, &argv);
                int aa;
                
                aa =   (int)p->nodo1->num ;
                //argv[0] =  constantes [(int)p->nodo1->num] ;
                
                GtkWidget *nuevo;
                nuevo = arrayWidgets[aa].nombre ; 
                gtk_window_set_default_size (GTK_WINDOW (nuevo), 300, 50);
                gtk_widget_show (nuevo);
            
                }  

            break;
*/

        case mostrar_ventanas:
        {
            printf("mostrando las ventanas\n");
            int i = 0;
            for (i = 0; i < 101; i++) {
                if (arrayWidgets[i].indice == 1) {
                    GtkWidget *nuevo;
                    nuevo = arrayWidgets[i].nombre;
                    // gtk_window_set_default_size (GTK_WINDOW (nuevo), 400, 350);
                    if (nuevo != NULL)
                    gtk_widget_show(nuevo);
                }
            }

            gtk_main();

        }
            break;


        case ventana:
        {
            gint a;
            gchar * argv[0];
            a = 1;
            //argv[0] = "";
            argv[0] = constantes [(int) p->nodo1->num];
            //	xmain (a, argv); 
        }
            break;

        case decimales:

            nro_decimales = ((int) p->nodo1->num);
            break;



        case secuencia:
             //printf("secuencia\n");
            execut(p->nodo1);
             //printf("secuencia 2\n");
            execut(p->nodo2);
            break;

        case secuencia_controles:
            // printf("secuencia\n");
            execut(p->nodo1);
            // printf("secuencia 2\n");
            execut(p->nodo2);
            break;




        case imprimir_literal:
            
            fflush(stdout);
            printf("%s", constantes [(int) p->nodo1->num]);
            sprintf(mensaje2, "%s", constantes [(int) p->nodo1->num]);
            strcat(msgbox, mensaje2);
            strcat(msgbox, " ");
/*
            printf("MSGBOX inicio---> %s   fin <-----", msgbox ) ;
*/
            //msgbox[0] = 0;
            break;

        case imprimir_var_alfa:
            //printf("%s", constantes [(int) var [(int)p->nodo1->num]] ) ;
        {
            int n;
            n = (int) p->nodo1->num;   // indice
            fflush(stdout);
            if (array_variables [ n  ].tipo!='S') return;
            printf("%s", array_variables [ n  ].string);
            if (ejecuta_desde_editor) {
                sprintf(mensaje2, "%s", array_variables [ n ].string);
                strcat(msgbox, mensaje2);
                strcat(msgbox, " ");
            }
            //printf("MSGBOX inicio---> %s   fin <-----", msgbox ) ;
            //msgbox[0] = 0;
        }
            break;
            
        case imprimir_var_vectoralfa:
        {
            char * vector;
            int i;
            int j;
            //i = var[(int) p->nodo1->num];    // el indice de la variable (designator)
            i =  (int) array_variables[(int) p->nodo1->num].numero;    // el indice de la variable (designator)
            j = (int) ( evalua(p->nodo2) * 127) ;
            vector = arrayVectoresAlfa[i];   // hasta 32 vectores
            printf("%s", &vector[j] );
        }
        break;

        case imprimir_expresion:



            switch (nro_decimales) {

                case 0:   // no recuerdo porque este caso es diferente
                    fflush(stdout);
                    printf("%.0f", evalua(p->nodo1));
                    sprintf(mensaje2, "%.0f", evalua(p->nodo1));
                    strcat(msgbox, mensaje2);
                    strcat(msgbox, " ");
                    break;

                case 1:
                    printf("%.1f", evalua(p->nodo1));
                    break;

                case 2:

                    printf("%.2f", evalua(p->nodo1));
                    break;

                case 3:
                    printf("%.3f", evalua(p->nodo1));
                    break;
                case 4:
                    printf("%.4f", evalua(p->nodo1));
                    break;
                case 5:
                    printf("%.5f", evalua(p->nodo1));
                    break;
                case 6:
                    printf("%.6f", evalua(p->nodo1));
                    break;
                case 7:
                    printf("%.7f", evalua(p->nodo1));
                    break;
                case 8:
                    printf("%.8f", evalua(p->nodo1));
                    break;
                case 9:
                    printf("%.9f", evalua(p->nodo1));
                    break;
                case 10:
                    printf("%.10f", evalua(p->nodo1));
                    break;
                case 11:
                    printf("%.11f", evalua(p->nodo1));
                    break;
                case 12:
                    printf("%.12f", evalua(p->nodo1));
                    break;
                case 13:
                    printf("%.13f", evalua(p->nodo1));
                    break;
                case 14:
                    fflush(stdout);
                    printf("%.14f", evalua(p->nodo1));
                    break;
                case 15:
                    printf("%.15f", evalua(p->nodo1));
                    break;

                default:
                    fflush(stdout);
                    printf("%.15f", evalua(p->nodo1));
                    break;

            };

            break;


        case imprimir_varios:
            //printf("imprimir varios\n");
            //msgbox[0] = 0;
            execut(p->nodo1);
            fflush(stdout);
            msgbox[0] = 0;
            printf("\n");
            break;


        case llamar:     //execut
            // p->tipo = llamar
            // p->nodo1->num = designator de la funcion a llamar
            // p->nodo2  = argumentos para llamar a la funcion
            {
                int procedimiento;
                int indice_de_la_variable;
                char tipo;
                ast * g;
                
                
                indice_de_la_variable = (int) p->nodo1->num  ;
                if (!strcmp(array_variables[indice_de_la_variable].nombre, "subcadena")) {
                    g = p->nodo2->nodo2->nodo2;
                    if (g!=NULL) {
                        subcadena((int) p->nodo2->nodo1->num, 
                                            p->nodo2->nodo2->nodo1,
                                            g->nodo1,
                                       (int) p->nodo3->num );
                    return;
                    }
                    else
                    {
                        subcadena2((int) p->nodo2->nodo1->num, 
                                            p->nodo2->nodo2->nodo1,
                                       (int) p->nodo3->num );
                    return;
                    }
                }
                
                if (!strcmp(array_variables[indice_de_la_variable].nombre, "izquierda")) {
                    izquierda((int) p->nodo2->nodo1->num, 
                                         p->nodo2->nodo2->nodo1,
                                   (int) p->nodo3->num );
                    return;
                }
                
                if (!strcmp(array_variables[indice_de_la_variable].nombre, "derecha")) {
                    derecha((int) p->nodo2->nodo1->num, 
                                         p->nodo2->nodo2->nodo1,
                                   (int) p->nodo3->num );
                    return;
                }
                
                tipo = array_variables[indice_de_la_variable].tipo;
                procedimiento = array_variables[indice_de_la_variable].procedimiento;
                if ((tipo != 'P') && (tipo!='F')) {
                    printf("procedimiento no encontrado en linea: %d \n",  p->nrolinea2 );
                    getchar();
                    exit(1);
                }
                else 
                {
                    //escribir el nombre del proc o funcio en un buffer
                    
                    //array_variables[indice_de_la_variable].nombre
                    
                    //execut      funcion
                    strcpy(array_variables[255].nombre, nombrefuncion) ;
                    push_param(255); 
                  
                    strcpy(nombrefuncion, array_variables[indice_de_la_variable].nombre) ;
                    strcpy(array_variables[255].nombre, nombrefuncion) ;
                    
                    
                    if (tipo=='P') {
                        push_param(255);
                        execut(procedimientos[ procedimiento ]); 
                        pop_param(255);
                        strcpy(nombrefuncion, array_variables[255].nombre) ;
                    }
                    else {
                        short i;
                        short cantidad = 0;
                        
                        ast * g;
                        ast * f = procedimientos[ procedimiento ];  // los argumentos
                        i = f->nodo1->num;   //designator de la funcion que se llama
                        
                        g = p->nodo2;

                        // en f tenemos una funcion
                        // en f->nodo1 el designator de la funcion
                        // en f->nodo2 los argumentos
                        // en f->nodo3 el cuerpo de la funcion

                        //push parametros
                        push_param(255);
                        i = push_argumentos(f->nodo2, g, &cantidad);
                        push_param(indice_de_la_variable);
                        execut(f); 
                        pop_param(indice_de_la_variable);
                        pop_argumentos(cantidad);
                        pop_param(255);
                        strcpy(nombrefuncion, array_variables[255].nombre) ;
                        g = p->nodo3;
                        if (g!=NULL) {
                            i = (int) p->nodo3->num;
                            if (array_variables[i].tipo='S') {
                                array_variables[i].string = array_variables[indice_de_la_variable].string;
                            }
                            else {
                                array_variables[i].numero = array_variables[indice_de_la_variable].numero;
                            }
/*
                            push_param(indice_de_la_variable);
                            pop_param(i);
*/
                        }
                        
                        
                        //pop parametros
                    }
                    pop_param(255); 
                    strcpy(nombrefuncion, array_variables[255].nombre) ;
                    
                }
                
                //array_variables[indice_de_la_variable].numero = return_value;
            }
            break;
            
        case retorno:
        {
            double resul;
            int i, j, k; 
            int t;
            char * str1;
            
            t = p->nodo1->tipo;
            if (t==nombre_de_variable) {
                char tipo;
                k = p->nodo1->num;
                tipo = array_variables[k].tipo;
                if (tipo=='S') {  //string
                    i = idx_pila - 1;
                    //k = p->nodo1->num;
                    if (pila[i].string!=NULL) {
                        str1 = pila[i].string;
                        if ((j = strlen(str1)) > 0) {
                            free(str1);
                            str1 = NULL;
                            memoria-=j;
                        }
                    }

                    j = strlen (array_variables[k].string)+1;
                    str1 = (char *) malloc(j);
                    memoria+=j;
                    strcpy (str1, array_variables[k].string );
                    pila[i].string = str1;
                    return;
                }
            }
            
            else
                
            {
                resul = evalua(p->nodo1);
                i = idx_pila - 1;
                pila[i].numero = resul;
            }
            
        }
        break;

        case asigna_num:
        {
            int indice;
            indice = (int) p->nodo1->num;
            //var[indice] = evalua(p->nodo2);
            array_variables[indice].numero = evalua(p->nodo2);
            indice = 0;  //para breakpoint
         // printf("asignar numerico var %d -- %.14f\n", indice, (double) var[indice]);
        }
            break;

        case asigna_alfa:
        {
            char * str1;
            int i;
            str1 = array_variables[(int) p->nodo1->num].string;
            
            if (str1!=NULL) {
                i=strlen(str1);
                if (i>0) {
                    //printf ("liberamos memoria de la  variable destino %s\n", 
              //          array_variables[(int) p->nodo1->num].nombre );
                    fflush(stdout);
                    free(array_variables[(int) p->nodo1->num].string);
                    array_variables[(int) p->nodo1->num].string = NULL;
                    memoria -= i;
                }
            }
            i=strlen(constantes [(int) p->nodo2->num])+1;
            //printf("asignar alfanumerico\n");
            //var[(int) p->nodo1->num] = p->nodo2->num;
            //strcpy(array_variables[(int) p->nodo1->num].valor , constantes [ (int) var [(int) p->nodo1->num] ]);
            array_variables[(int) p->nodo1->num].string = (char*) calloc(i, sizeof(char));
            memoria+=i;
            //printf ("asignamos memoria a la variable %s\n", array_variables[(int) p->nodo1->num].nombre );
            fflush(stdout);
            strcpy (array_variables[(int) p->nodo1->num].string,  constantes [(int) p->nodo2->num]);
            
        }
            break;
            
        case asigna_alfa_var:
        {
            int i, j, k;
            char * str1;
            char * str2;
            i = (int) p->nodo1->num; // var destino
            j = (int) p->nodo2->num; // var origen
            if (i==j) {
                return;
            }
                
            if (array_variables[i].string==NULL) {
                //nada
            } else {   //eliminamos el antiguo valor string de la variable
                str1 = (char *) array_variables[i].string;
                k = strlen(str1);
                if (k>0) {
                    //printf ("liberamos memoria de la  variable destino %s\n", array_variables[i].nombre );
                    fflush(stdout);
                    free (array_variables[i].string);
                    array_variables[i].string = NULL;
                    memoria-=k;
                }
            }
            
            if (array_variables[j].string==NULL) {
                // la variable origen es nula
                // habria que hacer que la destino sea nula
                fflush(stdout);
            } else
            {
                k = strlen(array_variables[j].string)+1;
                //printf ("asignamos memoria a la variable %s\n", array_variables[i].nombre );
                array_variables[i].string = (char * ) calloc (k, sizeof(char)); 
                memoria+=k;
                strcpy(array_variables[i].string, array_variables[j].string );
            }       
        }
            break;

        case continuar:
                {
                    retornar = 1;
                    salir1 = 0;
                }
                break;
                
        case salir :
                {
                    retornar = 1;
                    salir1 = 1;
                }
                break;

        case mientras:
            //printf ("mientras se cumple la condicion\n");
            {
                salir1 = 0;
                while (evalua(p->nodo1)) {
                    retornar = 0;
                    execut(p->nodo2);
                    //retornar = 0;
                    if (retornar == 1) 
                    { 
                        retornar = 0;
                        if (salir1 == 1) {
                            salir1 = 0;
                            break;
                        }
                    }
                }
            }
            //printf ("fin del bloque-mientras\n");
            break;

        case leer:
            //printf("leer var numerica\n");
        {
            ast *pp; //se puso esto para depuracion (watch)
            int inum = 0;
            double fnum;
            pp = p;
            inum = (int) p->nodo1->num;
            //printf("i = %d\n", inum);
            scanf("%lf", &fnum);
            //var[inum] = fnum;
            array_variables[inum].numero = fnum;  //tabla de simbolos
        }
            break;

        case leertexto:
            //printf("leer var numerica\n");
        {
            int indice;
            //ast * pp;
            int k;
            //char * str1;

            char texto[255];
            //pp = p;
            getstring(texto);
            if (error_getstring)
                getstring(texto);
            //gets(texto2);
            //scanf("%[^\n]",texto);

            ///scanf_s("%[^\n]", texto, 21);

            //fflush(stdin);
            indice = (int) p->nodo1->num;
            k = strlen(texto)+1;
            if (k>0) {
                reservamem(indice, k);
                //str1 = (char *) malloc (k);
                //memoria+=k;
                //strcpy (str1, texto);
                strcpy ( array_variables[indice].string , texto) ;   // = str1 ;
            }
            //strcpy(constantes [(int) var[indice]], texto);   //espacio de constantes para almacenar variables alfanumericas
            
        }
            break;

        case si:
            //printf("si se cumple la condicion\n");
            if (evalua(p->nodo1)) {
                execut(p->nodo2);
            } else
                if (p->subnodos == 3) {
                //printf("sino se cumple\n");
                execut(p->nodo3);
            };
            //printf("fin del bloque-si\n");

            break;

        case desde:
            //printf("desde\n");
        {
            int x = p->nodo1->num;
            //int y = evalua(p->nodo3);
            indice_ctr++;
            array_variables[x].numero = evalua(p->nodo2);
            counter1[indice_ctr] = (int) array_variables[x].numero;
            retornar = 0;
            for (counter1[indice_ctr]; counter1[indice_ctr] <= (int) evalua(p->nodo3); counter1[indice_ctr]++) {
                //y = evalua(p->nodo3);
                //var[x] = counter1[indice_ctr];
                array_variables[ x ].numero = counter1[indice_ctr];
                execut(p->nodo4);
                if (retornar == 1) 
                { 
                    retornar = 0;
                    if (salir1 == 1) {
                        salir1 = 0;
                        break;
                    }
                }
            }

            indice_ctr--;

        }

            break;


        default:
            break;

    }
    
    // fin del switch
//  profundidad--;
    return 0;

 }

/*
void evalua_doble(elnodo * p, elnodo * q) {
    double result1, result2;

}
*/

//static int prof = 0;
regmatch_t captures[2];

double evalua(ast * p) {
    double res;
    
    //printf("prof: %d \n", prof);
    //prof++;
    
    switch (p->tipo) {
        
        case llamar:      //evalua
            // p->tipo = llamar
            // p->nodo1->num = designator de la funcion a llamar
            // p->nodo2  = argumentos para llamar a la funcion
            {
                int procedimiento;
                int indice_de_la_variable;
                char tipo;
                indice_de_la_variable = (int) p->nodo1->num  ;

                if (!strcmp(array_variables[indice_de_la_variable].nombre, "instr")) {
                    short i;
                    i = instr((int) p->nodo2->nodo1->num, p->nodo2->nodo2->nodo1->num );
                    res =  (double) i;
                    return res;
                }
                
                if (!strcmp(array_variables[indice_de_la_variable].nombre, "largo")) {
                    short i;
                    i = (int) p->nodo2->nodo1->num;
                    i = strlen(array_variables[i].string);
                    res =  (double) i;
                    return res;
                }
                
                if (!strcmp(array_variables[indice_de_la_variable].nombre, "chkregex")) {
                        char * a;
                        char * b;
                        int i,j;
                        double * vector;   // hemos cambiado desde INT
                        short k, m;
                        j = p->nodo2->nodo1->num;
                        i = p->nodo2->nodo2->nodo1->num;
                        m = p->nodo2->nodo2->nodo2->nodo1->num;
                        m = array_variables[m].numero;
                        a = array_variables[i].string;
                        b = array_variables[j].string;
                        k = comprobar_regex(a, b);
                        vector = arrayVectores[m];
                        vector[0] = (double) captures[0].rm_so;
                        vector[1] = (double) captures[0].rm_eo;
                        res = (double) k;
                        return res;
                        
                }
                
                if (!strcmp(array_variables[indice_de_la_variable].nombre, "potencia")) {
                    int i, j;
                    double  k, m;
                    i =  p->nodo2->nodo1->num;
                    j =  p->nodo2->nodo2->nodo1->num;
                    k = array_variables[i].numero;
                    m = array_variables[j].numero;
                    res = (double) pow(k , m );
                    //res =  (double) i;
                    return res;
                }

                tipo = array_variables[indice_de_la_variable].tipo; //evalua
                procedimiento = array_variables[indice_de_la_variable].procedimiento;
                if ((tipo != 'P') && (tipo!='F')) {
                    printf("procedimiento no encontrado en linea: %d \n",  p->nrolinea2 );
                    getchar();
                    exit(1);
                }
                else 
                {
                    //  evalua   funcion
                    strcpy(array_variables[255].nombre, nombrefuncion) ;
                    push_param(255); 
                    
                    strcpy(nombrefuncion, array_variables[indice_de_la_variable].nombre) ;
                    strcpy(array_variables[255].nombre, nombrefuncion) ;
                    
                    if (tipo=='P') {
                         push_param(255);
                         execut(procedimientos[ procedimiento ]); 
                         pop_param(255);
                         strcpy(nombrefuncion, array_variables[255].nombre) ;
                         
                    }
                    else {
                    // ver si es una funcion de Inter, o una funcion integrada

                    
                        short i;
                        short nargs = 0;
                        
                        ast * g;
                        ast * f = procedimientos[ procedimiento ];  // los argumentos
                        //i = f->nodo1->num;   //designator de la funcion que se llama
                        
                        g = p->nodo2;

                        // en f tenemos una funcion
                        // en f->nodo1 el designator de la funcion
                        // en f->nodo2 los argumentos
                        // en f->nodo3 el cuerpo de la funcion

                        //push parametros
                        push_param(255);
                        i = push_argumentos(f->nodo2, g, &nargs);
                        push_param(indice_de_la_variable);
                        execut(f); 
                        pop_param(indice_de_la_variable);
                        pop_argumentos(nargs);
                        //restaura el nombre de la funcion actualmente en ejecucion
                        pop_param(255);
                        strcpy(nombrefuncion, array_variables[255].nombre) ;
                        res = array_variables[indice_de_la_variable].numero;
                        //pop parametros
                    }
                    pop_param(255); 
                    strcpy(nombrefuncion, array_variables[255].nombre) ;
                    
                    //pop
/*
                    if (ejecuta_desde_editor) {
                        sprintf(str_temp, "LINEA: %d   funcion: ", numlinea+1 );
                        strcat (str_temp, nombrefuncion );
                    }
*/
                }
                //array_variables[indice_de_la_variable].numero = return_value;
            }
            break;

        case evalua_vector:
        {
            double * vector;
            int i;
            double j;
            i = (int) p->nodo1->num;
            vector = arrayVectores [ (int) array_variables[i].numero ];
            j = vector[(int) evalua(p->nodo2) ];
            res =  (double) j;
        }
        break;


        case indice_strings: //una variable numerica
        
{
/*
            res = var [(int) p->num];
*/
            int n;
            double m;
            n = (int) p->num;
            m = array_variables[n].numero;
            
            res = m;
        }
            break;

        case un_numero:
            res =  p->num; //un numero constante
            break;

        case resta:

            res =  evalua(p->nodo1) - evalua(p->nodo2);
            break;

        case suma:
            res =  evalua(p->nodo1) + evalua(p->nodo2);
            break;

        case multiplica:
            res =  evalua(p->nodo1) * evalua(p->nodo2);
            break;

        case divide:
            if (evalua(p->nodo2) == 0) {
                fflush(stdout);
                printf("\nerror: division por cero.\n");
                exit(1);
            }
            res =  evalua(p->nodo1) / evalua(p->nodo2);
            break;

        case mayorque:
            res =  evalua(p->nodo1) > evalua(p->nodo2);
            break;

        case mayorigualque:
            res =  evalua(p->nodo1) >= evalua(p->nodo2);
            break;

        case noigualque:
            res = evalua(p->nodo1) != evalua(p->nodo2);
            break;

        case menorque:
            //printf("compara si %lf es menor que %lf\n", evalua(p->nodo1), evalua(p->nodo2));
            res = evalua(p->nodo1) < evalua(p->nodo2);
            break;

        case igualque:
            res =  evalua(p->nodo1) == evalua(p->nodo2);
            break;

        case menorigualque:
            res =  evalua(p->nodo1) <= evalua(p->nodo2);
            break;

        case negativo:
            res =  (double) (-1) * (evalua(p->nodo1));
            break;

        case comparaliteral:   //compara una variable a un literal

        {
            char *string1, *string3;
            char string2[255];
            int tipo;
            int i;
            i = (int) p->nodo2->num;
            string1 = array_variables[(int) p->nodo1->num].string;
            tipo = (int) p->nodo2->tipo;
            if (tipo==constante_literal) {
                //strcpy(string1, array_variables[(int) p->nodo1->num].valor);
                //printf("comparacion con un literal\n");
                strcpy(string2, constantes[(int) p->nodo2->num]);
                res = (double) !strcmp(string1, string2);
            }
            else {
                string3 = array_variables[i].string;
                res = (double) !strcmp(string1, string3);
            }
        }
        break;
        
        case comparaliteral2:   //compara una variable a un literal

        {
            char *string1, *string3;
            char string2[255];
            int tipo;
            int i;
            i = (int) p->nodo2->num;
            string1 = array_variables[(int) p->nodo1->num].string;
            tipo = (int) p->nodo2->tipo;
            if (tipo==constante_literal) {
                //strcpy(string1, array_variables[(int) p->nodo1->num].valor);
                //printf("comparacion con un literal\n");
                strcpy(string2, constantes[(int) p->nodo2->num]);
                res = (double) strcmp(string1, string2);
            }
            else {
                string3 = array_variables[i].string;
                res = (double) strcmp(string1, string3);
            }
        }
        break;
        
        case and :
        {
            res = evalua(p->nodo1) && evalua(p->nodo2);
        
        }
        break ;
        
        case or :
        {
             res = evalua(p->nodo1) || evalua(p->nodo2);
        }
        break ;
        

        default:
            res = 0;
            break;

    }
    
    //prof--;
    
    return res;
    
}

 

short comprobar_regex(char * expregular, char * texto) {
    regex_t regex;
    int reti;
    char msgbuf[100];
    
    /*
    int ii;
    ii = (sizeof(captures)/sizeof(captures[0]));
    */
    
    /* Compile regular expression */
    reti = regcomp(&regex, expregular,  REG_EXTENDED);  //"^a[[:alnum:]]"
    if (reti) {
        fprintf(stderr, "No se pudo compilar regex\n");
        exit(1);
    }

    /* Execute regular expression */
    reti = regexec(&regex,  texto ,  2, captures, 0);   //"abc"
    if (!reti) {
        return 1;  //puts("Match");
    }
    else if (reti == REG_NOMATCH) {
        return 0; //puts("No match");
    }
    else {
        regerror(reti, &regex, msgbuf, sizeof(msgbuf));
        fprintf(stderr, "Regex ha fallado: %s\n", msgbuf);
        exit(1);
    }

    /* Free memory allocated to the pattern buffer by regcomp() */
    regfree(&regex);

}

