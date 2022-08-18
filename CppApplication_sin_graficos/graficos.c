//version para github 

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

//static void do_drawing(cairo_t *, GdkEventExpose *);
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

 
int mainGraph()
//int main(int argc, char *argv[])
{
 

  
//  glob.count = 0;

  //gtk_init(&argc, &argv);

 

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
