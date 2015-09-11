/* minieditor.c */

#define xrun

extern double var[127];
extern char contadorvar;
extern char contador;
extern char variables[127][127];
extern char constantes[127][127];
extern int idx_prg;


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


#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>

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

extern elnodo * pila_programas[32];
extern int idx_prg;
extern long memoria;
extern int linenumber;

void liberar_nodo(elnodo * a)
 {
    elnodo * p;
    p = a;
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



        pila_programas[0] = NULL;
    }
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


GtkWidget *create_window();
void create_tags(GtkTextBuffer * buffer);
void on_button_save_clicked(GtkButton * button, gpointer user_data);
void on_button_load_clicked(GtkButton * button, gpointer user_data);
void on_button_clear_clicked(GtkButton * button, gpointer user_data);
void on_button_cut_clicked(GtkButton * button, gpointer user_data);
void on_button_copy_clicked(GtkButton * button, gpointer user_data);
void on_button_paste_clicked(GtkButton * button, gpointer user_data);
void on_button_bold_clicked(GtkButton * button, gpointer user_data);
void on_button_underline_clicked(GtkButton * button, gpointer user_data);
void on_button_strike_clicked(GtkButton * button, gpointer user_data);
void on_button_color_clicked(GtkButton * button, gpointer user_data);

int
main_anterior(int argc, char *argv[])
//main_old()
{
    memoria = 0;

    GtkWidget *window;

    gtk_init(&argc, &argv);

    window = create_window();
    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}

GtkWidget *
create_window() {
    GtkWidget *window;
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
    GtkTextBuffer *buffer;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Mini editor de texto");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 500);

    vbox_main = gtk_vbox_new(FALSE, 0);
    gtk_container_add(GTK_CONTAINER(window), vbox_main);

    handlebox = gtk_handle_box_new();
    gtk_box_pack_start(GTK_BOX(vbox_main), handlebox, FALSE, FALSE, 0);

    toolbar = gtk_toolbar_new();
    gtk_container_add(GTK_CONTAINER(handlebox), toolbar);

    button_load = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            GTK_STOCK_OPEN,
            NULL,
            NULL, NULL, NULL, -1);

    button_save = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            GTK_STOCK_SAVE,
            NULL,
            NULL, NULL, NULL, -1);

    button_clear = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            "gtk-clear",
            NULL,
            NULL, NULL, NULL, -1);
    button_cut = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            "gtk-cut",
            NULL, NULL, NULL, NULL, -1);
    button_copy = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            "gtk-copy",
            NULL,
            NULL, NULL, NULL, -1);
    button_paste = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            "gtk-paste",
            NULL,
            NULL, NULL, NULL, -1);

    gtk_toolbar_append_space(GTK_TOOLBAR(toolbar));

    button_bold = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            "gtk-bold",
            NULL,
            NULL, NULL, NULL, -1);
    button_underline = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            "gtk-underline",
            NULL,
            NULL, NULL, NULL, -1);
    button_strike = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            "gtk-strikethrough",
            NULL,
            NULL, NULL, NULL, -1);
    button_color = gtk_toolbar_insert_stock(GTK_TOOLBAR(toolbar),
            "gtk-select-color",
            NULL,
            NULL, NULL, NULL, -1);
    scrolledwindow = gtk_scrolled_window_new(NULL, NULL);
    gtk_box_pack_start(GTK_BOX(vbox_main), scrolledwindow, TRUE,
            TRUE, 0);

    textview = gtk_text_view_new();
    gtk_container_add(GTK_CONTAINER(scrolledwindow), textview);

    buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(textview));
    create_tags(buffer);


    g_signal_connect((gpointer) window, "delete_event",
            G_CALLBACK(gtk_main_quit), NULL);

    g_signal_connect((gpointer) button_load, "clicked",
            G_CALLBACK(on_button_load_clicked),
            (gpointer) textview);

    g_signal_connect((gpointer) button_save, "clicked",
            G_CALLBACK(on_button_save_clicked),
            (gpointer) textview);


    g_signal_connect((gpointer) button_clear, "clicked",
            G_CALLBACK(on_button_clear_clicked),
            (gpointer) textview);
    g_signal_connect((gpointer) button_cut, "clicked",
            G_CALLBACK(on_button_cut_clicked),
            (gpointer) textview);
    g_signal_connect((gpointer) button_copy, "clicked",
            G_CALLBACK(on_button_copy_clicked),
            (gpointer) textview);
    g_signal_connect((gpointer) button_paste, "clicked",
            G_CALLBACK(on_button_paste_clicked),
            (gpointer) textview);
    g_signal_connect((gpointer) button_bold, "clicked",
            G_CALLBACK(on_button_bold_clicked),
            (gpointer) textview);
    g_signal_connect((gpointer) button_underline, "clicked",
            G_CALLBACK(on_button_underline_clicked),
            (gpointer) textview);
    g_signal_connect((gpointer) button_strike, "clicked",
            G_CALLBACK(on_button_strike_clicked),
            (gpointer) textview);
    g_signal_connect((gpointer) button_color, "clicked",
            G_CALLBACK(on_button_color_clicked),
            (gpointer) textview);
    return window;
}

void
on_button_clear_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    // printf("on buton clicked\n");

    //  printf("check1\n");
    g_assert(GTK_IS_TEXT_VIEW(user_data));
    //printf("check2\n");
    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));
    // gtk_text_buffer_get_selection_bounds (textbuffer, &start, &end);
    gtk_text_buffer_get_start_iter(textbuffer, &start);
    gtk_text_buffer_get_end_iter(textbuffer, &end);
    //printf("check3\n");
    gchar *input;
    // constantes [(int)p->nodo1->num];
    input = gtk_text_buffer_get_text(textbuffer, &start, &end, FALSE);

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
on_button_load_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_cut_clipboard(textbuffer,
            gtk_clipboard_get(GDK_NONE), TRUE);




    GtkWidget *dialog;

    dialog = gtk_file_chooser_dialog_new("Open File",
            NULL,
            GTK_FILE_CHOOSER_ACTION_OPEN,
            GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
            GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT,
            NULL);

    if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_ACCEPT) {
        char *filename;
        gchar *text;

        filename = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));


        GError *err = NULL;
        gboolean result;

        // gchar *filename;
        //  filename = g_strdup ("buffer.pr");

        //result = g_file_get_contents (filename, input, -1, &err);
        result = g_file_get_contents(filename, &text, NULL, &err);

        if (result == FALSE) {
            /* error loading file, show message to user */
            //  error_message (err->message);
            g_error_free(err);
            g_free(filename);
        }

        gtk_widget_set_sensitive(user_data, FALSE);
        textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));
        gtk_text_buffer_set_text(textbuffer, text, -1);
        gtk_text_buffer_set_modified(textbuffer, FALSE);
        gtk_widget_set_sensitive(user_data, TRUE);
        g_free(text);

        g_free(filename);
    }

    gtk_widget_destroy(dialog);



}

void
on_button_save_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_cut_clipboard(textbuffer,
            gtk_clipboard_get(GDK_NONE), TRUE);




    GtkWidget *dialog;

    dialog = gtk_file_chooser_dialog_new("Guardar programa...",
            NULL,
            GTK_FILE_CHOOSER_ACTION_SAVE,
            GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
            GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT,
            NULL);

    if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_ACCEPT) {
        char *filename;
        //  gchar *text;

        filename = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(dialog));


        GError *err = NULL;
        gboolean result;

        textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));
        // gtk_text_buffer_get_selection_bounds (textbuffer, &start, &end);
        gtk_text_buffer_get_start_iter(textbuffer, &start);
        gtk_text_buffer_get_end_iter(textbuffer, &end);

        gchar *input;
        input = gtk_text_buffer_get_text(textbuffer, &start, &end, FALSE);

        result = g_file_set_contents(filename, input, -1, &err);


        if (result == FALSE) {
            /* error loading file, show message to user */
            //  error_message (err->message);
            g_error_free(err);
            g_free(filename);
        }


        g_free(input);

        g_free(filename);
    }

    gtk_widget_destroy(dialog);



}

void
on_button_cut_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_cut_clipboard(textbuffer,
            gtk_clipboard_get(GDK_NONE), TRUE);
}

void
on_button_copy_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_copy_clipboard(textbuffer,
            gtk_clipboard_get(GDK_NONE));
}

void
on_button_paste_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_paste_clipboard(textbuffer,
            gtk_clipboard_get(GDK_NONE),
            NULL, TRUE);
}

void
on_button_bold_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_get_selection_bounds(textbuffer, &start, &end);

    gtk_text_buffer_apply_tag_by_name(textbuffer, "bold", &start,
            &end);
}

void
on_button_underline_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_get_selection_bounds(textbuffer, &start, &end);

    gtk_text_buffer_apply_tag_by_name(textbuffer, "underline", &start,
            &end);
}

void
on_button_strike_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_get_selection_bounds(textbuffer, &start, &end);

    gtk_text_buffer_apply_tag_by_name(textbuffer, "strike", &start,
            &end);
}

void
on_button_color_clicked(GtkButton * button, gpointer user_data) {
    GtkTextBuffer *textbuffer = NULL;
    GtkTextIter start, end;

    g_assert(GTK_IS_TEXT_VIEW(user_data));

    textbuffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(user_data));

    gtk_text_buffer_get_selection_bounds(textbuffer, &start, &end);

    gtk_text_buffer_apply_tag_by_name(textbuffer, "color", &start,
            &end);
}

void
create_tags(GtkTextBuffer * buffer) {
    g_assert(GTK_IS_TEXT_BUFFER(buffer));

    gtk_text_buffer_create_tag(buffer, "bold",
            "weight", PANGO_WEIGHT_BOLD, NULL);
    gtk_text_buffer_create_tag(buffer, "underline",
            "underline", PANGO_UNDERLINE_SINGLE,
            NULL);
    gtk_text_buffer_create_tag(buffer, "strike", "strikethrough",
            TRUE, NULL);
    gtk_text_buffer_create_tag(buffer, "color", "foreground", "blue",
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


