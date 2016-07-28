//run.c
#include <stdio.h>

/*
#include <time.h>
#include <sys/time.h>

#include <sys/types.h>
*/


#include <glib.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>
//  #include <gdk/gdkkeysyms.h>


FILE * ficheros[10];


extern int ejecuta_desde_editor;
extern int linenumber;
extern int LineaInicial[20];
extern int contador_lineaInicial;
extern struct ast* nodografico;
extern struct ast* nodografico2;
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

#include "vars.h"


double var[127]; // 127 variables numericas e indices a variables alfa y literales


extern int idx_vec;
extern ast * procedimientos[127];

extern ast * pila_programas[32];
extern int idx_prg;



extern int nro_decimales;

char msgbox[2550];
char mensaje2[255];


extern long memoria;

double evalua(ast *);


static int counter1[32];
static int indice_ctr = 0;
static int error_getstring = 0;

void * execut(ast *);

int * nuevoValorEnteros(int cantidad) {
    int * vector = malloc(sizeof (int) *  cantidad);   // 4 * cantidad (el * no es puntero)
    memoria += (sizeof (int) * cantidad);
    return vector;
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


extern struct ast * nuevonodo();
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


    printf("Tipo: %d\n", Tipo);
    return p;
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


struct widgets arrayWidgets[20]; //array de ventanas
int idx_win = 0; //indice de ventanas
static int arrayIndices[20]; //almacena los handles de las ventanas
struct widgets arrayBotones[20];

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
    el_proc = (int *) data;
    execut(procedimientos[ el_proc ]);
}


// elimina la ventana que se cierra del indice de ventanas abiertas

void cerrar_ventana(gpointer data) {
    int i, j;
    i = (int) data;
    for (j = i; j < 20; j++) {
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

static void enter_callback(GtkWidget *widget, gpointer data) // al dar enter en la caja de texto
{

    GtkWidget *entry;

    entry = (GtkWidget *) data;

    const gchar *entry_text;
    char buffer[33];

    int numero;

    sprintf(buffer, entry->name); //el nombre de la variable es en realidad un numero indice en 'var' y su value esta en 'constantes' (ver abajo)
    sscanf(buffer, "%d", &numero);


    entry_text = gtk_entry_get_text(GTK_ENTRY(entry));

    /*printf ("Entry contents: %s\n", entry_text);
    printf("variable  %d\n", numero);*/


    strcpy(constantes [(int) var[numero]], entry_text); // aplicamos el nombre del entry a la variable

}


extern char buff1[128];
extern int yylex_destroy(void);
extern int yyparse(void);
extern int err_number;
//extern void execut (elnodo *);
//extern pila_programas[32];

int interpretar() {
    
    printf("entrammos en la funcion interpretar\n");
    
    int idx_prg_bak;
    idx_prg_bak = idx_prg;
    char * input;
    input = buff1;
    /*
         printf ("el buff1 es : %s", buff1);
        printf("idx prg 1: %d\n", idx_prg);
     */
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
        execut(pila_programas[31]);
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
extern GtkWidget *textview2;
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
    gulong tiempo = 200000L;
    g_usleep (tiempo);
}



void * execut(ast * p) {
   
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
    
    if (p->tipo != secuencia) {
        int numlinea;
        
        if (p->tipo == si || p->tipo == mientras || p->tipo == desde  )
            numlinea = p->nrolinea1-1;
        else
            numlinea = p->nrolinea2-1;
        
    
        //resalta la linea del editorgtk en ejecucion
        if (ejecuta_desde_editor) {
        
        //en desarrollo: resaltar en editorgtk la linea del nodo ejecutado

        //movernos a la linea del nodo
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
        
        sprintf(str_temp, "LINEA: %d", numlinea+1 );
        
        gtk_label_set_label(label2, str_temp );
        gtk_widget_queue_draw(label2); 
        
        
        pausar();
        
        while (gtk_events_pending ()) gtk_main_iteration();
        
        }
        
    }
    
    switch (p->tipo) {
        
        
        case procedimiento:
        {
            execut(p->nodo2);
        }
        break;
        
        
        case  vaciar:
        {
            int  n;
            n = (int) p->nodo1->num;
            
            array_variables[n].valor[0] = 0   ;
            
        }
        break;
        
        case sumar_alfa:
        {
            int n, m, x, y;
            n = (int) p->nodo1->num;
            m = (int) p->nodo2->num;
            x = strlen(array_variables[n].valor);
            y = strlen(array_variables[m].valor) + x;
/*
            printf("%d\n", y );
*/
            if (y<=127)
            strcat(array_variables[n].valor, array_variables[m].valor);
            else printf("error concatenando...\n");
            
        }
        break;
        
        
	case mostrar:
	{
	   int n;
	   n = (int) p->nodo1->num;
           fflush(stdout);
	   printf ("%s", array_variables[n].valor);
           fflush(stdout);
           
	}
	break;



        case abrir:   //  abrir ARCHIVO
        {
            int n;
            n = (int) p->nodo2->num;
            n = (int) array_variables[n].numero;
            
// pendiente  quitar VAR y poner array_variables
            printf("abriremos el fichero:  %s\n", constantes[(int) var[(int)   p->nodo1->num]]) ;
            ficheros[n] = fopen(constantes[(int) var[(int)   p->nodo1->num]], "r");
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
            
                array_variables[x].valor[0] = c ;
                array_variables[x].valor[1] = 0 ;
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
            numero = atof(constantes[(int) var[(int) p->nodo1->num ] ]); //constantes [(int)p->nodo1->num]
            array_variables[(int) p->nodo2->num].numero = numero;

        }
        break;


        case convertir_numero_a_texto:
        {
            double numero;
            numero = array_variables[(int) p->nodo1->num].numero;
            sprintf(constantes[(int) var[(int) p->nodo2->num ] ], "%lf", numero);
        }
            break;

        case dibuja_circulo:
        {
            flag_ventanas = 1; // hemos iniciado las ventanas
            //   nodografico2 = nuevonodo();
            nodografico2 = p;
            dibujarlinea();
        }

            break;

        case dimensionar:
        {

            int * vector;
            int i;
            int j;
            j = (int) p->nodo2->num;
            vector = nuevoValorEnteros(j); // cantidad
            for (i = 0; i < j; i++) vector [i] = 0;
            arrayVectores[idx_vec] = vector;
            var[(int) p->nodo1->num] = idx_vec;
            idx_vec++;

        }
            break;

        case asigna_vector:
        {
            int * vector;
            int i;
            i = var[(int) p->nodo1->num];
            vector = arrayVectores[i];
            vector[(int) evalua(p->nodo2)] = (int) evalua(p->nodo3);
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
            
            printf("CASO NODO interpreta\n");


            char * input;
            // constantes [(int)p->nodo1->num];
            input = constantes [(int) p->nodo1->num];


            /*Copy string into new buffer and Switch buffers*/
            yypush_buffer_state(yy_scan_string(input));


            idx_prg = 31;
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

                execut(pila_programas[31]); // mejor hacer que el 1 sea el 31, es decir el último programa en el array de programas
                
                
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
            t = (int) p->nodo2->num; //variable alfa

            w = (int) evalua(p->nodo3); //ancho y alto
            h = (int) evalua(p->nodo4); //ancho y alto

            //GtkWidget *fixed;
            GtkWidget *entry;

            // fixed = gtk_fixed_new ();
            entry = gtk_entry_new();

            gchar buffer [33];


            sprintf(buffer, "%d", t); //le doy el nombre numerico

            gtk_widget_set_name(entry, buffer);
            gtk_entry_set_text(entry, constantes [(int) var[t]]);

            g_signal_connect(entry, "changed", G_CALLBACK(enter_callback), entry);

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
            if (idx_win == 0) {
                g_signal_connect(arrayWidgets[idx_win].nombre, "destroy", G_CALLBACK(close_main_window), NULL);
            } else
                // g_signal_connect (arrayWidgets[aa].nombre, "delete_event", G_CALLBACK (close_window), NULL);
                g_signal_connect(arrayWidgets[idx_win].nombre, "destroy", G_CALLBACK(close_window), idx_win);

            arrayWidgets[idx_win].indice = 1;
            
            
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
            for (i = 0; i < 21; i++) {
                if (arrayWidgets[i].indice == 1) {
                    GtkWidget *nuevo;
                    nuevo = arrayWidgets[i].nombre;
                    // gtk_window_set_default_size (GTK_WINDOW (nuevo), 400, 350);
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
            printf("%s", array_variables [ n  ].valor);
            sprintf(mensaje2, "%s", array_variables [ n ].valor);
            strcat(msgbox, mensaje2);
            strcat(msgbox, " ");
            //printf("MSGBOX inicio---> %s   fin <-----", msgbox ) ;
            //msgbox[0] = 0;
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


        case llamar:
            {
                int procedimiento;
                int indice_de_la_variable;
                indice_de_la_variable = (int) p->nodo1->num  ;
                procedimiento = array_variables[indice_de_la_variable].procedimiento;
                if (procedimientos[procedimiento] == NULL) {
                    printf("procedimiento no encontrado en linea: \n");
                    getchar();
                    exit(1);
                }
                else execut(procedimientos[ procedimiento ]);
            }
            break;

        case asigna_num:
        {
            int indice;
            indice = (int) p->nodo1->num;
            
            var[indice] = evalua(p->nodo2);
            array_variables[indice].numero = evalua(p->nodo2);
            
         //   printf("asignar numerico var %d -- %.14f\n", indice, (double) var[indice]);
            
        }
            break;

        case asigna_alfa:
            //printf("asignar alfanumerico\n");
            var[(int) p->nodo1->num] = p->nodo2->num;
            strcpy(array_variables[(int) p->nodo1->num].valor , constantes [ (int) var [(int) p->nodo1->num] ]);
            break;

        case continuar:
                {
                    retornar = 1;
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
                    retornar = 0;
                    if (salir1 == 1) {
                        salir1 = 0;
                        break;
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
            var[inum] = fnum;
            array_variables[inum].numero = fnum;  //tabla de simbolos
        }
            break;

        case leertexto:
            //printf("leer var numerica\n");
        {
            int indice;
            ast * pp;

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
            
            strcpy(constantes [(int) var[indice]], texto);   //espacio de constantes para almacenar variables alfanumericas
            
            strcpy(array_variables[indice].valor , texto);  //tabla de simbolos
            
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
            counter1[indice_ctr] = var[x] = evalua(p->nodo2);

            for (counter1[indice_ctr]; counter1[indice_ctr] <= (int) evalua(p->nodo3); counter1[indice_ctr]++) {
                //y = evalua(p->nodo3);
                var[x] = counter1[indice_ctr];
                array_variables[ x ].numero = counter1[indice_ctr];
                execut(p->nodo4);
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

double evalua(ast * p) {
    double res;
    
    //printf("prof: %d \n", prof);
    //prof++;
    
    switch (p->tipo) {

        case evalua_vector:
        {
            int * vector;
            int i;
            int j;
            i = (int) p->nodo1->num;
            vector = arrayVectores [ (int) var[i] ];
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
            res =  -evalua(p->nodo1);
            break;

        case comparaliteral:   //compara una variable a un literal

        {
            char string1[255];
            char string2[255];

            strcpy(string1, array_variables[(int) p->nodo1->num].valor);
            strcpy(string2, constantes[(int) p->nodo2->num]);
            res = (double) !strcmp(string1, string2);

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
