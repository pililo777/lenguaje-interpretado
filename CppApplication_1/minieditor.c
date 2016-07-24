/* minieditor.c */
#include <malloc.h>

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
#include <gtk/gtk.h> 
#include <cairo.h>

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
        letra = variables[i][0]; //primera letra del nombre de la variable
        if (letra > 'Z') { //variable numerica
            PyObject *item = PyFloat_FromDouble((double) var[i]);
            PyDict_SetItemString(dict, variables[i], item);
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
extern int * arrayVectores[32];
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


void liberar_nodo( ast * p, int n)

{
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
 

GtkWidget *create_window ();
void create_tags (GtkTextBuffer * buffer);
void on_button_save_clicked (GtkButton * button, gpointer user_data);
void on_button_load_clicked (GtkButton * button, gpointer user_data);
void on_button_clear_clicked (GtkButton * button, gpointer user_data);
void on_button_cut_clicked (GtkButton * button, gpointer user_data);
void on_button_copy_clicked (GtkButton * button, gpointer user_data);
void on_button_paste_clicked (GtkButton * button, gpointer user_data);
void on_button_bold_clicked (GtkButton * button, gpointer user_data);
void on_button_underline_clicked (GtkButton * button, gpointer user_data);
void on_button_strike_clicked (GtkButton * button, gpointer user_data);
void on_button_color_clicked (GtkButton * button, gpointer user_data);

extern int gtk_iniciado;
extern int ejecuta_desde_editor;

int
main_anterior (int argc, char *argv[])
//main_old()
{
   memoria = 0;
   ejecuta_desde_editor = 1;
        
    GtkWidget *window;

  // gtk_init (&argc, &argv);
    if (!gtk_iniciado) {
      gtk_disable_setlocale();
      argc = 0;
      gtk_init(&argc, &argv); 
    }
    
    gtk_iniciado = 1;

    window = create_window ();
    
    // los connect estan en la funcion create_window())
    
     //g_signal_connect(window, "destroy",   destroy, NULL); 
    //  g_signal_connect(G_OBJECT(window), "destroy",    G_CALLBACK(gtk_main_quit), NULL);
    
    gtk_widget_show_all (window);

    gtk_main ();
    ejecuta_desde_editor = 0;
    return 0;
}


update_statusbar(GtkTextBuffer *buffer,
                  GtkStatusbar  *statusbar) {
  gchar *msg;
  gint row, col;
  GtkTextIter iter;
  
  gtk_statusbar_pop(statusbar, 0); 

  gtk_text_buffer_get_iter_at_mark(buffer,
      &iter, gtk_text_buffer_get_insert(buffer));

  row = gtk_text_iter_get_line(&iter);
  col = gtk_text_iter_get_line_offset(&iter);

  msg = g_strdup_printf("Col: %d Ln: %d", col+1, row+1);

  gtk_statusbar_push(statusbar, 0, msg);

  g_free(msg);
}

void mark_set_callback(GtkTextBuffer *buffer, 
    const GtkTextIter *new_location, GtkTextMark *mark, gpointer data) {
                       
  update_statusbar(buffer, GTK_STATUSBAR(data));
}



 GtkWidget *window;
 GtkWidget *label1, *label2, *label3, *label4;
 GtkWidget *statusbar;
 gchar * str_status;
 GtkWidget *textview2;
 GtkTextBuffer *buffer2;
  
 

GtkWidget *
create_window() {
   
    GtkWidget *vbox_main;
    GtkWidget *handlebox;
    GtkWidget *toolbar;
    GtkWidget *button_load;
    GtkWidget *button_save;
    GtkWidget *button_clear;
    GtkWidget *button_cut;
    GtkWidget *button_copy;
    GtkWidget *button_paste;
    GtkWidget *button_bold;
    GtkWidget *button_underline;
    GtkWidget *button_strike;
    GtkWidget *button_color;
    GtkWidget *scrolledwindow;
    GtkWidget *textview;
    GtkTextBuffer * buffer;
    
    GtkWidget *balign;
    
    
    
    
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "EDITOR DE PROGRAMAS");
    gtk_window_set_default_size (GTK_WINDOW (window), 400, 800);

    vbox_main = gtk_vbox_new (FALSE, 0);
    gtk_container_add (GTK_CONTAINER (window), vbox_main);

    handlebox = gtk_handle_box_new ();
    gtk_box_pack_start (GTK_BOX (vbox_main), handlebox, FALSE, FALSE,
                0);
    label1 = gtk_label_new("MEMORIA:");
    gtk_box_pack_start (GTK_BOX (vbox_main), label1, FALSE, FALSE, 0);
    
    label2 = gtk_label_new("VARIABLES");
    gtk_box_pack_start (GTK_BOX (vbox_main), label2,  FALSE, FALSE, 0);
    
    label3 = gtk_label_new("CONSTANTES");
    gtk_box_pack_start (GTK_BOX (vbox_main), label3, FALSE, FALSE, 0);
    
   
    
    

    toolbar = gtk_toolbar_new ();
    gtk_container_add (GTK_CONTAINER (handlebox), toolbar);
    
    button_load = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                          GTK_STOCK_OPEN,
                         NULL,
                         NULL, NULL, NULL, -1);
    
     button_save = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                          GTK_STOCK_SAVE,
                         NULL,
                         NULL, NULL, NULL, -1);

    button_clear = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                         GTK_STOCK_EXECUTE,
                         NULL,
                         NULL, NULL, NULL, -1);
    
/*
     button_clear = gtk_button_new_with_label("Run");
     
     gtk_button_set_relief ((GtkButton *)button_clear, GTK_RELIEF_NONE);
     gtk_button_set_image((GtkButton *)button_clear, buttonImage);
     gtk_button_set_image_position((GtkButton *)button_clear,  GTK_POS_TOP);
*/
    
    
    button_cut = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                           "gtk-cut",
                           NULL, NULL, NULL, NULL, -1);
    button_copy = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                        "gtk-copy",
                        NULL,
                        NULL, NULL, NULL, -1);
    button_paste = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                         "gtk-paste",
                         NULL,
                         NULL, NULL, NULL, -1);

    gtk_toolbar_append_space (GTK_TOOLBAR (toolbar));

    button_bold = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                        "gtk-bold",
                        NULL,
                        NULL, NULL, NULL, -1);
    button_underline = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                             "gtk-underline",
                             NULL,
                             NULL, NULL, NULL, -1);
    button_strike = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                          "gtk-strikethrough",
                          NULL,
                          NULL, NULL, NULL, -1);
    button_color = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                         "gtk-select-color",
                         NULL,
                         NULL, NULL, NULL, -1);
    
  //  label4 = gtk_label_new("Line: xx  Col: xx");
  //  gtk_box_pack_start (GTK_BOX (toolbar), label3, FALSE, FALSE, 0);
    
    
    
    scrolledwindow = gtk_scrolled_window_new (NULL, NULL);
    gtk_box_pack_start (GTK_BOX (vbox_main), scrolledwindow, TRUE,
                TRUE, 0);

    textview = gtk_text_view_new ();
    gtk_text_view_set_left_margin ((gpointer) textview, (gint) 60);
    gtk_container_add (GTK_CONTAINER (scrolledwindow), textview);
    
    balign = gtk_alignment_new(0, 2, 2, 0);
    
    statusbar = gtk_statusbar_new();
     
    gtk_container_add(GTK_CONTAINER(balign), statusbar);
    gtk_box_pack_start(GTK_BOX(vbox_main), balign, FALSE, FALSE, 0);
     
    //gtk_container_add(GTK_BOX(vbox_main), statusbar);
    
    

    buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (textview));
    create_tags (buffer);
    
    buffer2 = buffer;
    textview2 = textview;
    

    //g_signal_connect ((gpointer) window, "delete_event",  G_CALLBACK (gtk_main_quit), NULL);
    g_signal_connect ((gpointer) window, "destroy",  G_CALLBACK (gtk_main_quit), NULL);
    
    g_signal_connect ((gpointer) button_load, "clicked",
              G_CALLBACK (on_button_load_clicked),
              (gpointer) textview);
    
    g_signal_connect ((gpointer) button_save, "clicked",
              G_CALLBACK (on_button_save_clicked),
              (gpointer) textview);
    
    
    g_signal_connect ((gpointer) button_clear, "clicked",
              G_CALLBACK (on_button_clear_clicked),
              (gpointer) textview);
    g_signal_connect ((gpointer) button_cut, "clicked",
              G_CALLBACK (on_button_cut_clicked),
              (gpointer) textview);
    g_signal_connect ((gpointer) button_copy, "clicked",
              G_CALLBACK (on_button_copy_clicked),
              (gpointer) textview);
    g_signal_connect ((gpointer) button_paste, "clicked",
              G_CALLBACK (on_button_paste_clicked),
              (gpointer) textview);
    g_signal_connect ((gpointer) button_bold, "clicked",
              G_CALLBACK (on_button_bold_clicked),
              (gpointer) textview);
    g_signal_connect ((gpointer) button_underline, "clicked",
              G_CALLBACK (on_button_underline_clicked),
              (gpointer) textview);
    g_signal_connect ((gpointer) button_strike, "clicked",
              G_CALLBACK (on_button_strike_clicked),
              (gpointer) textview);
    g_signal_connect ((gpointer) button_color, "clicked",
              G_CALLBACK (on_button_color_clicked),
              (gpointer) textview);
    
    str_status = g_strdup_printf("Hemos cargado %d programas",  (int) 1);
    gtk_statusbar_push(GTK_STATUSBAR(statusbar),
     gtk_statusbar_get_context_id(GTK_STATUSBAR(statusbar), str_status), str_status);
    
    
     g_signal_connect(buffer, "changed",
        G_CALLBACK(update_statusbar), statusbar);

  g_signal_connect_object(buffer, "mark_set", 
        G_CALLBACK(mark_set_callback), statusbar, 0);
    
    
    return window;
}






//extern int contador, contadorvar;
// void gtk_label_set_text( GtkLabel   *label,  const char *str );


void
on_button_clear_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;
     GtkTextIter start, end;
     char str1 [100];
     
    //YY_BUFFER_STATE buf;
     
// printf("on buton clicked\n");
     
   //  printf("check1\n");
    g_assert (GTK_IS_TEXT_VIEW (user_data));
//printf("check2\n");
    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));
    // gtk_text_buffer_get_selection_bounds (textbuffer, &start, &end);
gtk_text_buffer_get_start_iter (textbuffer, &start);
gtk_text_buffer_get_end_iter (textbuffer, &end);
//printf("check3\n");
        gchar *input;
            // constantes [(int)p->nodo1->num];
          input = gtk_text_buffer_get_text  (textbuffer, &start, &end, FALSE );
          
         //char *uncero = malloc(2);
         
         //strcpy(uncero, "\0");
         
         
   //   char *c = malloc(strlen((gchar *) input) +   3);
//   printf("check4\n");
/*
      if ( c != NULL )
      {
         strcpy(c, input);
         strcat(c,   "\0");
         strcat(c,   "\0");
         int l;
         l = strlen((char *) c);
         l++;
      }
*/
         
      //   printf("check5\n");
          //strcat(input,  &uncero);
          
          /*
          strcat(input, uncero);
*/
          
            /*Copy string into new buffer and Switch buffers*/
        //  yypush_buffer_state(yy_scan_string(input));
       
          yy_scan_string(input);
           
/*

             GError                  *err=NULL;   
            gboolean                result;
            gchar *filename;
            filename = g_strdup ("buffer.pr");
                 
    result = g_file_set_contents (filename, input, -1, &err);
   

    yyin =  fopen(filename , "r"); 
*/
    

               idx_prg = 0;
               idx_vec = 0;
               idx_prc = 0;
               nodos = 0;
            
               linenumber = 1;
           //    printf("check6 parsing....\n");
           //    if (yyin != NULL) {
               
               //yypush_buffer_state();
               
                 yyparse();
                 
                 //actualizamos valores en la ventana del editor (provenientes del parsing)
                 
                 snprintf(str1, 100, "Constantes: %d", (int) contador );
                 gtk_label_set_text( label3, str1 );
                 
                 snprintf(str1, 100,  "Variables: %d", (int) contadorvar );
                 gtk_label_set_text( label2, str1 );
                 
                 snprintf(str1, 100, "Memoria: %d -- nodos: %d", (long) memoria, nodos );
                 gtk_label_set_text( label1, (gpointer) str1 );
                 
                 
             //    fclose(yyin);
               
           //    }
            //    g_free(filename);
                 
            
         //   free(c);
                 
            // yy_delete_buffer(input);
            
             //yypop_buffer_state();
             //yylex_destroy();
            
          //  printf("check7 ejecutando....\n");
            if (err_number == 0)
                execut(pila_programas[0]);
       //     printf("check8\n");
      //      printf("memoria: %ld \n", memoria);
         
            
    //  printf("check9 liberando memoria\n");
            liberar_nodo(pila_programas[0], 0);

            while (idx_prc>0)
            {
                idx_prc--;
                liberar_nodo(procedimientos[idx_prc], idx_prc);
            }
            
            //liberar vectores:
            while (idx_vec>0)
            {
                int tamano;
                int * vector;
                idx_vec--;
                
                vector = arrayVectores[idx_vec];
                tamano = malloc_usable_size(vector);
                free(vector);
                memoria -= tamano;
            }
            
            
           // free ( procedimientos[6]->nodo1);
           // free (procedimientos[6]);

            
            sprintf(str1, "Constantes: %d", (int) contador );
            gtk_label_set_text( label3, str1 );
                 
            sprintf(str1, "Variables: %d", (int) contadorvar );
            gtk_label_set_text( label2, str1 );
                 
             sprintf(str1, "Memoria: %d -- nodos: %d", (long) memoria, nodos );
            gtk_label_set_text( label1, (gpointer) str1 );
            
            
         //   liberar_nodo(pila_programas[31], 31);
      //      printf("memoria: %ld \n", memoria);

        //   g_free(input);
           
           
         //  yy_delete_buffer(input); /* free up memory */ 
            
      //  yy_delete_buffer(YY_CURRENT_BUFFER);   
             

            /*Analyze the string*/
            //    yylex();
            //   yyparse();

            /*Delete the new buffer*/
            //  liberar_buffer();
             g_free(input);
            
  //  printf("fin clicked\n");
}

void
on_button_load_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_cut_clipboard (textbuffer,
                       gtk_clipboard_get (GDK_NONE), TRUE);
    
    
    
    
    GtkWidget *dialog;

dialog = gtk_file_chooser_dialog_new ("Open File",
                                      NULL,
                                      GTK_FILE_CHOOSER_ACTION_OPEN,
                                      GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
                                      GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT,
                                      NULL);

if (gtk_dialog_run (GTK_DIALOG (dialog)) == GTK_RESPONSE_ACCEPT)
  {
    char *filename;
    gchar *text;

    filename = gtk_file_chooser_get_filename (GTK_FILE_CHOOSER (dialog));
    
    
      GError                  *err=NULL;   
      gboolean                result;
            
           // gchar *filename;
          //  filename = g_strdup ("buffer.pr");
                 
      //result = g_file_get_contents (filename, input, -1, &err);
      result = g_file_get_contents (filename, &text, NULL, &err);
      
       if (result == FALSE)
        {
                /* error loading file, show message to user */
              //  error_message (err->message);
                g_error_free (err);
                g_free (filename);
        }
      
      gtk_widget_set_sensitive (user_data, FALSE);
        textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data ));
        gtk_text_buffer_set_text (textbuffer, text, -1);
        gtk_text_buffer_set_modified (textbuffer, FALSE);
        gtk_widget_set_sensitive (user_data, TRUE);
        g_free (text); 
    
    g_free (filename);
  }

gtk_widget_destroy (dialog);
    
    
    
}

void
on_button_save_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_cut_clipboard (textbuffer,
                       gtk_clipboard_get (GDK_NONE), TRUE);
    
    
    
    
    GtkWidget *dialog;

dialog = gtk_file_chooser_dialog_new ("Guardar programa...",
                                      NULL,
                                      GTK_FILE_CHOOSER_ACTION_SAVE,
                                      GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
                                      GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT,
                                      NULL);

if (gtk_dialog_run (GTK_DIALOG (dialog)) == GTK_RESPONSE_ACCEPT)
  {
    char *filename;
  //  gchar *text;

    filename = gtk_file_chooser_get_filename (GTK_FILE_CHOOSER (dialog));
    
    
      GError                  *err=NULL;   
      gboolean                result;
    
    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));
    // gtk_text_buffer_get_selection_bounds (textbuffer, &start, &end);
    gtk_text_buffer_get_start_iter (textbuffer, &start);
    gtk_text_buffer_get_end_iter (textbuffer, &end);
 
    gchar *input;
    input = gtk_text_buffer_get_text  (textbuffer, &start, &end, FALSE );
      
    result = g_file_set_contents (filename, input, -1, &err);
 
      
       if (result == FALSE)
        {
                /* error loading file, show message to user */
              //  error_message (err->message);
                g_error_free (err);
                g_free (filename);
        }
      
     
        g_free (input); 
    
    g_free (filename);
  }

gtk_widget_destroy (dialog);
   


}

void
on_button_cut_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_cut_clipboard (textbuffer,
                       gtk_clipboard_get (GDK_NONE), TRUE);
}


void
on_button_copy_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_copy_clipboard (textbuffer,
                    gtk_clipboard_get (GDK_NONE));
}

void
on_button_paste_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_paste_clipboard (textbuffer,
                     gtk_clipboard_get (GDK_NONE),
                     NULL, TRUE);
}

void
on_button_bold_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_get_selection_bounds (textbuffer, &start, &end);

    gtk_text_buffer_apply_tag_by_name (textbuffer, "bold", &start,
                       &end);
}

void
on_button_underline_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_get_selection_bounds (textbuffer, &start, &end);

    gtk_text_buffer_apply_tag_by_name (textbuffer, "underline", &start,
                       &end);
}


void
on_button_strike_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_get_selection_bounds (textbuffer, &start, &end);

    gtk_text_buffer_apply_tag_by_name (textbuffer, "strike", &start,
                       &end);
}

void
on_button_color_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert (GTK_IS_TEXT_VIEW (user_data));

    textbuffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (user_data));

    gtk_text_buffer_get_selection_bounds (textbuffer, &start, &end);

    gtk_text_buffer_apply_tag_by_name (textbuffer, "color", &start,
                       &end);
}

void
create_tags (GtkTextBuffer * buffer)
{
    g_assert (GTK_IS_TEXT_BUFFER (buffer));

    gtk_text_buffer_create_tag (buffer, "bold",
                    "weight", PANGO_WEIGHT_BOLD, NULL);
    gtk_text_buffer_create_tag (buffer, "underline",
                    "underline", PANGO_UNDERLINE_SINGLE,
                    NULL);
    gtk_text_buffer_create_tag (buffer, "strike", "strikethrough",
                    TRUE, NULL);
    gtk_text_buffer_create_tag (buffer, "color", "foreground", "blue",
                    NULL);
}
  

extern int instalavar(char);
extern char *yytext;


FILE * fichero = (FILE *) 0;

void old_main(int argc, const char **argv) {
    // 	GtkWidget * ventana;

    gtk_init(&argc, &argv);

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
                int * vector;
                vector = (int*) arrayVectores[i];
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
                    yyparse();
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


