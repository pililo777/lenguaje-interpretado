/* minieditor.c modificado */
#include <malloc.h>
#include <regex.h>
#include <strings.h>

#define xrun


extern double var[127];
extern char contadorvar;
extern char contador;

#include "vars.h"
/*extern char variables[127][127];
extern char constantes[127][127]; */

extern int idx_prg;
extern int nodos;

#include <stdio.h>
#include "stdlib.h"
#include <string.h>

#ifndef xrun

#include <python2.7/Python.h>

//#include <Python.h>


void cargar(int, const char *);

//llama al sistema operativo con un comando

static int
Py_System(const char *command) {
    return system(command);
}

static PyObject* py_mySystem(PyObject* self, PyObject* args) {
    const char *s;
    int status;
    PyArg_ParseTuple(args, "s", &s);
    status = Py_System(s);
    return Py_BuildValue("i", status);
}

static PyObject* py_myFunction(PyObject* self, PyObject* args) {
    const char *s;
    PyObject *item;

    PyArg_ParseTuple(args, "s", &s);

    //  PyObject_Print (item, stdout, 0);
    xxmain(1, s);  //se cambia a la funcion cargar


    return Py_BuildValue("s", s);
}

//crea una lista

static PyObject* py_createPythonObject(PyObject* self, PyObject* args) {
    int i;
    PyObject *Rva = PyList_New(contadorvar);
    PyObject *dict = PyDict_New();
    llamar 'imprimir indira'

    for (i = 0; i < contadorvar; i++) {
        // PyObject *op = PyString_FromString(constantes[i]);
        char letra;
        letra = array_variables[i].nombre[0]; //primera letra del nombre de la variable
        if (letra > 'Z') { //variable numerica
            PyObject *item = PyFloat_FromDouble((double) var[i]);
            PyDict_SetItemString(dict, variables[i], item);  //array variables
        } else { //variable alfanumerica---
            PyObject *item = PyString_FromString(constantes[(int) var[(int) i]]);
            PyDict_SetItemString(dict, variables[i], item);
        }

        //PyObject *op = PyString_FromString(variables[i]);
        /*
                        if (PyList_SetItem(Rva,i,op) !=0) {
                                fprintf(stderr,"Error in creating python object\n");
                                exit(EXIT_FAILURE);
                        }
         */
    }

    return Py_BuildValue("N", dict);
    //return Py_BuildValue("N",Rva); 
}


//crea un diccionario

static PyObject* py_createPythonObject2(PyObject* self, PyObject* args) {
    PyObject *dict = PyDict_New();
    PyObject *item = PyFloat_FromDouble((double) idx_prg);
    PyDict_SetItemString(dict, "idx_prg", item); //numero de programas cargados o analizados

    PyObject *item2 = PyFloat_FromDouble((double) contador);
    PyDict_SetItemString(dict, "constantes", item2); //numero de constantes

    PyObject *item3 = PyFloat_FromDouble((double) contadorvar);
    PyDict_SetItemString(dict, "variables", item3); //numero de variables

    return Py_BuildValue("N", dict);
}

static PyObject* py_myFunction3(PyObject* self, PyObject* args) {
    const char *s;
    PyObject *item;

    //PyObject_Print (item, stdout, 0);

    return Py_None;

}

static PyObject* py_myFunction2(PyObject* self, PyObject* args) {
    char *s = "OK";
    PyObject *item;

    // PyArg_ParseTuple(args, "s", &s);

    //  PyObject_Print (item, stdout, 0);
    xxmain2();
    return Py_BuildValue("s", s);
}

static PyObject* py_myOtherFunction(PyObject* self, PyObject* args) {
    double x, y;
    PyArg_ParseTuple(args, "dd", &x, &y);
    return Py_BuildValue("d", x * y);
}

static PyObject* py_myprintf(PyObject* self, PyObject* args) {
    const char *s;
    const char *t;
    const char *r;
    PyArg_ParseTuple(args, "ss", &s, &t);
    sprintf(r, s, t);
    return Py_BuildValue("s", r);
}


static PyMethodDef myModule_methods[] = {
    { "myFunction", py_myFunction, METH_VARARGS},
    { "myFunction2", py_myFunction2, METH_VARARGS},
    { "myOtherFunction", py_myOtherFunction, METH_VARARGS},
    {"printf", py_myprintf, METH_VARARGS},
    {"mySystem", py_mySystem, METH_VARARGS},
    {"myList", py_createPythonObject, METH_VARARGS},
    {"myDict", py_createPythonObject2, METH_VARARGS},
    {NULL, NULL, 0, NULL}
};

void initmyModule() {
    (void) Py_InitModule("myModule", myModule_methods);
}
#endif

/*
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
*/
extern int idx_vec;
extern double * arrayVectores[32];
extern int idx_win;
extern FILE * yyin;
extern int err_number;

#include "nodo.h"




/*
typedef enum tipos_nodo {un_numero =1, desde, nombre_de_variable, 
			indice_strings, procedimiento, secuencia , imprimir, 
			suma, resta, multiplica, divide, si, mientras, asigna_num, asigna_alfa,
			mayorque, menorque, igualque, leer, leertexto, noigualque, menorigualque, mayorigualque, negativo,
			comparaliteral, imprimir_varios, imprimir_expresion, imprimir_literal, imprimir_var_alfa, guardar_boton, secuencia_controles,
			constante_literal, llamar, decimales, ventana, defventana, crear_ventana, mostrar_ventana, mostrar_ventanas, cambiar_titulo,
        mensaje, guardar_etiqueta, guardar_texto, interpreta




} tiponodo;

typedef struct elnodo {
	tiponodo tipo;
	double num;
	int    nrolinea1;
	int    nrolinea2;
	 
	int subnodos;
	struct elnodo * nodo1;
	struct elnodo * nodo2;
	struct elnodo * nodo3;
	struct elnodo * nodo4;
        struct elnodo * nodo5;
} elnodo;
*/

extern ast * pila_programas[32];
extern ast * procedimientos[127];
extern int idx_prg;
extern  long memoria;
extern int linenumber;

void liberar_mem();


void liberar_nodo( ast * p, int n)

{
    //printf("memoria: %d\n", memoria);
    //elnodo * p;
    //p=a;

        
        if (p==NULL) return;
        

/*
        if (p->tipo == stop) 
            pausar();
*/

    
        if (p == pila_programas[n]) {
                if (p->subnodos == 0) 
                    {
                        free(p);
                        nodos--;
                        //printf("no hay nodos para liberar\n");
                        return;
                    }
        
            if (p->subnodos > 0) {
                liberar_nodo(p->nodo1, n);
/*
            free(p->nodo1);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
            }

        if (p->subnodos > 1) {
            liberar_nodo(p->nodo2, n);
/*
            free(p->nodo2);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 2) {
            liberar_nodo(p->nodo3,n);
/*
            free(p->nodo3);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 3) {
            liberar_nodo(p->nodo4,n );
/*
            free(p->nodo4);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 4) {
            liberar_nodo(p->nodo5,n);
/*
            free(p->nodo5);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }
            
           free(p);
           memoria -= (long) sizeof (struct ast);
           nodos--;
       //    printf("librando el nodo raiz: %ld\n", memoria);
            
            
        
        pila_programas[n] = NULL;
        return;
    }
    else {
           
        if (p->subnodos == 0) 
        {
            free(p);
            memoria -= (long) sizeof (struct ast);
            nodos--;
         //   printf("librando un nodo sin subnodos: %ld\n", memoria);
            return;
        }

           
           if (p->subnodos > 0) {
            liberar_nodo(p->nodo1, n);
            
/*
            free(p->nodo1);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/

    }

        if (p->subnodos > 1) {
            liberar_nodo(p->nodo2, n);
/*
            free(p->nodo2);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
}
 
        if (p->subnodos > 2) {
            liberar_nodo(p->nodo3, n);
/*
            free(p->nodo3);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 3) {
            liberar_nodo(p->nodo4, n);
/*
            free(p->nodo4);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 4) {
            liberar_nodo(p->nodo5, n);
/*
            free(p->nodo5);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }
           
           free(p);
           memoria -= (long) sizeof (struct ast);
           nodos--;
           
       //    printf("librando el nodo: %ld\n", memoria);
           return;

    }
    //return
        
}
 

extern int gtk_iniciado;
extern int ejecuta_desde_editor;

int
main_anterior (int argc, char *argv[])
//main_old()
{
   memoria = 0;
   ejecuta_desde_editor = 1; // true
        
  // gtk_init (&argc, &argv);

      argc = 0;
    
    gtk_iniciado = 1;

    ejecuta_desde_editor = 0;
    return 0;
}


extern short comprobar_regex(char * , char * );
extern regmatch_t captures[2];


 
 const int numelem = 6;
 const char * RegExps[10] = { "[0-9]+|[0-9]+\".\"[0-9]+",   "\]|['{}<>,=+*()\\[]",  "[A-Z][A-Z_0-9]*",  "[a-z][a-z_0-9]*",  "llamar|desde|hasta|imprimir|si|sino|si-fin|funcion|proc|procedimiento|entonces|mientras|haz|fin-haz|leer|decimales|terminar|ventana|dim|convertir|stop|continuar|salir|push|pop|retornar|pausa|use|close|abrir|cerrar|vaciar|registro|fin-registro|insertar|evalua|etiqueta|texto|boton|buscar|mensaje|actualizar|linea|circulo",  "(/\\*([^*]|(\\*+[^*/]))*\\*+/)|//[^\n]*",  "(/\\*([^*]|(\\*+[^*/]))*\\*+/)|//[^\n]*" };
 const char * colorTags[10] = {"numeros",  "signos", "alfanum", "varnumerica", "reservadas", "comentarios", "comentario2"  };
 const char * colores[10] = {"#DB30DD", "yellow", "#5A56DC" , "#CFC63E",  "#7E9C32" ,   "lightgray", "gray" };
 const char  fore_back[] = {'F', 'F', 'F', 'F', 'F', 'F', 'B'};
 

int random() {
  unsigned int limit = 6;
  srand((unsigned int)**random + (unsigned int)time(NULL));
  srand(rand());
  for (int i = 0; i < 10; i++) {
    printf("%d\n", rand() % limit);
  }
}

void interpretarEditor();
 
extern short inter_flag;
 

void liberar_mem() {
    char str1 [100];
    char str2 [100];
    char str3 [100];
//  printf("check9 liberando memoria\n");
            liberar_nodo(pila_programas[0], 0);
            //liberar_nodo(pila_programas[31], 1);

            while (idx_prc>0)
            {
                idx_prc--;
                liberar_nodo(procedimientos[idx_prc], idx_prc);
            }
            
            //liberar vectores:
            while (idx_vec>0)
            {
                int tamano;
                double * vector;
                idx_vec--;
                
                vector = arrayVectores[idx_vec];
#ifdef __APPLE__
#pragma message ("compilando en apple")
                tamano = malloc__size(vector);
#else
#pragma message( "no es apple" )
                tamano = malloc_usable_size(vector);
#endif
                free(vector);
                memoria -= tamano;
            }
            
            contador = 0; contadorvar =0;
           // free ( procedimientos[6]->nodo1);
           // free (procedimientos[6]);
             sprintf(str1, "Constantes: %d", (int) contador );
             sprintf(str2, "Variables: %d", (int) contadorvar );
             sprintf(str3, "Memoria: %li -- nodos: %d", (long) memoria, nodos );
            
            if (ejecuta_desde_editor) {

            }
            else {
                printf("%s\n", str1);
                printf("%s\n", str2);
                printf("%s\n", str3);
            }
            
            
         //   liberar_nodo(pila_programas[31], 31);
      //      printf("memoria: %ld \n", memoria);

/*
          g_free(input);
           
           
          yy_delete_buffer(input);  
            
       yy_delete_buffer(YY_CURRENT_BUFFER);   
*/
             

            /*Analyze the string*/
            //    yylex();
            //   yyparse();

            /*Delete the new buffer*/
            //  liberar_buffer();
            
            
         // descomentar   g_free(input);
            
  //  printf("fin clicked\n");


}


//extern int contador, contadorvar;
// void gtk_label_set_text( GtkLabel   *label,  const char *str );




extern char modo_pausa;
extern char en_pausa;
extern char buff1[128];



extern int instalavar(char);
extern char *yytext;


FILE * fichero = (FILE *) 0;
 
void old_main(int argc, const char **argv) {
    // 	GtkWidget * ventana;



    //       gtk_init (&a, &gargv);

    int i;
    //elnodo * comando, * numero, * variable;

    //variable = nuevonodo();
    //variable->tipo = indice_strings;  //nombre de variables num�ricas.
    //yytext = "numerito";
    //variable->num = (char) instalavar(contadorvar++);

    //numero = nuevonodo();
    //numero->tipo = un_numero;
    //numero->num = 4;
    //
    //comando = nuevonodo();
    //comando->tipo = asigna_num;
    //comando->nodo1 = variable;
    //comando->nodo2 = numero;
    //comando->subnodos = 2;

    //e x e c u t (comando);

    //yytext = "numerito2";
    //numero->num = 8;
    //variable->num = (char) instalavar(contadorvar++);
    //e x e c u t (comando);


    //

    // free(comando), numero, variable.....eliminar estos nodos de memoria.

    //printf("hola\n");
    //system ("cd");
    //printf("%d\n", argc);
    //printf("%s\n", argv[0]);

    if (argc == 1) {

        printf("analizando el programa: %s\n", argv);


    }



    if (argc > 0) { //  {     //LO normal es :   (argc > 1)  --  para depurar con un programa: (argc = 1)
        //yyin = fopen("c:\\inter\\tst10.pr", "r");
        i = 1;
        do {

            yyin = fopen(argv[1], "r"); //comentar para depurar
            if (yyin != NULL) {
                //printf("abierto.....\n");
                {
                    yyparse();
                    fclose(yyin);
                    i++;
                }
            }
            else {
                printf("imposible abrir fichero.\n");
                return;
            }
        } while (i != argc); //  (i != argc);  //   // ; para depurar:  (i==1); modificar abajo tambien(run)

        //ejecuciona los programas de la pila.

        // CORRE HASTA 32 PROGRAMAS:

        i = 1;
        idx_win = 0;
        do {
            execut(pila_programas[i - 1]);
            printf("hemos finalizado\n");
            i++;
        } while (i != argc); // (i != argc);     //para depurar:  ( (i == 1); //
        // exit (0);

        // libera la memoria de los vectores o matrices enteras
        int i;
        if (idx_vec > 0) {
            for (i = idx_vec - 1; i >= 0; i--) {
                double * vector;
                vector = (double*) arrayVectores[i];
                printf("liberando vector %d\n", i);
                // free(vector);  //revisar porqué da error desde que se hizo la ventana grafica.
            }
        }

        return; //para el modulo python
    }
    else
        printf("usar: inter.exe nombreprograma [nombreprograma....]\n");
}

 



extern char buff2[10][128];
/*
     CARGA PROGRAMAS, EL NUMERO DE PROGRAMAS A CARGAR VA EN EL PARAMETRO ARGC
     LA POSICION EN LA PILA DE PROGRAMAS VIENE DADA POR IDX_PROG
*/

extern void initProcedimientos();

int cargar(int argc, const  char argv[][128])
/*
void xxmain (int argc, const char *argv)
 */ {
    // int argc = 2;
    // char *argv = nombreprograma;
    // 	GtkWidget * ventana;

    //gtk_init (&argc, &argv);

    //       gtk_init (&a, &gargv);

    int i;
   // argv = buff2;
    //elnodo * comando, * numero, * variable;

    //variable = nuevonodo();
    //variable->tipo = indice_strings;  //nombre de variables num�ricas.
    //yytext = "numerito";
    //variable->num = (char) instalavar(contadorvar++);

    //numero = nuevonodo();
    //numero->tipo = un_numero;
    //numero->num = 4;
    //
    //comando = nuevonodo();
    //comando->tipo = asigna_num;
    //comando->nodo1 = variable;
    //comando->nodo2 = numero;
    //comando->subnodos = 2;

    //execut(comando);

    //yytext = "numerito2";
    //numero->num = 8;
    //variable->num = (char) instalavar(contadorvar++);
    //execut(comando);


    //

    // free(comando), numero, variable.....eliminar estos nodos de memoria.

    //printf("hola\n");
    //system ("cd");
    //printf("%d\n", argc);
    //printf("%s\n", argv[0]);

    /*
        if (argc == 1) {
        
            printf("analizando el programa: %s\n", argv[argc]);
    
      
        }
     */



    if (argc > 1) { //  {     //LO normal es :   (argc > 1)  --  para depurar con un programa: (argc = 1)
        //yyin = fopen("c:\\inter\\tst10.pr", "r");
        i = 1;
        do {
            printf("abriendo el fichero %s\n", argv[i]);
            yyin = fopen(argv[i], "r"); //comentar para depurar
            if (yyin != NULL) {
                //printf("abierto.....\n");
                {
                    printf("cargando en pila programas indice %d\n", idx_prg);
                    //initProcedimientos();
                    yyparse();
                    printf("memoria: %li\n", (long) memoria);
                    linenumber  = 1;
                    fclose(yyin);
                    i++;
                }
            }
            else {
                printf("imposible abrir fichero.\n");
                                                int k;
                                                k = getchar();
                                                return;
            }
        } while (i != argc);    //  (i != argc)  para depurar:  (i==1); modificar abajo tambien(run)

        return; //para el modulo python
    }
    else
        printf("usar: inter.exe nombreprograma [nombreprograma....]\n");
}



extern int mquit;
extern int gtk_iniciado;
extern void initProcedimientos();

void runall() {
    int argc = 0;
    char *argv[0];

    int i;

    memoria = 0;

    if (!gtk_iniciado) {
      gtk_disable_setlocale();
      gtk_init(&argc, &argv); 
    }
    
    gtk_iniciado = 1;
    

    //  window = create_window ();
    //  gtk_widget_show_all (window);

    //  gtk_main ();
    //elnodo * comando, * numero, * variable;

    //variable = nuevonodo();
    //variable->tipo = indice_strings;  //nombre de variables num�ricas.
    //yytext = "numerito";
    //variable->num = (char) instalavar(contadorvar++);

    //numero = nuevonodo();
    //numero->tipo = un_numero;
    //numero->num = 4;
    //
    //comando = nuevonodo();
    //comando->tipo = asigna_num;
    //comando->nodo1 = variable;
    //comando->nodo2 = numero;
    //comando->subnodos = 2;

    //execut(comando);

    //yytext = "numerito2";
    //numero->num = 8;
    //variable->num = (char) instalavar(contadorvar++);
    //execut(comando);
    //

    // free(comando), numero, variable.....eliminar estos nodos de memoria.

    //printf("hola\n");
    //system ("cd");
    //printf("%d\n", argc);
    //printf("%s\n", argv[0]);



    // printf("ejecutando el programa\n");


    //if   (argc > 0) {     //  {     //LO normal es :   (argc > 1)  --  para depurar con un programa: (argc = 1)
    //yyin = fopen("c:\\inter\\tst10.pr", "r");


    i = 0;
    idx_win = 0;
    do {
        printf("ejecutando programa %d\n", i);
        execut(pila_programas[i]);
        i++;
    } while (pila_programas[i]!=0); // (i != argc);     //para depurar:  ( (i == 1); //
    // exit (0);
    mquit = 0;
    return; //para el modulo python
}

/*
        else
                        printf("usar: inter.exe nombreprograma [nombreprograma....]\n");
 */


