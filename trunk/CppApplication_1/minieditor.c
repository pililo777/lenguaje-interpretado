#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>

extern FILE * yyin;
extern int err_number;

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

extern elnodo * pila_programas[32];
extern int idx_prg;
extern  long memoria;
extern int linenumber;


void liberar_nodo( elnodo * a)

{
    elnodo * p;
    p=a;
       if (p == pila_programas[0]) {
            if (p->subnodos == 0) {
           
            printf("no hay nodos para liberar\n");
            return;
        }
        
     if (p->subnodos > 0) {
            liberar_nodo(p->nodo1);
/*
            free(p->nodo1);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/

        }

        if (p->subnodos > 1) {
            liberar_nodo(p->nodo2);
/*
            free(p->nodo2);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 2) {
            liberar_nodo(p->nodo3);
/*
            free(p->nodo3);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 3) {
            liberar_nodo(p->nodo4);
/*
            free(p->nodo4);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 4) {
            liberar_nodo(p->nodo5);
/*
            free(p->nodo5);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }
            
           free(p);
           memoria -= sizeof (struct elnodo);
       //    printf("librando el nodo raiz: %ld\n", memoria);
            
            
        
        pila_programas[0] = NULL; }
            
    else {
           
           if (p->subnodos == 0) {
            free(p);
            memoria -= sizeof (struct elnodo);
         //   printf("librando un nodo sin subnodos: %ld\n", memoria);
            return;
        }
           
           
           if (p->subnodos > 0) {
            liberar_nodo(p->nodo1);
            
/*
            free(p->nodo1);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/

        }

        if (p->subnodos > 1) {
            liberar_nodo(p->nodo2);
/*
            free(p->nodo2);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 2) {
            liberar_nodo(p->nodo3);
/*
            free(p->nodo3);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 3) {
            liberar_nodo(p->nodo4);
/*
            free(p->nodo4);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }

        if (p->subnodos > 4) {
            liberar_nodo(p->nodo5);
/*
            free(p->nodo5);
            memoria -= sizeof (struct elnodo);
            printf("librando un nodo: %ld\n", memoria);
*/
        }
           
           free(p);
           memoria -= sizeof (struct elnodo);
       //    printf("librando el nodo: %ld\n", memoria);

    }
}
 

GtkWidget *create_window ();
void create_tags (GtkTextBuffer * buffer);
void on_button_load_clicked (GtkButton * button, gpointer user_data);
void on_button_clear_clicked (GtkButton * button, gpointer user_data);
void on_button_cut_clicked (GtkButton * button, gpointer user_data);
void on_button_copy_clicked (GtkButton * button, gpointer user_data);
void on_button_paste_clicked (GtkButton * button, gpointer user_data);
void on_button_bold_clicked (GtkButton * button, gpointer user_data);
void on_button_underline_clicked (GtkButton * button, gpointer user_data);
void on_button_strike_clicked (GtkButton * button, gpointer user_data);
void on_button_color_clicked (GtkButton * button, gpointer user_data);

int
main (int argc, char *argv[])
{
   memoria = 0;
        
    GtkWidget *window;

    gtk_init (&argc, &argv);

    window = create_window ();
    gtk_widget_show_all (window);

    gtk_main ();
    return 0;
}

GtkWidget *
create_window ()
{
    GtkWidget *window;
    GtkWidget *vbox_main;
    GtkWidget *handlebox;
    GtkWidget *toolbar;
    GtkWidget *button_load;
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
    GtkTextBuffer *buffer;

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "Mini editor de texto");
    gtk_window_set_default_size (GTK_WINDOW (window), 400, 500);

    vbox_main = gtk_vbox_new (FALSE, 0);
    gtk_container_add (GTK_CONTAINER (window), vbox_main);

    handlebox = gtk_handle_box_new ();
    gtk_box_pack_start (GTK_BOX (vbox_main), handlebox, FALSE, FALSE,
                0);

    toolbar = gtk_toolbar_new ();
    gtk_container_add (GTK_CONTAINER (handlebox), toolbar);
    
    button_load = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                          GTK_STOCK_OPEN,
                         NULL,
                         NULL, NULL, NULL, -1);

    button_clear = gtk_toolbar_insert_stock (GTK_TOOLBAR (toolbar),
                         "gtk-clear",
                         NULL,
                         NULL, NULL, NULL, -1);
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
    scrolledwindow = gtk_scrolled_window_new (NULL, NULL);
    gtk_box_pack_start (GTK_BOX (vbox_main), scrolledwindow, TRUE,
                TRUE, 0);

    textview = gtk_text_view_new ();
    gtk_container_add (GTK_CONTAINER (scrolledwindow), textview);

    buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (textview));
    create_tags (buffer);
    

    g_signal_connect ((gpointer) window, "delete_event",
              G_CALLBACK (gtk_main_quit), NULL);
    
    g_signal_connect ((gpointer) button_load, "clicked",
              G_CALLBACK (on_button_load_clicked),
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
    return window;
}



void
on_button_clear_clicked (GtkButton * button, gpointer user_data)
{
    GtkTextBuffer *textbuffer = NULL;
     GtkTextIter start, end;
     
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
            
               linenumber = 1;
           //    printf("check6 parsing....\n");
           //    if (yyin != NULL) {
               
                 yyparse();
             //    fclose(yyin);
               
           //    }
            //    g_free(filename);
                 
            
         //   free(c);
            
            yypop_buffer_state();
            
          //  printf("check7 ejecutando....\n");
            if (err_number == 0)
            execut(pila_programas[0]);
       //     printf("check8\n");
      //      printf("memoria: %ld \n", memoria);
         
            
    //  printf("check9 liberando memoria\n");
            liberar_nodo(pila_programas[0]);
      //      printf("memoria: %ld \n", memoria);

        //   g_free(input);
           
           
         //  yy_delete_buffer(input); /* free up memory */ 
            
      //  yy_delete_buffer(YY_CURRENT_BUFFER);   
             

            /*Analyze the string*/
            //    yylex();
            //   yyparse();

            /*Delete the new buffer*/
            //  liberar_buffer();
             //g_free(input);
            
  //  printf("fin clicked\n");
}


void
on_button_load_clicked (GtkButton * button, gpointer user_data)
{
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
  