# lenguaje-interpretado
Automatically exported from code.google.com/p/lenguaje-interpretado

# Requisitos

 gtk +   (version 2.24)
 
 Para instalar en fedora: 
 
 yum install gtk2-devel
 
 
 gcc

 https://cairographics.org/download/
 
 
## Instalar en linux

```

git clone https://github.com/pililo777/lenguaje-interpretado.git

```

Después entra en la carpeta

```
cd lenguaje-interpretado/CppApplication_1

```

Ahora ejecuta el siguiente comando


```
gcc -std=c99 -Wl,--export-dynamic `pkg-config --cflags --libs cairo cairo-png gtk+-2.0`   -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu   -o miprograma   minieditor.c   variables.c run.c bt.c err.c lex.yy.c dbase.c graficos.c dinamic.c grammar.tab.c   -L/usr/lib/i386-linux-gnu -lgtk-x11-2.0 -lgobject-2.0 -lgdk-x11-2.0 -lcairo -lglib-2.0 -ldl

```
# Uso 

Una vez que hayas copilado ejecula el programa asi 

```
./miprograma

```

Listo ! a disfrutar




Hola, este es un interprete programado en C
ver el fichero tokens.l para ver las palabras clave
aún está en desarrollo.

Consultas al email: pililo777@gmail.com

Inspirado a partir de la web:
http://memphis.compilertools.net/interpreter.html










****
