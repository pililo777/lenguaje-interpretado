# lenguaje-interpretado
Automatically exported from code.google.com/p/lenguaje-interpretado

# Requisitos

 gtk + 
 
 Para instalar en fedora: 
 
 yum install gtk2-devel
 
 
 gcc

 https://cairographics.org/download/
 
 
## Copilar en linux

```
gcc -std=c99 -Wl,--export-dynamic `pkg-config --cflags --libs cairo cairo-png gtk+-2.0`   -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu   -o miprograma   minieditor.c   variables.c run.c bt.c err.c lex.yy.c dbase.c graficos.c dinamic.c grammar.tab.c   -L/usr/lib/i386-linux-gnu -lgtk-x11-2.0 -lgobject-2.0 -lgdk-x11-2.0 -lcairo -lglib-2.0 -ldl

```






Hola, este es un interprete programado en C
ver el fichero tokens.l para ver las palabras clave
aún está en desarrollo.

Consultas al email: pililo777@gmail.com

****
