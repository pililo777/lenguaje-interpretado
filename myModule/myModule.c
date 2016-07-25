/*
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

// ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}

#include <stdio.h>

extern   int variables_count ;
 
extern char   variables[127][127];
extern char   constantes[127][127];
 
typedef struct  {
          char        tipo;
          char        nombre[18];
          char        valor[127]; 
          double     numero;
} struct_variable;

/*
struct_variable   array_variables[256];
*/


/*
struct_variable   array_variables[256];
*/
 

void pruebita(int * contador, int * contadorvar,  struct_variable  array_variables[256], char constantes[127][127] ) {
    int i;
    int cont, contvar;
    cont = (int) *contador;
    contvar = (int) *contadorvar;
/*
    array_variables = (struct_variable) *array_var;
*/
    printf("VARIABLES: %d\n", contvar);
 
    for (i=0; i<contvar;i++) {
        printf("varalfa nombre %d    %s   %c ", i, array_variables[i].nombre, array_variables[i].tipo);
        if (array_variables[i].tipo=='N') 
            printf("%lf\n", array_variables[i].numero);
        else
            printf("%s\n", array_variables[i].valor);
    }
     printf("CONSTANTES: %d\n", cont);
    for (i=0; i<cont;i++) {
        printf("const  %d    %s\n", i, constantes[i]);
    }
     printf("total: %d\n", cont + contvar );
    
     
}


