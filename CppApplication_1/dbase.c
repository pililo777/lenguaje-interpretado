/*  dbase.c  Region de Includes */ 
#include "nodo.h"
#include "stdio.h"
#include "string.h"
#include "ctype.h"
#define UNIX
#ifdef DOS
#include "math.h"
#else
#ifdef UNIX
#include "stdlib.h"
#endif
#endif




#define MAXPALABRAS      10 /* maximo numero de palabras en el buffer */
#define MAXLARGO        128 /* maximo largo de caracteres por palabra */
#define BUFSIZE         128 /* tamano del buffer en caracteres */
#define MAXCANTCOMANDOS 128 /* comandos programados en este fuente */
#define MAXVARIABLES_NUM    120 /* cantidad de vars numericas */
#define MAXVARIABLES_CHAR   120 /* cantidad de vars alfanumericas */




/*
#define KEYSIZE 5
#define DATASIZE 35
 */
/*
char keybuf[KEYSIZE];
char keybuf2[KEYSIZE];
char databuf1[DATASIZE];
 */




extern int testlib();
extern int funcionDinamica();
extern int cargaDinamica();
extern int descargaDinamica();
extern int main2();
extern int use();
extern int list();
extern int t_close();
extern int interpretar();
extern void cargar();
extern void runall();
extern void listaAST();
extern ast * pila_programas[32];


int dbminit();
int delete();
int store();
int status;




int buscar_posicion();
int listavar();
int sum();
int print();
int rest();
int lc();
int ls();
int l();
int quit();
int dstore();
int clear();
int pwd();
int help();
int buffer();
int display();
int use();
int getdatos();
int list();
int editor();
int doit();
// int main2();
int enorden();
int t_close();
int runprog();
extern int main_anterior(int argc, char *argv[]);



struct rvar_n { /* vars numericas */
    char nombre[18]; /* nombre */
    double contenido; /* contenido */
};



struct rvar_c { /* vars alfanumericas */
    char nombre[18]; /* nombre */
    char contenido[MAXLARGO]; /* contenido */
};



struct rcomando {
    int (*pfuncion)();
    char *nombre;
};


struct rcomando                                   comando[MAXCANTCOMANDOS];
struct rvar_n                                     var_n[MAXVARIABLES_NUM];
struct rvar_c                                     var_c[MAXVARIABLES_CHAR];
int             punchar = -1;
int             punnum = -1;
char                                              buff1[BUFSIZE];
char                                              buff2[MAXPALABRAS][MAXLARGO];
int mquit, contador;



/*******  VARIABLES GLOBALES ************/

int *resultado = 0; /* para recuperar resultado de algunas funciones */
int depurando = 1; /* bandera para depurar */
int *parametro1;
int *parametro2;
 
/* FIN DE VARIABLES GLOBALES */



/*   BUCLE PRINCIPAL DE TODO EL PROGRAMA   */

int main(int argc, const char **argv)
{
    copyrigth();
    comandos();
}



void 

init_comandos() {

    int i;
 
    for (i = 0; i < MAXCANTCOMANDOS; i++) {
        comando[i].nombre = "";
        comando[i].pfuncion = 0;
    }
    buffer();

    comando[0].nombre = "clear";
    comando[0].pfuncion = clear;
    comando[1].nombre = "pwd";
    comando[1].pfuncion = pwd;
    comando[2].nombre = "quit";
    comando[2].pfuncion = quit;
    comando[3].nombre = "lc";
    comando[3].pfuncion = lc;
    comando[4].nombre = "ls";
    comando[4].pfuncion = ls;
    comando[5].nombre = "l";
    comando[5].pfuncion = l;
    comando[6].nombre = "help";
    comando[6].pfuncion = help;
    comando[7].nombre = "buffer";
    comando[7].pfuncion = buffer;
    comando[8].nombre = "store";
    comando[8].pfuncion = dstore;
    comando[9].nombre = "?";
    comando[9].pfuncion = print;
    comando[10].nombre = "display";
    comando[10].pfuncion = display;
    comando[11].nombre = "use";
    comando[11].pfuncion = use;
    comando[12].nombre = "save";
    comando[12].pfuncion = getdatos;
    comando[13].nombre = "list";
    comando[13].pfuncion = list;
    comando[14].nombre = "modify";
    comando[14].pfuncion = editor;
    comando[15].nombre = "do";
    comando[15].pfuncion = doit;
    comando[16].nombre = "arbol";
    comando[16].pfuncion = main2;
    comando[17].nombre = "close";
    comando[17].pfuncion = t_close;
    comando[18].nombre = "buscar_posicion";
    comando[18].pfuncion = buscar_posicion;
    comando[19].nombre = "strcmp";
    comando[19].pfuncion = strcmp;
    comando[20].nombre = "cargar";
    comando[20].pfuncion = cargar;
    comando[21].nombre = "run";
    comando[21].pfuncion = runall; 
    comando[22].nombre = "evalua";
    comando[22].pfuncion = interpretar;
    comando[23].nombre = "editor";
    comando[23].pfuncion = editor;
    comando[24].nombre = "cargalib";
    comando[24].pfuncion = cargaDinamica;
    comando[25].nombre = "vars";
    comando[25].pfuncion = funcionDinamica;
    comando[26].nombre = "descargalib";
    comando[26].pfuncion = descargaDinamica;
    comando[27].nombre = "testlib";
    comando[27].pfuncion = testlib;
    comando[28].nombre = "listaast";
    comando[28].pfuncion = listaAST;
    comando[29].nombre = "var";
    comando[29].pfuncion = listavar;
    comando[30].nombre = "prog";
    comando[30].pfuncion = runprog;
    comando[31].nombre = "editorgtk";
    comando[31].pfuncion = main_anterior;

}





void 

comandos() {
    init_comandos();
    mquit = 0;
    while (mquit == 0) {
        prompt();
    }
    printf("*** FIN DEL PROGRAMA\n");
}






/*

typedef struct  {
          char        tipo;
          char        nombre[18];
          char        valor[127]; 
          double     numero;
          
} struct_variable;
*/


#include "vars.h"
/*
extern struct_variable   array_variables[256];
extern char variables[127][127];
extern char constantes[127][127];
 * 
 * 
 * 
 * */

extern double var[127];  //en run.c

















int  

listavar() {
    int indice;
    printf("variable\n");
    indice = atoi(buff2[1]);
    printf ("tds: %s           ", array_variables[indice].nombre);
    if (array_variables[indice].tipo == 'N')
        
        printf ("%.14f\n", array_variables[indice].numero);
    else
        printf ("\"%s\"\n", array_variables[indice].valor);
    
    printf("array de variables: %s\n", variables[indice]);
    printf("array de constantes: %s\n", constantes[indice]);
    printf("array de var[%d]: %.14f\n", indice,  var[indice]);
    printf("constante[var[indice]]: %s  [%d]\n", constantes [ (int) var [indice] ], (int) var[indice]);
    return 0;
}


























extern void * execut(ast * a) ;
extern int gtk_iniciado;

int  

runprog() {
    int indice;
    
    int argc = 0;
    char *argv[0];
    
    //linea añadida porque cambiaba el punto por comma
    if (!gtk_iniciado) {
      gtk_disable_setlocale();
      gtk_init(&argc, &argv); 
    }
    
    gtk_iniciado = 1;
    
    indice = atoi(buff2[1]);
    printf("ejecutando programa %d\n", indice);
    execut(pila_programas[indice]);
    return 0;
}




























limpiar_buff1() {

    int i;
    for (i = 0; i<sizeof (buff1); i++)
        buff1[i] = '\0';
}




















#include <termios.h>
//para dehabilitar la entrada buferizada

#define STDIN_FILENO 1
#define  nro_bufers 100

int error_getstring2;

char arrayBuffers[nro_bufers][128];  /* cantidad de comandos en el historial */

static short ultimaPosicion = -1;
short posicionRetrocedida = 0;

char *

getstring2(char *s) {
        struct termios old_tio, new_tio;
        // unsigned char c;

        /* get the terminal settings for stdin */
        tcgetattr(1, &old_tio);

        /* we want to keep the old setting to restore them a the end */
        new_tio = old_tio;

        /* disable canonical mode (buffered i/o) and local echo */
        new_tio.c_lflag &= (~ICANON & ~ECHO);

        /* set the new settings immediately */
        tcsetattr(1, TCSANOW, &new_tio);
    posicionRetrocedida = ultimaPosicion + 1;
    short break_presionado;
    int i, k;  
     
    error_getstring2 = 0;
    /* Return NULL if no input is available */
    /*
        if (k == EOF)
            return NULL;

        if (k == 10) {
            //k = getchar();
            error_getstring2 = 1;
            //printf("se leyo un caracter 10\n");
            return NULL;
        }
       // Read and store characters until reaching a newline or end-of-file 
       // printf("\nentro en bucle\n");
         fflush(stdout);
     */
    break_presionado = 0;
    k = 0;
    for (i = 0; k != EOF && k != '\n';) {

        k = getchar();  //recogemos un caracter del teclado
       

        if (k == 65) 

        { // es tecla flecha arriba?
                                                            // printf("%d es 65\n", s[i]);
            if (i > 0 && s[i - 1] == 91) {
                if (posicionRetrocedida > (-1)) 
                {
                    //printf("has apretado la tecla flecha arriba\n");
                    //borramos lo escrito hasta ahora:

                    int j = i;
                    do {
                                                putchar(8);
                                                putchar(32);
                                                putchar(8);
                                                j--;
                    } while (j > 0);

                    break_presionado = 1;
                    //obtenemos la ultima palabra escrita en el array de buffers
                    {
                        posicionRetrocedida--;
                        if (posicionRetrocedida < 0) posicionRetrocedida = 0;
                        strcpy(s, arrayBuffers[posicionRetrocedida]);

                        //   posicionRetrocedida--;
                        i = strlen(s);
                        printf("%s", s);

                    }
                    // coger la ultima letra que envía la pulsación de una tecla extendida
                    k = getchar();
                    //break;
                } 
                else {
                    k = getchar();
                }
            }
        } 

        else 

        if (k == 66) 

        {   // es tecla flecha abajo?
                                                        // printf("%d es 65\n", s[i]);
            if (i > 0 && s[i - 1] == 91) {


                if (posicionRetrocedida > (-1)) {
                    //printf("has apretado la tecla flecha arriba\n");
                    //borramos lo escrito hasta ahora:

                    int j = i;
                    do {
                        putchar(8);
                        putchar(32);
                        putchar(8);
                        j--;
                    } while (j > 0);

                    break_presionado = 1;
                    //obtenemos la ultima palabra escrita en el array de buffers
                    {
                        posicionRetrocedida++;
                        if (posicionRetrocedida > (ultimaPosicion+1)) posicionRetrocedida--;
                        if (posicionRetrocedida > (nro_bufers - 1)) posicionRetrocedida--;
                        strcpy(s, arrayBuffers[posicionRetrocedida]);

                        i = strlen(s);
                        printf("%s", s);
                    }
                    // coger la ultima letra que envía la pulsación de una tecla extendida
                    k = getchar();
                    //break;
                }

                else {
                    k = getchar();
                }
            }
        }

        //fin teclas de cursor

        if (k == 127) {   // tecla de retroceso
            putchar(8);
            i--;

        } 

        else

        if (k >= ' ') {    
        //si es una tecla normal, la mostramos y metemos al buffer s
            printf("%c", k);
            s[i] = k;
            i++;
        }
     }
     // fin del bucle de introducir teclas

    if (k == 10) {  // hemos presionado la tecla   E N T E R
        s[i] = 0;
        printf("\n");

        if (strlen(s) > 0) {
            ultimaPosicion++;

            if (ultimaPosicion > (nro_bufers - 1)) 
                ultimaPosicion--;

            // guardamos el comando en el historial en la ultima posicion
            strcpy(arrayBuffers[ultimaPosicion], s);
        }

    }
    //aqui continua despues de break
    if (break_presionado) {

        //  printf("\n se ha presionado flecha arriba...., restauramos la ultima linea\n");
    } 

    else {

        // printf("\nel buffer tiene: %s  --  %d caracteres\n", s, i);
    }
    
    /* restore the former settings */
    tcsetattr(STDIN_FILENO,TCSANOW,&old_tio);
}






































/*********************/
introduzca_buff1() {
    do {
        printf(". ");

        //   gets(buff1); //he probado con scanf pero no funciona, se recomienda  fgets en stackoverflow
        getstring2(buff1);


    } while (puroespacios());
}




























/**********************/
buscar_comando() {
    int i;
    for (i = 0; i < MAXCANTCOMANDOS; i++) {
        if (strcmp(buff2[0], comando[i].nombre) == 0) {
            return (i);
        } else {
            ;
        }; /* endif */
    }; /* for */

    return (-1);

}

























/****************************/
int buscar_posicion() {
    char *string_buscada;
    int i = 0;
    int j = 0; //bool

    string_buscada = buff2[3];

    for (i = 0; i < punnum + 1; i++) {
        /*  printf("%d   ", i);
        printf("%s \n", var_n[i].nombre); */
        if (strcmp(var_n[i].nombre, string_buscada) == 0) {
            ;
            j = 1;
            break;
            ;
        } else {
            ;
        };
    };
    if (j) return (i);
    else
        return (-1);
}




























 
int 

prompt() {
    int argc;
    int i, found;

    limpiar_buff1();
    introduzca_buff1();
    argc = parse(); /* trozea buff1 en buff2[10] */
    found = 0;
    i = buscar_comando(); /* i retorna el numero de la funcion */
    if (i >= 0) found = 1;


    /* BUSCAR LA POSICION DE MEMORIA DEL PRIMER PARAMETRO */


    if (found) {

        // aqui se llama al comando correspondiente  
        resultado = (*comando[i].pfuncion) (argc, buff2);   

        if (depurando) {

            // printf("resultado %d\n", resultado);

        }
        
        resultado = 0;
        
        if (mquit ==1) {
            resultado = 1;
        }
        

    }; /* if found */


    /* else */

    if (!found)
        fprintf(stdout, "Comando %s: No encontrado.\n", buff2[0]);
    
    buffer();
    return resultado;
    
}






































/****************     inicio de las funciones   **********************/
display() {
    if (!strcmp(buff2[1], "memory")) {
        int i = 0;

        message("Variables Numericas:");


        for (i = 0; i < punnum + 1; i++) {
            fprintf(stdout, "%s = %18.18f\n", var_n[i].nombre, var_n[i].contenido);
        };

        message("Variables Alfa Numericas:");

        for (i = 0; i < punchar + 1; i++) {
            fprintf(stdout, "%s = %s\n", var_c[i].nombre, var_c[i].contenido);
        };
    } else
        fprintf(stdout, "Syntax error\n");
}






























 
quit() {
    mquit = 1;
    // printf("***  FIN DEL PROGRAMA\n\n\n");
    /*
            getchar();
     */
}

print() {
    int i, j = 0;
    for (i = 0; i < punnum + 1; i++) {
        if (!strcmp(var_n[i].nombre, buff2[1])) {
            fprintf(stdout, "%18.18f\n", var_n[i].contenido);
            j = 1;
        }
    }
    for (i = 0; i < punchar + 1; i++) {
        if (!strcmp(var_c[i].nombre, buff2[1])) {
            fprintf(stdout, "%s\n", var_c[i].contenido);
            j = 1;
        }
    }
    if (!j) fprintf(stdout, "%s: not found\n", buff2[1]);
}





























int

parse() {
    int i, j, k, hubocomilla;
    i = 0;
    j = 0;
    i = 0;
    while (buff1[i]) {
        k = 0;
        hubocomilla = 0;
        while (buff1[i] == ' ') i++;
        while (buff1[i] && buff1[i] != ' ') {
            buff2[j][k] = buff1[i];
            if (buff1[i] == '"') {
                hubocomilla = 1;
                i++;
                k++;
                while (buff1[i] != '"' && buff1[i]) {
                    buff2[j][k] = buff1[i];
                    i++;
                    k++;
                }
                buff2[j][k] = '"';
                buff2[j][k + 1] = '\0';
            }
            i++;
            k++;
            if (hubocomilla) break;
        } /* sale por aqui cuando encuentra un espacio */

        buff2[j][k] = '\0';
        j++;
        while (buff1[i] == ' ') i++;
    }
    return j;
}

































help(char *param, char *param2) {
    fprintf(stdout, "comandos:\n");
    fprintf(stdout, " l\n ls\n lc\n help\n pwd\n clear\n quit\n buffer\n store\n ?\n display memory\n");
    fprintf(stdout, " use\n save\n list\n do\n arbol\n close\n");
}












buffer() {
    int i, erabuffer = 0;
    for (i = 0; i < MAXPALABRAS; i++) {
        if (!strcmp(buff2[0], "buffer") || erabuffer) {
            fprintf(stdout, "%2d: '%s'\n", i, buff2[i]);
            erabuffer = 1;
        };
        sprintf(buff2[i], "%s", "(null)");
    }
}













puroespacios() {
    int i = 0, j = 1;
    while ((buff1[i] == ' ' || buff1[i] == '\t') && i < strlen(buff1)) i++;
    if (i < strlen(buff1)) j = 0;
    return (j);
}











dstore() {
    ///  int i;
    status = 0;
    if (strcmp(buff2[2], "to")) message("falta el 'to'");
    if (!strcmp(buff2[1], "(null)")) message("falta el valor a asignar");
    if (!strcmp(buff2[3], "(null)")) message("falta el nombre de la var o la ultima comilla");
    if (strcmp(buff2[1], "(null)") && buff2[1][0] != '"' && !(isdigit(buff2[1][0]))) message("falta la primera comilla del valor a asignar");
    if (!status) {
        dostore();
    }
}












dostore() {
    if (isdigit(buff2[1][0])) storenum();
    else storechar();
}











// busca la posicion en el vector de numeros del nombre de la variable
// si no la encuentra, crea una nueva posicion y crea la variable (nombre y valor)

storenum() {
    int i = 0;
    int j = 0;
    j = punnum;
    j++;
    i = buscar_posicion();
    if (!(i == -1))
        j = i;
    else
        punnum++;
    strcpy(var_n[j].nombre, buff2[3]);
    var_n[j].contenido = atof(buff2[1]);
}


















//TODO: buscar la posicion del nombre de la variable, similar a storenum.

storechar() {
    punchar++;
    strcpy(var_c[punchar].nombre, buff2[3]);
    sprintf(var_c[punchar].contenido, "%s", buff2[1]);
}











message(mensaje)
char *mensaje;
{
    fprintf(stdout, "%s\n", mensaje);
    status = 1;
}











editor() {
        char cmd[64];
        snprintf(cmd, sizeof cmd, "vi  %s", buff2[1]);
        system(cmd);
}













FILE *fd;

  

doit() {
    int argc;
    int i, found;
    fd = fopen(buff2[1], "r");
    do {
        for (i = 0; i<sizeof (buff1); i++) buff1[i] = '\0';
        fgets(buff1, 255, fd);  //lee la siguiente linea del fichero batch
        
        if (!feof(fd)) {
            if (i>0)
            {
                char a;
                i = strlen(buff1) - 1;
                do {
                    a = buff1[i];
                    buff1[i] = '\0';
                    i--;
                } while (a!='\r' && i >=0);

                //printf("linea leida del fichero: %s\n", buff1);
      
                argc = parse();
                found = 0;

                i = buscar_comando(); /* i retorna el numero de la funcion */

                //printf ("el comando encontrado es el %d\n", i);

                if (i >= 0) {
                        (*comando[i].pfuncion)  (argc , buff2)  ;
                        found = 1;
                    }
                
                
                if (!found) fprintf(stdout, "%s: not found\n", buff2[0]);
                buffer();
            }
        }
        // else 
        //     printf("end of file\n");



    } while (!feof(fd));
    close(fd);
}
