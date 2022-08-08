//version para github 
#include <cairo.h>
#include <gtk/gtk.h>
#include "nodo.h"
#include "vars.h"

/*
typedef struct  {
          char        tipo;
          char        nombre[18];
          char        valor[127]; 
          double     numero;
          
} struct_variable;
extern struct_variable   array_variables[256];
 * */


cairo_surface_t *imagen;
extern ast * procedimientos[127]; //cambiar esta forma
extern double var[127];  // 127 variables numericas e indices a variables alfa y literales

static void do_drawing(cairo_t * );
 ast* nodografico;
 ast* nodografico2;
extern int flag_ventanas;
extern double evalua(ast*);
GtkWidget *darea;
GtkWidget *window3;
const char *filename = "imagen1.png";
cairo_t *cr2;

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
static gboolean on_draw_event(GtkWidget *widget, cairo_t *cr,   gpointer user_data)
{
  //cairo_t *cr;
	do_drawing(cr);
  
  //cairo_destroy(cr);

  return FALSE;
}

static void do_drawing(cairo_t *cr )
{
	/*cairo_operator_t op = CAIRO_OPERATOR_ADD;
	cairo_t *first_cr, *second_cr;
	cairo_surface_t *first, *second;
	first = cairo_surface_create_similar(cairo_get_target(cr),
		CAIRO_CONTENT_COLOR_ALPHA, 0, 0);

	second = cairo_surface_create_similar(cairo_get_target(cr),
		CAIRO_CONTENT_COLOR_ALPHA, 0, 0);

	first_cr = cairo_create(first);
	second_cr = cairo_create(second);
*/

	cr = gdk_cairo_create(gtk_widget_get_window(darea));
	cairo_set_source_surface(cr, imagen, 0.0, 0.0);
	//cairo_paint(cr);





	/*cairo_set_source_rgb(second_cr, 0, 0, 0);
	cairo_select_font_face(second_cr, "Sans", CAIRO_FONT_SLANT_NORMAL,
		CAIRO_FONT_WEIGHT_NORMAL);
	cairo_set_font_size(second_cr, 40.0);
	cairo_move_to(second_cr, 100.0, 150.0);
	cairo_show_text(second_cr, "Disziplin ist Macht.");

	cairo_set_operator(cr, op);
	cairo_set_source_surface(cr, second, 0, 0);*/

	cairo_paint(cr);

	/*cairo_set_source_surface(cr, first, 0, 0);
	cairo_paint(cr);

	cairo_surface_destroy(first);
	cairo_surface_destroy(second);

	cairo_destroy(first_cr);
	cairo_destroy(second_cr);*/
	

 
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
   
  
   
 // **** DIBUJAR UNA LINEA ****
void dibujarlinea() {
	double x, y, x1, y1;
  x1 = 0; y1=0;
    cairo_t *cr;
  cr = gdk_cairo_create (gtk_widget_get_window (darea));
 
    if (flag_ventanas != 1) return;
    
    x = (double)  evalua( nodografico2->nodo1);
    y = (double) evalua( nodografico2->nodo2);
    if (nodografico2->subnodos > 2)
    x1 = (double)   evalua(nodografico2->nodo3);
    if (nodografico2->subnodos > 3)
    y1 = (double)   evalua( nodografico2->nodo4);
    // printf ("%lf  %lf  %lf  %lf\n",  x, y, x1, y1);
    
  cairo_set_source_rgb(cr, 0, 8, 0);  // color de pintado
  cairo_show_text (cr, "ejemplo de texto");
  cairo_set_line_width(cr, 3.5);
//   printf("inicio dodrawing");
   
   
 cairo_move_to(cr,  x,  y);
 if (nodografico2->tipo == dibuja_linea)
 {
	 cairo_line_to (cr, x1, y1);
	 cairo_stroke_preserve(cr);  // estaba con preserve
 
 }

 if (nodografico2->tipo == dibuja_circulo) {

	     cairo_arc(cr, x, y, x1, 0, 2 * 3.1415);
		 cairo_stroke_preserve(cr); // estaba con preserve
	     cairo_set_source_rgb(cr, 0.4, 0.5, 0.6);   //color de relleno   fillcolor
	     cairo_fill(cr);
 }

 if (nodografico2->tipo == dibuja_rectangulo) // dibuja rectangulo
  {
     //printf ("%lf  %lf  %lf  %lf\n",  x, y, x1, y1);
     cairo_set_line_width(cr, 1.5);
     cairo_rectangle (cr, x, y, x1, y1);
	   cairo_stroke_preserve(cr);  // estaba con preserve


  }

  if (nodografico2->tipo == dibuja_punto) // dibuja punto
  {

    cairo_set_line_cap(cr, CAIRO_LINE_CAP_ROUND);
    cairo_set_source_rgb(cr, 0, 0, 0);
    cairo_set_line_width(cr, 2);
        cairo_move_to(cr, x, y);
        cairo_close_path(cr);
        cairo_stroke(cr);
  }

  

 //if (nodografico2->tipo != dibuja_linea) {
 //    cairo_set_source_rgb(cr, 0.3, 0.4, 0.6);   //color de relleno
 //    cairo_fill(cr);
 //}
  //printf("*****fin dodrawing");
   
   
  
  cairo_destroy (cr);
//  printf("D-do draw\n");
  
   imagen = cairo_image_surface_create(CAIRO_FORMAT_RGB24, 800, 600);
  cr2 = cairo_create(imagen);
  gdk_cairo_set_source_window(cr2,
	  gtk_widget_get_window(GTK_WIDGET(window3)),
	  0,
	  0);


  cairo_paint(cr2);

  //cairo_status_t status1 = 
  //cairo_surface_write_to_png(imagen,
	 // filename);

 // cairo_destroy(cr2);
  //cairo_surface_destroy(imagen);
 

//  return FALSE;
}

int mainGraph()
//int main(int argc, char *argv[])
{
  

  
//  glob.count = 0;

  //gtk_init(&argc, &argv);

  window3 = gtk_window_new(GTK_WINDOW_TOPLEVEL );


  darea = gtk_drawing_area_new();
  //gtk_widget_set_name(darea, "hola darea" );
  //gtk_widget_set_name(darea, "hola window" );
  gtk_container_add(GTK_CONTAINER(window3), darea);
 
  gtk_widget_add_events(window3, GDK_BUTTON_PRESS_MASK);

  //g_signal_connect(darea, "expose-event",   G_CALLBACK(on_draw_event), NULL); 
  g_signal_connect(G_OBJECT(darea), "expose-event", G_CALLBACK(on_draw_event), NULL);
  //  g_signal_connect(window, "destroy",   G_CALLBACK(destroy), NULL);  
    
  g_signal_connect(window3, "button-press-event",    G_CALLBACK(clicked), NULL);
 
  gtk_window_set_position(GTK_WINDOW(window3), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window3), 800, 600); 
  gtk_window_set_title(GTK_WINDOW(window3), "Ventana Grafica");

  gtk_widget_show_all(window3);

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
