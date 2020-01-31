/*  //github
#include <python2.7/Python.h>

static PyObject* py_myFunction(PyObject* self, PyObject* args) {
    char *s = "Hello from C!";
    return Py_BuildValue("s", s);
}

static PyObject* py_myOtherFunction(PyObject* self, PyObject* args) {
    double x,y;
    PyArg_ParseTuple(args, "dd", &x, &y);
    return Py_BuildValue("d", x*y);
}


static PyMethodDef myModule_methods[] = { 
                { "myFunction", py_myFunction, METH_VARARGS  },
                { "myOtherFunction", py_myOtherFunction, METH_VARARGS  },
                {NULL, NULL }
};

void initmyModule() {
    (void) Py_InitModule("myModule", myModule_methods);
}
*/



#include <stdio.h>

extern   int variables_count ;
 
//extern char   variables[127][127];
extern char   constantes[127][127];

/*
typedef struct struct_variable  {
          char        tipo;
          char        nombre[48];
         // char        valor[127]; 
          char *      string;
          double      numero;
          int         procedimiento;
          short       backup;
          int       dim1;
          int       dim2;
} ;
*/


typedef struct struct_variable  {
          char        tipo;
          char        nombre[48];
         // char        valor[127]; 
          char *      string;
          double      numero;
          int         procedimiento;
          short       backup;
          int       dim1;
          int       dim2;
} struct_variable;






extern struct struct_variable array_variables[256];
 
/*struct struct_variable  {
          char        tipo;
          char        nombre[18];
          char      * string;
          char        valor[127]; 
          double      numero;
          int         procedimiento;
} ;  */


/*struct_variable   array_variables[256]; */



/*
struct_variable   array_variables[256];
*/
 //void SomeMethod(struct Coordinate (*coordinates)[10])

void listarTDS(int * contador, int * contadorvar, struct struct_variable array_variables[256], char  constantes[127][127] ) {
    int i;
    int cont, contvar;
    cont = (int) *contador;
    contvar = (int) *contadorvar;
/*
    array_variables = (struct_variable) *array_var;
*/
    printf("VARIABLES: %d\n", contvar);
    
    for (i=0; i<contvar;i++) {
        char tipo;
        tipo  = (char) array_variables[i].tipo  ;
        printf("var %3d  %25s  %c     ", i, array_variables[i].nombre, tipo);
        switch (tipo) {
            case 'N':
            {
                printf("valor %lf\n", array_variables[i].numero);
            }
                break;
        
            case 'S':
            {
                if (array_variables[i].string!=NULL)
                    printf("%s\n", array_variables[i].string);
                else
                    printf("\n");
            }
                break;
            
            default:
                printf("proc: %d\n", array_variables[i].procedimiento );
                break;
        }
    }
     printf("CONSTANTES: %d\n", cont);
    for (i=0; i<cont;i++) {
        printf("const  %d    %-60s\n", i, constantes[i]);
    }
     printf("total: %d\n", cont + contvar );
}

/*
extern struct struct_variable array_variables[];
extern int  contadorvar;

void listarTDS2( ) {
    int i;

    printf("CANTIDAD DE VARIABLES EN EL ARRAY: %d\n", contadorvar);
    
    printf("VOLCADO DE VARIABLES:\n");
 
    for (i=0; i<contadorvar;i++) {
        printf("var %3d  %25s   %c ", i, array_variablesx2[i].nombre, array_variablesx2[i].tipo);
        if (array_variablesx2[i].tipo=='N') 
            printf("%lf\n", array_variablesx2[i].numero);
        else
            printf("%s\n", array_variablesx2[i].valor);
    }
}
*/

