#include "stdio.h"
#include "nodo.h"

#include <glib.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>


extern FILE * yyin;

extern int instalavar(char );
extern char *yytext;
extern  char contadorvar;

FILE * fichero = (FILE *) 0;
xxmain (int argc, char **argv)
{
     	GtkWidget * ventana;

	gtk_init (&argc, &argv);
        
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



	if   (argc > 1) {     //  {     //LO normal es :   (argc > 1)  --  para depurar con un programa: (argc = 1)
		//yyin = fopen("c:\\inter\\tst10.pr", "r");
		i = 1;
		do {
			
		    yyin = fopen(argv[i], "r");    //comentar para depurar
		    if (yyin != NULL){
			    //printf("abierto.....\n");
			    {
					   yyparse();
					   fclose(yyin);
					   i++;
				}
			} 
			else
				printf("imposible abrir fichero.\n");
		} while    (i != argc) ; //  (i != argc);  //   // ; para depurar:  (i==1); modificar abajo tambien(run)

		//ejecuciona los programas de la pila.

		// CORRE HASTA 32 PROGRAMAS:

		i = 1;
		do {
				execut(pila_programas[i-1]);
				i++;
		} while (i != argc);  // (i != argc);     //para depurar:  ( (i == 1); //
                exit (0);

	}

	else
			printf("usar: inter.exe nombreprograma [nombreprograma....]\n");
}

