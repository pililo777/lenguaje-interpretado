//version para github 
#include <cairo.h>
#include <gtk/gtk.h>
#include "nodo.h"
#include "vars.h"
#include <stdlib.h>
#include <stdio.h>


void * execut(ast * p);



/*
typedef struct  {
          char        tipo;
          char        nombre[18];
          char        valor[127]; 
          double     numero;
          
} struct_variable;
extern struct_variable   array_variables[256];
 * */



extern ast * procedimientos[127]; //cambiar esta forma
extern double var[127];  // 127 variables numericas e indices a variables alfa y literales

static void do_drawing(cairo_t *, GdkEventExpose *);
 ast* nodografico;
 ast* nodografico2;
extern int flag_ventanas;
extern double evalua(ast*);

struct {
  int count;
  double coordx[100];
  double coordy[100];
} glob;

/*
static gboolean
scribble_expose_event (GtkWidget      *widget,
                       GdkEventExpose *event,
                       gpointer        data)
{
  cairo_t *cr;

  cr = gdk_cairo_create (gtk_widget_get_window (widget));
  
  cairo_set_source_surface (cr, surface, 0, 0);
  gdk_cairo_rectangle (cr, &event->area);
  cairo_fill (cr);

  cairo_destroy (cr);

  return FALSE;
}
*/

// en este evento programar el redibujado de la ventana grafica
static gboolean on_draw_event(GtkWidget *widget, GdkEventExpose *event,   gpointer user_data)
{
  cairo_t *cr;
  cr = gdk_cairo_create (gtk_widget_get_window (widget));
  printf("Antes-do draw\n");
  
  do_drawing(cr, event);
  
  cairo_destroy (cr);
  printf("Despues-do draw\n");

  return FALSE;
}

static void do_drawing(cairo_t *cr, GdkEventExpose *event)
{
    
/*
    double x,y, x1, y1;
    
    if (flag_ventanas != 1) return;
    
    x = var[(int) nodografico2->nodo1->num];
    y = var[(int) nodografico2->nodo2->num];
    x1 = var[(int) nodografico2->nodo3->num];
    y1 = var[(int) nodografico2->nodo4->num];
    
  cairo_set_source_rgb(cr, 0, 0, 1);
  cairo_set_line_width(cr, 2.0);
 */
  
   printf("inicio dodrawing");

/*

  int i, j;
  for (i = 0; i <= glob.count - 1; i++ ) {
      for (j = 0; j <= glob.count - 1; j++ ) {
          
          cairo_move_to(cr, glob.coordx[i], glob.coordy[i]);
*/
/*
           gdk_cairo_rectangle (cr, &event->area);
*/
/*
          cairo_line_to(cr, glob.coordx[j], glob.coordy[j]);
          printf("line to %lf -  %lf\n", glob.coordx[i], glob.coordy[i]);
      }
  }

  glob.count = 0;
*/
  
  
  //algoritmo para  la instruccion LINEAS
/*
 cairo_move_to(cr,  x,  y);
 cairo_line_to(cr,  x1,   y1);
  
  
  
 cairo_stroke(cr); 
  printf("*****fin dodrawing");
*/
}

GtkWidget *ventanaGrafica;

static gboolean clicked(GtkWidget *widget, GdkEventButton *event,
    gpointer user_data)
{
    
/*
    int n;
    double m;
    n = (int) p->num;
*/
/*
    m = array_variables[n].numero;
*/
    
   int procedimiento;
   int indice_de_la_variable;
    
   array_variables[ (int) nodografico->nodo3->num].numero = (double) event->x;  //ponemos x en el nodo  coordx
   array_variables[ (int) nodografico->nodo4->num].numero = (double) event->y;
    
    if (event->button == 1) {
/*
        glob.coordx[glob.count] = event->x;
        glob.coordy[glob.count++] = event->y;
*/
      array_variables[ (int) nodografico->nodo2->num].numero = 1;
        printf("boton1\n");
    }

    if (event->button == 3) {
        array_variables[ (int) nodografico->nodo2->num].numero = 3;  //boton
        ventanaGrafica = widget;                           // copia global
       //gtk_widget_queue_draw(widget);
        printf("boton3\n");
    }
   
    //llamar al procedimiento 
   
      
      indice_de_la_variable = (int) nodografico->nodo1->num  ;
      procedimiento = array_variables[indice_de_la_variable].procedimiento;
      if (procedimientos[procedimiento] == NULL) {
                    printf("procedimiento no encontrado en linea: \n");
                    getchar();
                    exit(1);
      }
      else 
      execut(procedimientos[ procedimiento ]);
    
/*
    execut  ( procedimientos[ (int) (nodografico->nodo1->num) ]  );
*/

    return TRUE;
}
   
  GtkWidget *darea;
   
 // **** DIBUJAR UNA LINEA ****
void dibujarlinea() {
   // printf("intentamos redibujar....\n");
    //    gtk_widget_queue_draw(darea);
    cairo_t *cr;
  cr = gdk_cairo_create (gtk_widget_get_window (darea));

/*
    cairo_text_extents_t te;
    cairo_set_source_rgb(cr, 0.0, 8.0, 5.0);
    cairo_select_font_face(cr, "Georgia",
            CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_BOLD);
    
    cairo_set_font_size(cr, 12);

   cairo_text_extents(cr, " ", &te);
cairo_move_to(cr, 0, 0);
    
    cairo_show_text(cr, "ejemplo de texto");
  
  
cairo_set_source_rgb (cr, 0, 8, 4);
cairo_rectangle (cr, 0, 0, 100, 100);
cairo_fill (cr);
*/
  
  
//  printf("A-do draw\n");
  
  //do_drawing(cr, event);
  double x,y, x1, y1;
    
    if (flag_ventanas != 1) return;
    
    x = (double)  evalua( nodografico2->nodo1);
    y = (double) evalua( nodografico2->nodo2);
    x1 = (double)   evalua(nodografico2->nodo3);
    if (nodografico2->subnodos > 3)
    y1 = (double)   evalua( nodografico2->nodo4);
  //  printf ("%lf  %lf  %lf  %lf\n",  x, y, x1, y1);
    
  cairo_set_source_rgb(cr, 0, 8, 0);  // color de pintado
  cairo_show_text (cr, "ejemplo de texto");
  cairo_set_line_width(cr, 3.5);
//   printf("inicio dodrawing");
   
   
 cairo_move_to(cr,  x,  y);
 if (nodografico2->tipo == dibuja_linea)
 cairo_line_to(cr,  x1,   y1);
 else
     cairo_arc(cr, x, y, x1, 0, 2*3.1415);
  
  
  
 cairo_stroke_preserve(cr); 
 if (nodografico2->tipo != dibuja_linea) {
     cairo_set_source_rgb(cr, 0.3, 0.4, 0.6);   //color de relleno
     cairo_fill(cr);
 }
  //printf("*****fin dodrawing");
   
   
  
  cairo_destroy (cr);
//  printf("D-do draw\n");
  
   

//  return FALSE;
}

int mainGraph()
//int main(int argc, char *argv[])
{
  GtkWidget *window;

  
//  glob.count = 0;

  //gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL );


  darea = gtk_drawing_area_new();
  gtk_widget_set_name(darea, "hola darea" );
  gtk_widget_set_name(darea, "hola window" );
  gtk_container_add(GTK_CONTAINER(window), darea);
 
  gtk_widget_add_events(window, GDK_BUTTON_PRESS_MASK);

  g_signal_connect(darea, "expose-event",   G_CALLBACK(on_draw_event), NULL); 
  //  g_signal_connect(window, "destroy",   G_CALLBACK(destroy), NULL);  
    
  g_signal_connect(window, "button-press-event",    G_CALLBACK(clicked), NULL);
 
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window), 800, 600); 
  gtk_window_set_title(GTK_WINDOW(window), "Ventana Grafica");

  gtk_widget_show_all(window);

  //gtk_main();

  return 0;
}
/*

#include <cairo.h>
#include <gtk/gtk.h>
#include <math.h>

static void do_drawing(cairo_t *, GtkWidget *);

static gboolean on_draw_event(GtkWidget *widget, cairo_t *cr,     gpointer user_data)
{  
  do_drawing(cr, widget);  

  return FALSE;
}

static void do_drawing(cairo_t *cr, GtkWidget *widget)
{
  GtkWidget *win = gtk_widget_get_toplevel(widget);
  
  int width, height;
  gtk_window_get_size(GTK_WINDOW(win), &width, &height);
  
  cairo_set_line_width(cr, 9);  
  cairo_set_source_rgb(cr, 0.69, 0.19, 0);
  
  cairo_translate(cr, width/2, height/2);
  cairo_arc(cr, 0, 0, 50, 0, 2 * M_PI);
  cairo_stroke_preserve(cr);

  cairo_set_source_rgb(cr, 0.3, 0.4, 0.6); 
  cairo_fill(cr);      
}


int main (int argc, char *argv[])
{
  GtkWidget *window;
  GtkWidget *darea;
  
  gtk_init(&argc, &argv);

  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

  darea = gtk_drawing_area_new();
  gtk_container_add(GTK_CONTAINER(window), darea);

  g_signal_connect(G_OBJECT(darea), "expose-event",    G_CALLBACK(on_draw_event), NULL);
  g_signal_connect(G_OBJECT(window), "destroy",    G_CALLBACK(gtk_main_quit), NULL);

  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window), 300, 200); 
  gtk_window_set_title(GTK_WINDOW(window), "Fill & stroke");

  gtk_widget_show_all(window);

  gtk_main();

  return 0;
}


*/
