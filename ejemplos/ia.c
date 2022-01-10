
#include <stdio.h>
#include <string.h>
#include <math.h>

double factor_apr = 0.05;


char * VAR_APR;
int hay_error;
//void  itera();

int segmn=0;
int contador = 0;


char * DIGITO;
double digito;
double dig_salida;
double error;



int it = 2000; 

//e =  2.718281828
//epsilon = 0.0000000001


char * PALABRA;
const char * SEGM[10]  = {"1110111", "1000001",  "1101110",  "1101011", "1011001", "0111011",  
						"0111111", "1100001",  "1111111",  "1111011" }
const char * APRENDER[10] = "0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001"

double entradas[7];
double  capa       [5];
double  peso      [7, 5];
double err]       [5];
double umbral      [5];
double  capa2       [5]; 
double peso2      [5, 5];
double err2        [5];
double  err_s       [4];
double  umbral2     [5];
double  umbral_s   [4];
double  salidas   [4];
double  peso_s    [5, 4];
int contador1 = 0;


void calcular_error	() 
{
        serr = 0;

		for (int  i= 0; i< 3; i++)
		{
		err_s[i] = 0;
		}

		for (int  i= 0; i< 4; i++)
		{
		err2[i] = 0;
		}

		for (int  i= 0; i< 4; i++)
		{
		err[i] = 0;
		}

		for (int  i=0 ; i< 3; i++)   //desde 0 hasta 3   por cada neurona de salida
			{		
			   digito = 0;
			   DIGITO = VAR_APR[i + 1];
			   if (DIGITO == '1') digito = 1 else digito = 0;
			   dig_salida = salidas [i];
			   error = (digito - dig_salida) * dig_salida * ( 1 - dig_salida) ;   //error en la salida (i)
			  
			   //serr = serr + error
			   err_s[i] =   error;
			   umbral_s[i] = umbral_s[i] + (factor_apr * error * dig_salida ) ;
			 }
  
// recalculo de los pesos  entre la capa anterior a la salida			   
		for (int j  = 0; j< 4 ; j++)  // una por cada peso entre la capa2 del medio y la salida
		{ 
					err[j] = 0          
					for (int  i= 0; i< 3; i++)  //desde 0 hasta 3   por cada neurona de salida
					{		
						indice = (i*5) + j ;  //comprobar posicion factores
					   //propagacion del error hacia atras
						err[j] = err[j]  + (err_s[i] *  peso_s [indice]);
					peso_s [ indice ] = peso_s [ indice ] + factor_apr * (err_s[i]  * capa[j]);
					}
		 }
 
	   for (int  j= 0; j< 4; j++)
			   {
				  err[j]  = err[j] * capa [j] * ( 1 - capa[j]  );
				  umbral [j] = umbral[j] + (factor_apr * err[j] )  ;
			   }
		//recalculo de los pesos	   
		for (int k= 0; k< 6; k++)
		{
			   for (int  j= 0; j < 4; j++)
			   {
				  indice = (j*7) + k;
				  peso [indice] = peso [indice] + ( factor_apr * err[j] *  entrada [k] );
			   }
		}

}

double function sigmoide(suma) {
    //e =  2.718281828
    exponente = suma * (- 1 );
    s = 1 / ( 1 + exp ( exponente)  );
	//imprimir suma, '     ---- ', s
    return  s;
}

/*
void function ver_entradas)
 desde i=0 hasta 6
 {
    imprimir 'entrada ', i, ': ',  entradas[i]
 }
fin
*/

void function cargar_entradas(indice) {
    PALABRA = SEGM[indice];
    printf ("APRENDER: %s\n", PALABRA);
    for (int  i= 1; i< 7; i++)
    {
        DIGITO  = PALABRA[i];
        digito = 0;
		if (DIGITO=='1') digito = 1 else digito = 0;
        entradas[i-1] = digito;
    }
}



void itera()
{
		while ( contador < iteraciones )
		{
			errores = 0;
			//imprimir contador
			for (segmn = 0; segmn < 9; segmn++)
			{
				//imprimir 'seg: ', segmn
					// cargar la capa de entrada con datos
				cargar_entradas(segmn);   //ponemos datos en la carpeta de entrada
				//imprimir 'entrada:'
				//llamar ver_entradas
				//imprimir 'aprender: '
				VAR_APR = APRENDER[segmn];
				//imprimir  VAR_APR
				
				//imprimir 'en medio:'
				
				{
					= activacion_capa_enmedio(i);
				}

			/*	desde var=0 hasta 4
				{
					z = activacion_capa_enmedio2(var)
				}  */
				
				//llamar ver_capa_enmedio
				for (int i=0; i< 4; i++)
				{
					activacion_capa_salida(i);
				}
				
				//llamar ver_capa_salida
				hay_error = 0;
				
				printf (" PROCESADO: %s    %s  \n", segmn, contador);
				hay_error = comprobar_salidas();
				if (hay_error == 1) 
				{
					errores = errores + 1; 
					calcular_error();
					break;
				}
			}
			
			if (errores == 0) break;
			
			contador = contador + 1;
			contador1 = contador1 + 1;
			
			if (contador1 == 100) 
				contador1 = 0;
		}

		pruebas();
}




void main (int argc, char ** argv) 
{
		iteraciones = it;
		for (int i=0 ;i< 4; i++)
		{
			capa[i] = 0;
			capa2[i] = 0;
			umbral[i] = 0.5;
			umbral2[i] = 0.5;
			err_s [i] = 0;
		}

		for  (int i=0; i<34; i++)
		{
			peso[i] = 0.5;
		 }

		for (int  i=0; i <24; i++)
		{
			peso2[i] = 0.5;
		}

		for ( int  i = 0; i < 3; i++)
		{
			umbral_s[i] = 0.5;
		}

		for ( i=0; i < 19; i++)
		{
			peso_s[i] = 0.5;
		}
		itera();
}


 

/*
void  pruebas() {
segm = 0
imprimir 'introduce un numero del 0 al 9'
leer segm
z=cargar_entradas(segm)
desde var=0 hasta 4
		{
			z = activacion_capa_enmedio(var)
		}
		
		desde var=0 hasta 4
		{
			z = activacion_capa_enmedio2(var)
		}
		//llamar ver_capa_enmedio
		desde var=0 hasta 3
		{
			z = activacion_capa_salida(var)
		}
llamar mostrar_capas

}

 */

 
 
 
 

// procedimientos y funciones

void function activacion_capa_enmedio(indice)   {
    suma = 0;
    for (int i=0; i<6; i++)  //neuronas de entrada
    {
		//indice2 = (indice*7)+i;
		//imprimir '  fila,  columna, indice  = ', indice, '  ', i, '  ', indice2, peso[indice2]
        suma = suma + entradas[i] * peso[i, indice];
    }
    suma = suma + umbral[indice];
    //imprimir 'suma = ', suma
    activacion_u = sigmoide(suma);
 
    capa[indice] = activacion_u;
    
}

void function activacion_capa_salida(indice)   {
    suma = 0;
    for (int i=0; i<4; i++)  //neuronas de entrada
    {
		//indice2 = (indice*7)+i;
		//imprimir '  fila,  columna, indice  = ', indice, '  ', i, '  ', indice2, peso[indice2]
        suma = suma + capa[i] * peso_s[i, indice];
    }
    suma = suma + umbral_s[indice];
    //imprimir 'suma = ', suma
    activacion_u = sigmoide(suma);
 
    salidas [indice] = activacion_u;
    
}

/*

	
proc mostrar_pesos
imprimir 'primeros pesos'
desde i = 0 hasta 6
{
	desde j = 0 hasta 4
	{
		indice = (i*5) + j
		imprimir i, ' , ', j, '  --  ', peso[indice],   '  ', indice
	}

}

imprimir 'segundos pesos'
desde i = 0 hasta 4
{
	desde j = 0 hasta 4
	{
		indice = (i*5) + j
		imprimir i, ' , ', j, '  --  ', peso2[indice], '   ', indice
	}
}

imprimir 'ultimos pesos'
desde i = 0 hasta 4
{
	desde j = 0 hasta 3
	{
	    indice = (i*4) + j
		imprimir  j, ' , ', i, '  --  ', peso_s[indice], '   ', indice
	}
}

fin
*/

void comprobar_salidas() {

	return;

}

/*

proc comprobar_salidas
hay_error = 0
SALIDA = ' '   UNO = '1'   CERO = '0'
vaciar SALIDA 
desde i=0 hasta 3   //desde 0 hasta 3   por cada neurona de salida
			{		
			   digito = 0
			   DIGITO = subcadena(VAR_APR, i + 1 , 1 )
			   convertir DIGITO digito
			   dig_salida = salidas [i]
			   
			  si (dig_salida > 0.5) entonces
					  dig_salida = 1 
					  SALIDA += UNO
			  sino 
					  dig_salida = 0
					  SALIDA += CERO
			  si-fin
				
			  si 	(digito <> dig_salida) entonces
					hay_error = 1
					
			  si-fin
			 }
imprimir 'ESPERADO: ', VAR_APR
imprimir 'SALIDA:   ',  SALIDA
llamar binario
imprimir '--------------------------'

fin
			 
*/
			 
			 