#pragma region variables
//usando sublime como editor de texto alternativo a Netbeans
// version para github  rama errorMem segunda prueba  ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}..
extern int depurar;

#include "stdio.h"
short  int tam_registro = 20;
/*
typedef struct {
        char    *puntero;f
        int     tamano;
} datum;
 */
/*
datum   fetch();
datum   firstkey();
datum   nextkey();
 */
/*
datum   key, data, testdata;
 */


typedef char tipollave;
typedef long int xapuntador;
typedef short int posicion;

typedef struct xnodo {
    short int xconteo;
    char xllave[4][55];
    long int xrama[5];
    long int datoInt[4];
};



extern char buff1[];
void inserta(tipollave *nuevallave, xapuntador *xraiz, xapuntador *datoEntero, int *encontrar);
void empujarabajo(tipollave *nuevallave, xapuntador *xp, int *empujararriba, tipollave *x, xapuntador *xxder, xapuntador *datoInt, xapuntador *datoInt2, int *encontrar);
void empujardentro(tipollave *x, xapuntador *xxder, xapuntador *xp, posicion k, long int *datoInt);
void dividir(tipollave *x, xapuntador *xxder, xapuntador *xp, posicion *k, tipollave *y_llave, xapuntador *xyder, long int * datoInt, long int * y_datoInt);
int buscar(char * , xapuntador * , int * , xapuntador *, posicion *);
void grabarnodo(xapuntador *xp, struct xnodo *xpn, int variableArray);
void leenodo(xapuntador *xp, struct xnodo *xpn, int variableArray);
void leenodo(xapuntador *xp, struct xnodo *xpn, int variableArray);
void buscarnodo(tipollave *objetivo, xapuntador *xp, int *encontrar, posicion *k);


#define MAX 4;
#define MIN 2;

int opcion;
FILE *arch;
FILE *datafile;

posicion i;

/* del file bt.c */
typedef struct xnodo {
    short int xconteo;
    char xllave[4][55];
    long int xrama[5];
    long int datoInt[4];
};


 

struct xnodo primernodo;
tipollave llave[55];
//int opcion;
//FILE *arch;
//FILE *datafile;
struct xnodo primernodo;
posicion i;
xapuntador xraiz;

/* fin de bt.c */

#pragma endregion


#pragma region funciones1



void nuevo(xapuntador * xp, int variableArray) 
/* en xp se pondra el numero de */
/* registro ultimo - 1 */ 
{

    long int a;
      int tamanyoRegistro;
    short int conteo;
    long int rama;
    long int datoInt;
 
    a = fseek(arch, 0, SEEK_END); /* posiciona en la ultima posicion del archivo */
    a = ftell(arch); /* dice el tamano en bytes del archivo */
     tamanyoRegistro = sizeof(conteo)+sizeof(datoInt)*4+sizeof(rama)*5+variableArray*4+2;
    *xp = (a / tamanyoRegistro ) - (long) 1; /* da el tamano en registros */
    if (*xp == -1) {
        *xp = 0;
    };
    if (depurar)
    printf("el nuevo nodo sera %li\n", *xp);
}

void grabarnodo(xapuntador *xp, struct xnodo *xpn, int variableArray) 
{
 
    short int conteo = 0;
    long int   rama;
    long int   datoInt;
    char buffer[variableArray];
    
    int tamanyoRegistro;
     // printf("Tamaño registro: %d\n",variableArray);
    tamanyoRegistro = sizeof(conteo)+sizeof(datoInt)*4+sizeof(rama)*5+variableArray*4+2;
    struct xnodo xpnLocal;
    xpnLocal  = *xpn;
    int posicion;
    posicion = (*xp + 1) * tamanyoRegistro;
    fseek(arch, posicion, SEEK_SET);
    conteo = xpnLocal.xconteo;
    fwrite(&conteo, 1, sizeof(conteo), arch);
    if (posicion == 0) 
        conteo = 0;  //estamos grabando el primernodo
    posicion += sizeof(conteo);
    for (int i=1;i<5;i++) {
        fseek(arch, posicion, SEEK_SET);
        if (i<=conteo) {
        strcpy(buffer, xpnLocal.xllave[i-1]);
        fwrite(&buffer, 1, variableArray, arch);
        }
        posicion+=variableArray;
    }
    
    
    fwrite(&conteo, 1, sizeof(conteo), arch);
    posicion+=2;
    for (int i=1;i<6;i++) {
        fseek(arch, posicion, SEEK_SET);
        rama = xpnLocal.xrama[i-1];
        fwrite(&rama, 1, sizeof(rama), arch);
        posicion+=sizeof(rama);
    }
    for (int i=1;i<5;i++) {
        fseek(arch, posicion, SEEK_SET);
        datoInt = xpnLocal.datoInt[i-1];
        fwrite(&datoInt, 1, sizeof(datoInt), arch);
        posicion+=sizeof(datoInt);
    }
}

void leenodo(xapuntador *xp, struct xnodo *xpn, int variableArray) 
{

    short int conteo;
    long int   rama;
    long int   datoInt;
    char buffer[variableArray];
    if (depurar)
        printf("entra en leenodo\n");
    
    memset(buffer, 0, sizeof(buffer));
    int tamanyoRegistro;
   // printf("Tamaño registro: %d\n",variableArray);
    tamanyoRegistro = sizeof(conteo)+sizeof(datoInt)*4+sizeof(rama)*5+variableArray*4+2;
    struct xnodo xpnLocal;
    xpnLocal  = *xpn;
    long int a;
    int posicion;
    posicion = (*xp + 1) * tamanyoRegistro;
    fseek(arch, posicion, SEEK_SET);
    a= ftell(arch);
    fread(&conteo, 1, sizeof(conteo), arch);
  //  xpnLocal = *xpn;
    xpnLocal.xconteo = conteo;
    posicion += sizeof(conteo);
    for (int i=1;i<5;i++) {
        fseek(arch, posicion, SEEK_SET);
        fread(&buffer, 1, variableArray, arch);
        strcpy(xpnLocal.xllave[i-1], buffer);
       
        posicion+=variableArray;
    }
   // posicion-=variableArray;
    posicion+=2;
    for (int i=1;i<6;i++) {
        fseek(arch, posicion, SEEK_SET);
        fread(&rama, 1, sizeof(rama), arch);
        xpnLocal.xrama[i-1] = rama;
        posicion+=sizeof(rama);
    }
    // lee los datos enteros de cada rama
    if (depurar) 
        printf("leemos los datos INT\n");
    for (int i=1;i<5;i++) {
        if (depurar) 
            printf("posicionmos en %d\n", posicion);
        fseek(arch, posicion, SEEK_SET);
        //antes se hacia UN SOLO READ del archivo, con un tamaño de llave 55
        //ahora hacemos VARIOS READ del tamaño que hayamos definido la llave
        fread(&datoInt, 1, sizeof(datoInt), arch);
        if (depurar)
            printf ("se ha leido: %li  en la posicion %d\n", datoInt, i);
        xpnLocal.datoInt[i-1] = datoInt;

        posicion+=sizeof(datoInt);
    }
    
    (*xpn).xconteo = xpnLocal.xconteo;
    strcpy(xpn->xllave[0], xpnLocal.xllave[0]);
    strcpy(xpn->xllave[1], xpnLocal.xllave[1]);
    strcpy(xpn->xllave[2], xpnLocal.xllave[2]);
    strcpy(xpn->xllave[3], xpnLocal.xllave[3]);
    
    xpn->datoInt[0] = xpnLocal.datoInt[0];
    xpn->datoInt[1] = xpnLocal.datoInt[1];
    xpn->datoInt[2] = xpnLocal.datoInt[2];
    xpn->datoInt[3] = xpnLocal.datoInt[3];
    
    xpn->xrama[0] = xpnLocal.xrama[0];
     xpn->xrama[1] = xpnLocal.xrama[1];
      xpn->xrama[2] = xpnLocal.xrama[2];
       xpn->xrama[3] = xpnLocal.xrama[3];
        xpn->xrama[4] = xpnLocal.xrama[4];
        
    // xpnLocal = *xpn;
    if (depurar)
        printf("sale de leenodo\n");
}

#pragma endregion funciones1


#pragma region funciones2



void buscarnodo(tipollave *objetivo, xapuntador *xp, int *encontrar, posicion *k) 
{
    struct xnodo xpn;
    int a;
    
    if (depurar)
        printf("entra en buscarnodo\n");

    leenodo(xp, &xpn, tam_registro);
                
    if (strcmp(objetivo, xpn.xllave[0]) < 0) {
        *encontrar = 0;
        *k = 0;
    } else {
        *k = xpn.xconteo;
        while (strcmp(objetivo, xpn.xllave[*k - 1]) < 0 && (*k > 0)) {
            *k = *k - 1;
        }
        if (strcmp(objetivo, xpn.xllave[*k - 1]) == 0) {
            *encontrar = 1;
        } else *encontrar = 0;
    }
    if (depurar)
        printf("sale de buscarnodo\n");
}

int buscar(tipollave *objetivo, xapuntador *xraiz, int *encontrar,
        xapuntador *nodoobjetivo, posicion *posobjetivo) {
    struct xnodo xnodoobjetivo, xnodoraiz;

    if (*xraiz == -1) {
        *encontrar = 0;
    } else {
        buscarnodo(objetivo, xraiz, encontrar, posobjetivo);
        if (*encontrar == 1) {
            *nodoobjetivo = *xraiz;
            leenodo(nodoobjetivo, &xnodoobjetivo, tam_registro);
        } else {
            leenodo(xraiz, &xnodoraiz, tam_registro);
            buscar(objetivo, &xnodoraiz.xrama[*posobjetivo],
                    encontrar, nodoobjetivo, posobjetivo);
        }
    }
}

void empujardentro(tipollave *x, xapuntador *xxder, xapuntador *xp, posicion k, long int *datoInt) 
{
    short int i;
    struct xnodo xpn;
    if(depurar)
      printf ("empujardentro: %d\n", *datoInt);
    leenodo(xp, &xpn, tam_registro);
    for (i = xpn.xconteo; i >= (k + 1); i--) {
        strcpy(xpn.xllave[i], xpn.xllave[i - 1]);
        xpn.xrama[i + 1] = xpn.xrama[i];
        xpn.datoInt[i] = xpn.datoInt[i - 1];
    };
    strcpy(xpn.xllave[k], x);
    xpn.datoInt[k] = *datoInt;
    
    xpn.xrama[k + 1] = *xxder;
    
    xpn.xconteo = xpn.xconteo + 1;
    grabarnodo(xp, &xpn, tam_registro);
}

void dividir(tipollave *x, xapuntador *xxder, xapuntador *xp, posicion *k, tipollave *y_llave, xapuntador *xyder, long int * datoInt, long int * y_datoInt) 
{
    short int i;
    posicion mediana;
    struct xnodo xpn, xydern;
    if(depurar)
    printf("dividir: datoint: %li\n", *datoInt);

    leenodo(xp, &xpn, tam_registro);
    if (*k <= 2) {
        mediana = 2; /*min*/
    } else {
        mediana = 3; /*min+1*/
    };
    nuevo(xyder, tam_registro);
    for (i = mediana + 1; i <= 4; i++) {
        strcpy(xydern.xllave[i - mediana - 1], xpn.xllave[i - 1]);
        xydern.datoInt[i - mediana - 1] = xpn.datoInt[i-1];
        
        xydern.xrama[i - mediana] = xpn.xrama[i];
        
    };
    xydern.xconteo = 4 - mediana;
    xpn.xconteo = mediana;
    grabarnodo(xp, &xpn, tam_registro);
    grabarnodo(xyder, &xydern, tam_registro);
    if (*k <= 2) {
        empujardentro(x, xxder, xp, *k, datoInt);
        leenodo(xp, &xpn, tam_registro);
    } else {
        empujardentro(x, xxder, xyder, *k - mediana, datoInt);
        leenodo(xyder, &xydern, tam_registro);
    };
    leenodo(xyder, &xydern, tam_registro);
    strcpy(y_llave, xpn.xllave[xpn.xconteo - 1]);
    *y_datoInt = xpn.datoInt[xpn.xconteo-1];
    
    xydern.xrama[0] = xpn.xrama[xpn.xconteo];
    
    xpn.xconteo = xpn.xconteo - 1;
    grabarnodo(xp, &xpn, tam_registro);
    grabarnodo(xyder, &xydern, tam_registro);
}

void empujarabajo(tipollave *nuevallave, xapuntador *xp, int *empujararriba, tipollave *x, xapuntador *xxder, xapuntador *datoInt, xapuntador *datoInt2, int *encontrar)
 {
    posicion k;
    int encontrar1 = *encontrar;
    struct xnodo xpn;
    xapuntador xxder1;
    long int datoInt1;
    long int datoInt3;
    long int dato;
    
    dato = *datoInt;
    if (depurar)
    printf ("empujarabajo: %li\n", dato);
    if (*xp == -1) {
        *encontrar = 0;
        *empujararriba = 1;
        strcpy(x, nuevallave);
        *datoInt2 = *datoInt; 
        *xxder = -1;
        if (depurar)
            printf("tenemos que empujar para arriba la clave: %s\n", nuevallave);
        
    } else {
        encontrar1 = 0;
        k = 0;
        buscarnodo(nuevallave, xp, &encontrar1, &k);
        if (encontrar1 == 1) {
            fprintf(stdout, "error: llave duplicada\n");
            *encontrar = 1;
        } else {
            leenodo(xp, &xpn, tam_registro);
            xxder1 = *xxder;
            datoInt1 = *datoInt;
            datoInt3 = *datoInt2;
            empujarabajo(nuevallave, &xpn.xrama[k], empujararriba, x, &xxder1, &datoInt1, &datoInt3, encontrar);
            *xxder = xxder1;
            *datoInt = datoInt1;
            *datoInt2 = datoInt3;
            if (*empujararriba == 1) {
                if (xpn.xconteo < 4) {
                    *empujararriba = 0;
                    empujardentro(x, xxder, xp, k, datoInt2);
                } else {
                    *empujararriba = 1;
                    xxder1 = *xxder;
                    datoInt1 = *datoInt;
                    dividir(x, xxder, xp, &k, x, &xxder1, datoInt2, datoInt2);
                    *xxder = xxder1;
                    *datoInt = datoInt1;
                }
            }
        }
        //
    }
}

void inserta(tipollave *nuevallave, xapuntador *xraiz, xapuntador *datoEntero, int *encontrar) 
{
    int empujararriba;
    tipollave x[55];
    long int datoEntero2;
    xapuntador xxder, xp;
    struct xnodo xpn;
    *encontrar =  0;

    empujararriba = 0;
    xxder = 0;
    datoEntero2 = 0;
    empujarabajo(nuevallave, xraiz, &empujararriba, &x, &xxder, datoEntero, &datoEntero2, encontrar);
    if (empujararriba == 1) {
        nuevo(&xp, tam_registro);
        xpn.xconteo = 1;

        strcpy(&xpn.xllave[0], x);
        xpn.datoInt[0] = datoEntero2;
        xpn.datoInt[1] = 0;
        xpn.datoInt[2] = 0;
        xpn.datoInt[3] = 0;
       
        
        xpn.xrama[0] = *xraiz;
        xpn.xrama[1] = xxder;
        xpn.xrama[2] = -1;
        xpn.xrama[3] = -1;
        xpn.xrama[4] = -1;
        strcpy(xpn.xllave[1], "");
        strcpy(xpn.xllave[2], "");
        strcpy(xpn.xllave[3], "");
        
        *xraiz = xp;
        grabarnodo(&xp, &xpn, tam_registro);
    }
}

void quitar(xapuntador *xp, posicion *k) {
    struct xnodo xpn;
    short int i;
    leenodo(xp, &xpn, tam_registro);
    for (i = *k + 1; i <= xpn.xconteo; i++) {
        strcpy(xpn.xllave[i - 2], xpn.xllave[i - 1]);
        xpn.datoInt[i-2] = xpn.datoInt[i-1];
        xpn.xrama[i - 1] = xpn.xrama[i];
    };
    xpn.xconteo = xpn.xconteo - 1;
    grabarnodo(xp, &xpn, tam_registro);
}

void sucesor(xapuntador *xp, posicion *k) {
    xapuntador xq;
    struct xnodo xpn;
    struct xnodo xqn;

    leenodo(xp, &xpn, tam_registro);
    xq = xpn.xrama[*k];
    leenodo(&xq, &xqn, tam_registro);
    while (xqn.xrama[0] != -1) {
        xq = xqn.xrama[0];
        leenodo(&xq, &xqn, tam_registro);
    };
    strcpy(xpn.xllave[*k - 1], xqn.xllave[0]);
    xpn.datoInt[*k -1] = xqn.datoInt[0];
    grabarnodo(xp, &xpn, tam_registro);
}

void moverderecha(xapuntador *xp, posicion k) {
    posicion c;
    struct xnodo xpn, xnodorama, xnodorama2;

    leenodo(xp, &xpn, tam_registro);
    leenodo(&xpn.xrama[k], &xnodorama, tam_registro);
    for (c = xnodorama.xconteo; c >= 1; c--) {
        strcpy(xnodorama.xllave[c], xnodorama.xllave[c - 1]);
        xnodorama.datoInt[c] = xnodorama.datoInt[c-1];
        xnodorama.xrama[c + 1] = xnodorama.xrama[c];
    };
    xnodorama.xrama[1] = xnodorama.xrama[0];
    xnodorama.xconteo = xnodorama.xconteo + 1;
    strcpy(xnodorama.xllave[0], xpn.xllave[k - 1]);
    xnodorama.datoInt[0] = xnodorama.datoInt[k-1];
    
    grabarnodo(&xpn.xrama[k], &xnodorama, tam_registro);
    leenodo(&xpn.xrama[k - 1], &xnodorama, tam_registro);
    
    strcpy(xpn.xllave[k - 1], xnodorama.xllave[xnodorama.xconteo - 1]);
    xpn.datoInt[k - 1] = xnodorama.datoInt[xnodorama.xconteo - 1];
    
    leenodo(&xpn.xrama[k], &xnodorama2, tam_registro);
    xnodorama2.xrama[0] = xnodorama.xrama[xnodorama.xconteo];
    grabarnodo(&xpn.xrama[k], &xnodorama2, tam_registro);
    xnodorama.xconteo = xnodorama.xconteo - 1;
    grabarnodo(&xpn.xrama[k - 1], &xnodorama, tam_registro);
    grabarnodo(xp, &xpn, tam_registro);
}

void moverizquierda(xapuntador *xp, posicion k) {
    posicion c;
    struct xnodo xpn, xno, xno2;

    leenodo(xp, &xpn, tam_registro);
    leenodo(&xpn.xrama[k - 1], &xno, tam_registro);
    xno.xconteo = xno.xconteo + 1;
    strcpy(xno.xllave[xno.xconteo - 1], xpn.xllave[k - 1]);
    xno.datoInt[xno.xconteo-1] = xpn.datoInt[k-1];
    
    grabarnodo(&xpn.xrama[k - 1], &xno, tam_registro);
    leenodo(&xpn.xrama[k], &xno2, tam_registro);
    xno.xrama[xno.xconteo] = xno2.xrama[0];
    grabarnodo(&xpn.xrama[k], &xno2, tam_registro);
    leenodo(&xpn.xrama[k], &xno, tam_registro);
    strcpy(xpn.xllave[k - 1], xno.xllave[0]);
    xpn.datoInt[k-1] = xno.datoInt[0];
    
    xno.xrama[0] = xno.xrama[1];
    xno.xconteo = xno.xconteo - 1;
    for (c = 1; c <= xno.xconteo; c++) { /* de c=1 hasta conteo */
        strcpy(xno.xllave[c - 1], xno.xllave[c]);
        xno.datoInt[c-1] = xno.datoInt[c];
        xno.xrama[c] = xno.xrama[c + 1];
    };
    grabarnodo(&xpn.xrama[k], &xno, tam_registro);
}

void combinar(xapuntador *xp, posicion k) {
    xapuntador xq;
    posicion c;
    struct xnodo xpn, xqn, xno;
    leenodo(xp, &xpn, tam_registro);
    xq = xpn.xrama[k];
    leenodo(&xq, &xqn, tam_registro);
    leenodo(&xpn.xrama[k - 1], &xno, tam_registro);
    xno.xconteo = xno.xconteo + 1;
    strcpy(xno.xllave[xno.xconteo - 1], xpn.xllave[k - 1]);
    xno.datoInt[xno.xconteo-1] = xpn.datoInt[k-1];
    
    xno.xrama[xno.xconteo] = xqn.xrama[0];
    for (c = 1; c <= xqn.xconteo; c++) { /* de c hasta conteo */
        xno.xconteo = xno.xconteo + 1;
        strcpy(xno.xllave[xno.xconteo - 1], xqn.xllave[c - 1]);
        xno.datoInt[xno.xconteo-1] = xpn.datoInt[c-1];
        
        xno.xrama[xno.xconteo] = xqn.xrama[c];
    };
    grabarnodo(&xpn.xrama[k - 1], &xno, tam_registro);
    for (c = k; c <= (xpn.xconteo - 1); c++) { /* de c=k hasta conteo-1 */
        strcpy(xpn.xllave[c - 1], xpn.xllave[c]);
        xpn.datoInt[c-1] = xpn.datoInt[c];
        
        xpn.xrama[c] = xpn.xrama[c + 1];
    };
    xpn.xconteo = xpn.xconteo - 1;
    grabarnodo(xp, &xpn, tam_registro);
}

void restablecer(xapuntador *xp, posicion k) {
    struct xnodo xpn, xnodorama;

    leenodo(xp, &xpn, tam_registro);
    if (k > 0) {
        leenodo(&xpn.xrama[k - 1], &xnodorama, tam_registro);
        if (xnodorama.xconteo > 2) { /*2=MIN*/
            moverderecha(xp, k);
            leenodo(xp, &xpn, tam_registro);
        } else {
            combinar(xp, k);
            leenodo(xp, &xpn, tam_registro);
        };
    } else {
        leenodo(&xpn.xrama[1], &xnodorama, tam_registro);
        if (xnodorama.xconteo > 2) moverizquierda(xp, 1); /*2=MIN*/
        else {
            combinar(xp, 1);
            leenodo(xp, &xpn, tam_registro);
        };
    };
    grabarnodo(xp, &xpn, tam_registro);
}

void elimregtro(tipollave *objetivo, xapuntador *xp, int *encontrar) 
{
    posicion k;
    struct xnodo xpn;
    struct xnodo xramanodo;
    k = 0;

    if (!(xp == (-1))) leenodo(xp, &xpn, tam_registro);

    if (*xp == -1) {
        *encontrar = 0;
    }
    else { /* SI *XP NO ES -1 :  */

        buscarnodo(objetivo, xp, encontrar, &k);
        if (*encontrar == 1)
            if (xpn.xrama[k - 1] == -1) {
                quitar(xp, &k);
                leenodo(xp, &xpn, tam_registro);
            } else {
                sucesor(xp, &k);
                leenodo(xp, &xpn, tam_registro);
                elimregtro(xpn.xllave[k - 1],
                        &xpn.xrama[k],
                        encontrar);
                if (*encontrar == 0) {
                    fprintf(stdout, "error en procedure: elimregtro.\n");
                    getchar();
                };
            } else {
            elimregtro(objetivo, &xpn.xrama[k], encontrar);
        };
        if (xpn.xrama[k] != -1) {
            leenodo(&xpn.xrama[k], &xramanodo, tam_registro);
            if (xramanodo.xconteo < 2) { /*2 = MIN*/
                restablecer(xp, k);
                leenodo(xp, &xpn, tam_registro);
            };
        };
    } /* FIN DE SI *XP NO ES -1 */
}

void eliminar(tipollave *objetivo, xapuntador *xraiz) {
    struct xnodo xnodoraiz;
    int encontrar;
    xapuntador xp;

    elimregtro(objetivo, xraiz, &encontrar);
    leenodo(xraiz, &xnodoraiz, tam_registro);
    if (encontrar == 0) {
        fprintf(stdout, "clave no encontrada...\n");
        
    } else {
        if (xnodoraiz.xconteo == 0) {
            xp = *xraiz;
            leenodo(xraiz, &xnodoraiz, tam_registro);
            *xraiz = xnodoraiz.xrama[0];
        };
    };
}

void enorden(xapuntador xraiz, int *contador) {
    struct xnodo xraizn;
    const int pagina = 10;
    if (xraiz != -1) {
        leenodo(&xraiz, &xraizn, tam_registro);
        enorden(xraizn.xrama[0], contador);
        if (xraizn.xconteo > 0) {
            fprintf(stdout, "%4d -- %s -- %4d\n", *contador, xraizn.xllave[0], xraizn.datoInt[0] );
            (*contador)++;
/*
            if ( (*contador  % pagina)==0) {
               printf("presione una tecla para continuar....."); getchar();
            }
 */

            enorden(xraizn.xrama[1], contador);
        };

        if (xraizn.xconteo > 1) {
            fprintf(stdout, "%4d -- %s -- %4d\n", *contador, xraizn.xllave[1], xraizn.datoInt[1]);
            (*contador)++;
/*
            if ( (*contador  % pagina)==0) {
               printf("presione una tecla para continuar....."); getchar();

            }            
 */
            
            enorden(xraizn.xrama[2], contador);
        };

        if (xraizn.xconteo > 2) {
            fprintf(stdout, "%4d -- %s -- %4d\n", *contador, xraizn.xllave[2], xraizn.datoInt[2]);
            (*contador)++;
/*
            if ( (*contador  % pagina)==0) {
               printf("presione una tecla para continuar....."); getchar();

            }            
 */
            enorden(xraizn.xrama[3], contador);
        };

        if (xraizn.xconteo > 3) {
            fprintf(stdout, "%4d -- %s -- %4d\n", *contador, xraizn.xllave[3], xraizn.datoInt[3]);
            (*contador)++;
/*
            if ( (*contador  % pagina)==0) {
               printf("presione una tecla para continuar....."); getchar();

            }            
 */
            enorden(xraizn.xrama[4], contador);
        };
        
    }
}

void leer(xapuntador *xraiz) /* LEE EL ARCHIVO TEMP. AL TEXT.DAT */ 
{
    int len;
    int encontrar = 0;
    int c;
    char linea[255];
    int cont;
    
    cont =  1;

    if (depurar)
        printf("entramos en la funcion de leer el archio de datos temp\n");
    len = 0;
    while ((c = getc(datafile)) != EOF) {
        if (c != '\xA' && c!= '\xD') {
            linea[len] = c;
            len++;
        } else {
            linea[len] = '\x0';
            len = 0;
            fprintf(stdout, "%3d  ", *xraiz);
            fprintf(stdout, "%s\n", linea);
            if (depurar)
                if (strcmp(linea, "rosario")==1)
                    printf("linea es rosario");
            if (strlen(linea)==0) {
                if (depurar)
                    printf ("la linea que se quiere insertar esta vacia");
                

            }
            else {
                //int i=0;
                //while (linea[i]!=' ') i++;
                //linea[i]='\0';
                if (depurar) printf("insertaremos la clave: %s\n ", linea);
                inserta(&linea, xraiz, &cont, &encontrar);
                cont++; }
        };
    };
}

void obtenerllave(tipollave *llave) {
    char llave1[55];
    char c;
    int i;
    llave1[0] = '\x0';
    fprintf(stdout, "Ingrese la clave ('.' para fin) :  ");
    scanf("%s", llave1);

    strcpy(llave, llave1);
    fprintf(stdout, "\n");
}


void altas(xapuntador *xraiz) {
    tipollave llave[255];
    int encontrar;
    xapuntador nroreg;
    nroreg=1;
    encontrar=0;
    obtenerllave(&llave);
    while (strcmp(llave, ".")) {
        
        //inserta(&llave, xraiz);
        printf("inserta llave: %s   en raiz:  %d\n", llave, *xraiz);
        inserta(llave, xraiz, &nroreg, &encontrar) ;
        printf("nro registro: %d\n", nroreg);
        obtenerllave(&llave);
        
    }
}

int exists(const char *fname) {
    FILE *file;
    if (file = fopen(fname, "r"))
    {
        fclose (file);
        return 1;
    }
    return 0;
}

FILE * handler2; 
struct registro {
    char clave[10];
    char empresa[61];
    char direccion[61];
    char telefono[9];
    char finlinea[1];
} un_registro;


void mostrar_registro(int nroreg) {
    int tam;
    int pos;
    int sreg;
     char * datafile = "contactos.dbf";
     handler2 = fopen(datafile, "r");
     tam = 10+61+61+9+1;
     pos = (tam * (nroreg - 1) );
     sreg = sizeof(un_registro);
     fseek(handler2, pos, SEEK_SET);
     fread(&un_registro, 1, sizeof(un_registro), handler2);
     printf("%s\n", un_registro.clave);
     printf("%s\n", un_registro.empresa);
     printf("%s\n", un_registro.direccion);
     printf("%s\n", un_registro.telefono);
     fclose(handler2);
     
}

int main2() {
    short int abierto = 0;
    xapuntador nodoobjetivo;
    struct xnodo xnodoobjetivo;
    posicion posobjetivo;
    int contador;
    int encontrar;
    xraiz = -1;
    int c;
    
    if (exists("text.dat")) {

        use("text.dat");
       abierto = 1;
    }
    
    
    extern int depurar;
    
    do {

        /*   clrscr();   */
        opcion = 0;
        depurar = 0;
    /*    fprintf(stdout, "La raiz se encuentra en el nodo: %d\n", xraiz); */
        fprintf(stdout, "MENU\n");
        fprintf(stdout, "\n");
        fprintf(stdout, "1. Altas\n");
        fprintf(stdout, "2. Bajas\n");
        fprintf(stdout, "3. Listado\n");
        fprintf(stdout, "4. Buscar\n");
        fprintf(stdout, "7. Leer(crear)\n");
        fprintf(stdout, "8. Tamaño registro\n");
        fprintf(stdout, "9. Salir\n");
        fprintf(stdout, "\n");
        fprintf(stdout, "Digite su opcion: ");
        scanf("%d", &opcion);
        while ( (c = getchar()) != '\n' && c != EOF ) { };
        
        if (opcion == 8) {
            printf("Indique el tamaño del registro indice: ");
            scanf("%d", &tam_registro);
        };

        if (opcion == 1) {
            altas(&xraiz);
        };

        if (opcion == 2) {
            obtenerllave(llave);
            eliminar(llave, &xraiz);
        };

        if (opcion == 3) {
            contador = 0;
            enorden(xraiz, &contador);
            fprintf(stdout, "total items: %d\n\n", --contador);
            /*
                      getchar();
             */
        }

        if (opcion == 4) {
            llave[0] = 0;
          while ((strcmp(llave, "."))) {
             // scanf("%s", llave);
              int nro_reg;
            obtenerllave(llave);
            if (strcmp(llave, ".")) {
            posobjetivo = 0;
            nodoobjetivo = 0;
            encontrar = 0;
            buscar(llave, &xraiz, &encontrar, &nodoobjetivo, &posobjetivo);
            if (encontrar == 1) {
                leenodo(&nodoobjetivo, &xnodoobjetivo, tam_registro);
                
                fprintf(stdout, "Se ha encontrado: %s\n\n", xnodoobjetivo.xllave[posobjetivo - 1]);
                nro_reg = xnodoobjetivo.datoInt[posobjetivo - 1];
                
                fprintf(stdout, "Dato: %li\n\n", nro_reg );
                //mostrar_registro(nro_reg);
            } else {
                fprintf(stdout, "Clave no existe.....\n\n");
            };
            }
            getchar(); /*encuentre o no encuentre pide una tecla */
          }
        }; /* FIN DE OPCION 4 */

        if (opcion == 7) {
            if (abierto)    fclose(arch);
            system("rm text.dat");
            arch = fopen("text.dat", "w");
            fclose(arch);
            arch = fopen("text.dat", "r+b");
            abierto = 1;
            datafile = fopen("temp", "r");
            xraiz = -1;
            if (depurar) printf("creando el fichero de datos text.dat\n");
            leer(&xraiz);
            fclose(datafile);
            /*
                      getchar();
             */
        }

        if (opcion == 9) {
            if (abierto) {
                fseek(arch, 0, SEEK_SET);
                primernodo.xrama[0] = xraiz;
                primernodo.xconteo= tam_registro;
                xraiz = -1;
                grabarnodo(&xraiz, &primernodo, tam_registro);
                fclose(arch);
                abierto = 0;
            }
        };

    } while (opcion != 9);

}


int use(char * nombre_indice) {
    if (!exists(nombre_indice)) 
     {
        arch = fopen(nombre_indice, "w");
        fclose(arch);
        arch = fopen(nombre_indice, "r+b");
        xraiz = -1;
        return;
    }
    
    arch = fopen(nombre_indice, "r+b");
    xraiz = -1;
    
    leenodo(&xraiz, &primernodo, 10); //nos interesa leer el tamaño del registro solamente
    xraiz = primernodo.xrama[0];
    tam_registro = primernodo.xconteo;
    xraiz = -1;
    leenodo(&xraiz, &primernodo, tam_registro);
    xraiz = primernodo.xrama[0];
    // if (depurar)
    printf("La raiz se encuentra en el nodo %li\n", xraiz);  
}

int t_close() {
    fseek(arch, 0, SEEK_SET);
    primernodo.xrama[0] = xraiz;
    primernodo.xconteo = tam_registro;
    xraiz = -1;
    grabarnodo(&xraiz, &primernodo, tam_registro);
    fclose(arch);
}

getdatos() {
    /*
            fprintf(stdout,"Introduzca la llave: ");
            key.puntero = keybuf;
            gets(keybuf);
            fprintf(stdout,"Introduzca el dato: ");
            data.puntero = databuf1;
            gets(databuf1);
     */


    /* while(*data.puntero++);
     *data.puntero = '\0'; 
    data.puntero = databuf1;
    key.tamano  = strlen(key.puntero)+1;
    data.tamano = strlen(data.puntero)+1;
    /* store(key,data); */
    fprintf(stdout, "Registro Grabado\n");

}

int list() {
    /*  key.puntero = keybuf2; */
    /*
            contador = 0;

            leenodo(&xraiz, &primernodo);

            xraiz       =   primernodo.xrama[0];

            enorden(xraiz, &contador);
            printf("%d", contador);

     */



    /*
                xapuntador  xraiz;           
     */
    int contador;
    /*
        xraiz       =   -1;
        arch        =   fopen  ("text.dat","r+b");
        leenodo(&xraiz, &primernodo);
        xraiz       =   primernodo.xrama[0];
     */



    contador = 0;
    enorden(xraiz, &contador);
    /*
               fclose(arch);
     */
    fprintf(stdout, "total items: %d\n", contador);
    /*
    for(key=firstkey();key.puntero!=NULL;key=nextkey(key)) {

            testdata = fetch(key);
            fprintf(stdout,"llave: %s dato: %s\n",
                    key.puntero,testdata.puntero);
    }
     */
}

copyrigth() {
    fprintf(stdout, " \n");
    fprintf(stdout, "*** Interprete de Comandos\n");

    fprintf(stdout, "Version 1.0.\n");
    fprintf(stdout, "Digite help para ver una lista de comandos.\n");
}

clear() {
    system("clear");
}

pwd() {
    system("pwd");
}

ls() {
    system("ls");
}

l() {
    system("l");
}

