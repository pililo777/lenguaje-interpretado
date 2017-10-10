

#include <glib.h>
#include <gdk/gdk.h>
#include <gtk/gtk.h>
/*   #include <gdk/gdkkeysyms.h>   */

extern int linenumber;
extern int LineaInicial;
#include "nodo.h"
#include "stdio.h"
#include "stdlib.h"

extern char variables[127][127];
extern char constantes[127][127];
char msgbox[2550];
char mensaje2[255];

static int  idx_win = 0;

double evalua (elnodo *);

double var[127];  /* 127 variables numericas e indices a variables alfa y literales  */
static int counter1[32];
static int indice_ctr = 0;  
static int error_getstring = 0;

void * execut(elnodo * );



char *getstring(char *s)
{
    int i, k = getchar();
    error_getstring = 0; 
    /* Return NULL if no input is available */
    if (k == EOF)
        return NULL;

	if (k == 10) { 
		
		error_getstring = 1;
		
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



elnodo *nodo1(tiponodo, elnodo *);
elnodo *nodo2(tiponodo, elnodo *,elnodo *);
elnodo *nodo3(tiponodo, elnodo *,elnodo *,elnodo *);
elnodo *nodo4(tiponodo, elnodo *,elnodo *,elnodo *,elnodo *);


extern struct elnodo * nuevonodo();

elnodo * nodo1(tiponodo  Tipo, elnodo * a)
{
elnodo * p;
p = nuevonodo();
p->tipo = Tipo;
p->num = 777;
p->nodo1 = a;
p->nrolinea2 = linenumber;
p->subnodos = 1;



return p;
}

elnodo * nodo2(tiponodo Tipo, elnodo * a, elnodo * b)

{
elnodo * p;
p = nuevonodo();
p->tipo = Tipo;
p->num = 777;
p->nodo1 = a;
p->nodo2 = b;
p->subnodos = 2;
p->nrolinea2 = linenumber;
p->nrolinea1 = LineaInicial;

return p;

}

elnodo * nodo3(tiponodo Tipo, elnodo * a, elnodo * b, elnodo *  c)
{
elnodo * p;
p = nuevonodo();
p->tipo = Tipo;
p->num = 777;
p->nodo1 = a;
p->nodo2 = b;
p->nodo3 = c;
p->subnodos = 3;
p->nrolinea2 = linenumber;


return p;


}

elnodo * nodo4(tiponodo Tipo, elnodo *  a, elnodo * b, elnodo * c, elnodo * d)
{
elnodo * p;
p = nuevonodo();
p->tipo = Tipo;
p->num = 777;
p->nodo1 = a;
p->nodo2 = b;
p->nodo3 = c;
p->nodo4 = d;
p->subnodos = 4;
p->nrolinea2 = linenumber;
return p;
}

elnodo * nodo5(tiponodo Tipo, elnodo *  a, elnodo * b, elnodo * c, elnodo * d, elnodo * e)
{
elnodo * p;
p = nuevonodo();
p->tipo = Tipo;
p->num = 777;
p->nodo1 = a;
p->nodo2 = b;
p->nodo3 = c;
p->nodo4 = d;
p->nodo5 = e;
p->subnodos = 5;
p->nrolinea2 = linenumber;
return p;
}

struct widgets {  
    GtkWidget  *nombre;
    GtkWidget  *box1;
    int indice;
    int posicion;
} ;

struct cajaTexto {
    int ventana;
    int proced;
    int var;
    GtkWidget * entry;
} ;



struct widgets arrayWidgets[20]; 
struct widgets arrayBotones[20];

void callback( GtkWidget *entry, gpointer data) {
    int el_proc;
    
    el_proc = (int *) data;
  
        execut ( procedimientos[ el_proc ]);
}

void close_window(GtkWidget *widget, gpointer data)
{
   
    gtk_widget_destroy(widget);
    
}

void close_main_window(GtkWidget *widget, gpointer data)
{
    gtk_main_quit();
}

typedef struct {
                    GtkWidget *entry;
                    int variable;
                } e_texto;

struct entry_txt {
                    GtkWidget *entry;
                    int variable;
                } entry_texto;

static void enter_callback( GtkWidget *widget, gpointer data) 
{
   
    GtkWidget *entry;

   entry = (GtkWidget *) data ;
  
  const gchar *entry_text;
  char buffer[33];
  
  int numero;
  
  sprintf(buffer,   entry->name);
  sscanf (buffer, "%d", &numero);
  
  
  entry_text = gtk_entry_get_text (GTK_ENTRY (entry));
  
  /*printf ("Entry contents: %s\n", entry_text);
  printf("variable  %d\n", numero);*/
  
  
 strcpy ( constantes [(int)var[numero]], entry_text); 
 
}


void * execut(elnodo *  a)
{
elnodo * p;


p = a;
switch (p->tipo) {
    
    case mensaje :
        {
            GtkWidget *ventana;
                    
            GtkWidget *box1;
            GtkWidget *label;
            
            
            msgbox[0] = 0;
            execut(p->nodo1);
		fflush(stdout);
		printf("\n");
            
            ventana = gtk_window_new (GTK_WINDOW_TOPLEVEL);
            gtk_window_set_default_size (GTK_WINDOW (ventana), 300, 200);
            gtk_window_set_title((GtkWindow *) ventana, "MENSAJE" );
            gtk_window_set_position(GTK_WINDOW(ventana), GTK_WIN_POS_CENTER);
            g_signal_connect (ventana, "delete_event", G_CALLBACK (close_window), NULL);
            
            label = gtk_label_new (msgbox);
            box1 = gtk_vbox_new (FALSE, 0);
	
            /* Align the label to the left side.  We'll discuss this function and 
             * others in the section on Widget Attributes. */
            gtk_misc_set_alignment (GTK_MISC (label), 0, 0);

            /* Pack the label into the vertical box (vbox box1).  Remember that 
             * widgets added to a vbox will be packed one on top of the other in
             * order. */
            gtk_box_pack_start (GTK_BOX (box1), label, FALSE, FALSE, 0);
        
            gtk_container_add (GTK_CONTAINER (ventana), box1);
    
            gtk_widget_show (label);
            gtk_widget_show (box1);
            gtk_widget_show (ventana);
            msgbox[0] = 0;
        }
    
        break;
    
    case guardar_boton :
        {
 		int a; 
 		a =  (int)p->nodo1->num;
                
                
                int literal;
                int procdesignator;
                literal = (int)p->nodo2->num;  
                procdesignator = (int)p->nodo3->num;  
                
                int x;
                int y;
                x =  (int)p->nodo4->num;   
                y =  (int)p->nodo5->num;
               
                
                GtkWidget *button;
                
                
                
               
                
                button = gtk_button_new_with_label(constantes [literal]);
                gtk_signal_connect(GTK_OBJECT (button), "clicked", GTK_SIGNAL_FUNC (callback), (gpointer) procdesignator   );
                gtk_fixed_put (GTK_FIXED (arrayWidgets[a].box1), button, x, y);
                
                gtk_widget_show (button); 
               
                
     		}
                
                break;
                
      case guardar_etiqueta :
        {
 		int a;
                int l;
                int w;
                int h;
                
 		a =  (int)p->nodo1->num;
                l =  (int)p->nodo2->num;
                
                w =  (int)p->nodo3->num;
                h =  (int)p->nodo4->num;
                
              
                GtkWidget *label;
                
           
                label = gtk_label_new(constantes [l]);
               
            
                gtk_fixed_put (GTK_FIXED (arrayWidgets[a].box1), label, w, h);
                gtk_widget_show (arrayWidgets[a].box1);
              
                gtk_widget_show (label);
                
     		}
                
                break;
                
       case guardar_texto :
           {
 		int a;
                int t;
                int w;
                int h;
                gchar *nombre;
               
 		a =  (int)p->nodo1->num;  
                t =  (int)p->nodo2->num;  
                
                w =  (int)p->nodo3->num;   
                h =  (int)p->nodo4->num;
                
               
                GtkWidget *entry;
                
             
                entry = gtk_entry_new();
                
                 gchar buffer [33];
    
    
                 sprintf(buffer, "%d", t);
                
                
                gtk_widget_set_name(entry, buffer);
                
                g_signal_connect (entry, "changed", G_CALLBACK (enter_callback),  entry );
               
            
                gtk_fixed_put (GTK_FIXED (arrayWidgets[a].box1), entry, w, h);
                gtk_widget_show (arrayWidgets[a].box1);
                
                gtk_widget_show (entry);
                
     		}
                
                break;
    
    case crear_ventana:  
		{
               
                int aa;
                GtkWidget *box1;
             
                box1 = gtk_fixed_new ();
                
             
                
 		aa=   (int)p->nodo1->num;
                int width ;
                int heigh;
                
                width = (int)p->nodo2->num;
                heigh = (int)p->nodo3->num;
     		
             
               
                arrayWidgets[aa].nombre = gtk_window_new (GTK_WINDOW_TOPLEVEL);
                arrayWidgets[aa].box1 = box1;
                gtk_window_set_default_size (GTK_WINDOW (arrayWidgets[aa].nombre), width, heigh);
                gtk_container_add (GTK_CONTAINER (arrayWidgets[aa].nombre), box1);
                if (idx_win == 0) {
                        g_signal_connect (arrayWidgets[aa].nombre, "delete_event", G_CALLBACK (close_main_window), NULL);
                    }
                 else
                 
                     g_signal_connect ( arrayWidgets[aa].nombre, "destroy", G_CALLBACK(close_window), NULL);
                 
                arrayWidgets[aa].indice = 1;
                
                gtk_widget_show(arrayWidgets[aa].nombre);
                
                idx_win++;
     		}
          	break;
        
                
       case cambiar_titulo:
		{
 		gint a;
      		gchar *argv[0] ;
 		a= 1;
      		argv[0] = "";
                gtk_init (&a, &argv);
                int aa;
                
                aa =   (int)p->nodo1->num ;
             
                
                GtkWidget *ventana;
                ventana = arrayWidgets[aa].nombre ; 
                gtk_window_set_title((GtkWindow *) ventana, constantes [ (int)p->nodo2->num] );
                
            
                }
          	break;
                
        
                
       case mostrar_ventana:  /*  sin uso
		{
 		gint a;
      		gchar *argv[0] ;
 		a= 1;
      		argv[0] = "";
                gtk_init (&a, &argv);
                int aa;
                
                aa =   (int)p->nodo1->num ;

                
                GtkWidget *nuevo;
                nuevo = arrayWidgets[aa].nombre ; 
                gtk_window_set_default_size (GTK_WINDOW (nuevo), 300, 50);
                gtk_widget_show (nuevo);
            
                }  */
           
          	break;
                
         case mostrar_ventanas:
		{
                    int i = 0;
                    for (i=0; i<21; i++)
                    {
                        if (arrayWidgets[i].indice == 1) {
                        GtkWidget *nuevo;
                        nuevo = arrayWidgets[i].nombre ; 

                        gtk_widget_show (nuevo);
                        }
                    }
                gtk_main ();
                
                }
          	break;


	case ventana:
		{
 		gint a;
      		gchar *argv[0] ;
 		a=1;
      		
                argv[0] =  constantes [(int)p->nodo1->num] ;

     		}
          	break;

	case decimales:

		nro_decimales =  ( (int) p->nodo1->num  );
		break;



	case secuencia  :
		
		execut(p->nodo1);
		
		execut(p->nodo2);
		break; 
                
         case secuencia_controles  :

		execut(p->nodo1);

		execut(p->nodo2);
		break; 
                
          
                

	case imprimir_literal :
		fflush(stdout);
				printf("%s", constantes [(int)p->nodo1->num] ) ;
                                sprintf(mensaje2, "%s", constantes [(int)p->nodo1->num] ) ;
                                strcat(msgbox, mensaje2);
                                strcat(msgbox, " ");
                                
				break;

	case imprimir_var_alfa:
				
		fflush(stdout);
				printf("%s", constantes [ (int)  var   [(int)p->nodo1->num]    ]) ;
                                sprintf(mensaje2, "%s", constantes [ (int)  var   [(int)p->nodo1->num]    ]) ;
                                strcat(msgbox, mensaje2);
                                strcat(msgbox, " ");
				break;

	case imprimir_expresion :


		switch(nro_decimales ) {

			case 0:
				fflush(stdout);
				printf("%.0f", evalua(p->nodo1) );
                                sprintf(mensaje2, "%.0f", evalua(p->nodo1) );
                                strcat(msgbox, mensaje2);
                                strcat(msgbox, " ");
				break;

			case 1:
				printf("%.1f", evalua(p->nodo1) );
				break;

			case 2:

				printf("%.2f", evalua(p->nodo1) );
				break;

			case 3:
				printf("%.3f", evalua(p->nodo1) );
				break;
			case 4:
				printf("%.4f", evalua(p->nodo1) );
				break;
			case 5:
				printf("%.5f", evalua(p->nodo1) );
				break;
			case 6:
				printf("%.6f", evalua(p->nodo1) );
				break;
			case 7:
				printf("%.7f", evalua(p->nodo1) );
				break;
			case 8:
				printf("%.8f", evalua(p->nodo1) );
				break;
			case 9:
				printf("%.9f", evalua(p->nodo1) );
				break;
			case 10:
				printf("%.10f", evalua(p->nodo1) );
				break;
			case 11:
				printf("%.11f", evalua(p->nodo1) );
				break;
			case 12:
				printf("%.12f", evalua(p->nodo1) );
				break;
			case 13:
				printf("%.13f", evalua(p->nodo1) );
				break;
			case 14:
				fflush(stdout);
				printf("%.14f", evalua(p->nodo1) );
				break;
			case 15:
				printf("%.15f", evalua(p->nodo1) );
				break;

			default:
				fflush(stdout);
				printf("%.15f", evalua(p->nodo1) );
				break;

		};

		break;



	case imprimir_varios:
		
		execut(p->nodo1);
		fflush(stdout);
		printf("\n");
		break;

	
	case llamar:
	
		if (procedimientos[(int)p->nodo1->num] == NULL)
		   {
			   printf("procedimiento no encontrado en linea: \n");
			   getchar();
			   exit (1);
		   }

		execut ( procedimientos[ (int) (p->nodo1->num) ]  );
	
		break;

	case asigna_num:
	
		var[(int) p->nodo1->num] = evalua ( p->nodo2 );
		break;

	case asigna_alfa:
		//printf("asignar alfanumerico\n");
		var[(int) p->nodo1->num] = p->nodo2->num;
		break;

	case mientras:
		//printf ("mientras se cumple la condicion\n");
		while (evalua(p->nodo1 )) 
 
			execut(p->nodo2);
		//printf ("fin del bloque-mientras\n");
 
		break;

	case leer:
		//printf("leer var numerica\n");
		{
		 elnodo *pp;   //se puso esto para depuracion (watch)
		 int inum = 0;
		double fnum;
		pp = p;
		inum = (int)p->nodo1->num;
		//printf("i = %d\n", inum);
		scanf("%lf", &fnum );
		var[inum] = fnum;
		}
		break;

	case leertexto:
		//printf("leer var numerica\n");
		{
		int indice;
		elnodo * pp ;
	 
		char texto[255]  ;
        //pp = p;
		 getstring(texto); 
		 if (error_getstring )
			 getstring (texto);
		//gets(texto2);
		//scanf("%[^\n]",texto);

		///scanf_s("%[^\n]", texto, 21);

		//fflush(stdin);
		indice = (int)p->nodo1->num;
		strcpy ( constantes [(int)var[indice]], texto);
		}
		break;

	case si:
		//printf("si se cumple la condicion\n");
		if (evalua(p->nodo1 )) {
			execut(p->nodo2); }
		else
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

		for (counter1[indice_ctr]; counter1[indice_ctr] <= (int) evalua(p->nodo3 ); counter1[indice_ctr]++)
			{
				//y = evalua(p->nodo3);
				var[x] = counter1[indice_ctr];
				execut(p->nodo4 );
			}

		indice_ctr--;
		
		}
		
		break;


	default:
		break;

	}

return 0;

}

void evalua_doble(elnodo * p, elnodo * q) {
		double result1, result2;

}


double evalua (elnodo * p) {
 

	switch (p->tipo) {
	
	case indice_strings:    //una variable numerica
		 return var [(int)p->num];
	
	case un_numero:
		return p->num ;     //un numero constante
		


	case resta:
		
		return evalua(p->nodo1) - evalua(p->nodo2);

	case suma:
		return evalua(p->nodo1) + evalua(p->nodo2);

	case multiplica:
		return evalua(p->nodo1) * evalua(p->nodo2);

	case divide:
		if (evalua(p->nodo2) == 0 ) {
			fflush(stdout);
			printf("\nerror: division por cero.\n");
			exit (1);
		}
		return evalua(p->nodo1) / evalua(p->nodo2);

	case mayorque:
		return evalua(p->nodo1 ) > evalua(p->nodo2 );

	case mayorigualque:
		return evalua(p->nodo1 ) >= evalua(p->nodo2 );

	case noigualque:
		return evalua(p->nodo1 ) != evalua(p->nodo2 );

	case menorque:
		return evalua(p->nodo1 ) < evalua(p->nodo2 );

	case igualque:
		return evalua(p->nodo1 ) == evalua(p->nodo2 );

	case menorigualque:
		return evalua(p->nodo1 ) <= evalua(p->nodo2 );

	case negativo:
		return - evalua(p->nodo1 );

	case comparaliteral:

		{
		char string1[255];
		char string2[255];
		
		strcpy (string1, constantes[(int) var[(int)p->nodo1->num]]);
		strcpy (string2, constantes[(int)p->nodo2->num]);
		return !strcmp(string1, string2);

		}

	default:

		break;
		
	
	
	}
}
