    #include <stdlib.h>
    #include <stdio.h>
    #include <dlfcn.h>

extern int contador;
extern int contadorvar;

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
extern struct_variable array_variables[256];
extern char constantes[127][127];
*/
 


const char * libreria = "libmyModule.so";
void *el_handle;
char *el_error;

  int cargaDinamica() {

       el_handle = dlopen (libreria, RTLD_NOW || RTLD_GLOBAL);
        if (!el_handle) {
            fputs (dlerror(), stderr);
            return 0;
        }

//        dlclose(handle);
    }
  
  int descargaDinamica() {
        dlclose(el_handle);
  }
  
  
int funcionDinamica() {
    void (*ejemploFuncionDinamica)();
/*
    void *el_handle;
    char *el_error;
*/
    if (el_handle == NULL) {
        printf("debes cargar la libreria con el comando cargalib\n");
        return -1;
    }
    ejemploFuncionDinamica = dlsym(el_handle, "listarTDS");

    if ((el_error = dlerror()) != NULL)  {
            fputs(el_error, stderr);
            return(1);
        }
        //aqui se realiza la llamada a 'listarTDS' en la libreria dinamica
        (*ejemploFuncionDinamica)(&contador, &contadorvar, array_variables, constantes);
    }

    
//#include <dlfcn.h> 
#include <string.h> 
void *lib; 



int testlib() 
{ 
    
    char *s; 
    int FromPos, ToPos; 
    char* (*Btree)(); 
    void* (*CrearRaiz)();
    
    

    lib = dlopen("btree.dll", RTLD_LAZY); 
    Btree = dlsym(lib, "testdin"); 
    CrearRaiz = dlsym(lib, "creaRaiz");
    (*CrearRaiz)();

/*
    s = strdup("Test"); 
    FromPos = 2; 
    ToPos = 3; 
*/
    //printf("Result from testdin: ’%s’\n", (*Btree)()); 
    //dlclose(lib); 
    return 0; 
}

void listaAST()  {
      void* (*Btree)();
    Btree = dlsym(lib, "listaBT");
    (*Btree)();

}



void insAST(char * clave) {
    void* (*Btree)();
    Btree = dlsym(lib, "inserta_bt");
    (*Btree)(clave);
}
