    #include <stdlib.h>
    #include <stdio.h>
    #include <dlfcn.h>

const char * libreria = "/lib/libmyModule.so";
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
  
  
int llamaCosine() {
    void (*cosine)();
/*
    void *el_handle;
    char *el_error;
*/
    cosine = dlsym(el_handle, "pruebita");

    if ((el_error = dlerror()) != NULL)  {
            fputs(el_error, stderr);
            return(1);
        }
        (*cosine)();
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
    
    

    lib = dlopen("/lib/libbtree.so", RTLD_LAZY); 
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
