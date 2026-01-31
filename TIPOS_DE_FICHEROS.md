# Tipos de Ficheros en el Repositorio

Este documento describe los diferentes tipos de ficheros que se encuentran en este repositorio del lenguaje interpretado.

## Resumen Ejecutivo

El repositorio contiene **384 archivos** (excluyendo el directorio .git) organizados en las siguientes categorías:

## 1. Código Fuente del Intérprete (80 archivos)

### Archivos C (56 archivos)
- Archivos de implementación del intérprete escrito en lenguaje C
- Ejemplos: `minieditor.c`, `variables.c`, `run.c`, `bt.c`, `err.c`, `dbase.c`, `graficos.c`, `dinamic.c`
- Contienen la lógica principal del intérprete

### Archivos de Cabecera C (13 archivos)
- Archivos .h con definiciones de estructuras, funciones y constantes
- Ejemplos: `vars.h`, `keywords.h`, `nodo.h`, `grammar.tab.h`
- Definen interfaces entre diferentes módulos del intérprete

### Archivos Lex (3 archivos)
- Archivos .l para análisis léxico
- Ejemplo: `tokens.l`
- Definen los tokens y palabras clave del lenguaje interpretado
- Se procesan con Flex/Lex para generar el analizador léxico

### Archivos Yacc/Bison (3 archivos)
- Archivos .y para análisis sintáctico
- Ejemplo: `grammar.y`
- Definen la gramática formal del lenguaje
- Se procesan con Yacc/Bison para generar el parser

### Archivos C++ (5 archivos)
- Algunos componentes en C++
- Extensión .cpp

## 2. Programas del Lenguaje Interpretado (80 archivos)

### Archivos .pr y .PR (80 archivos)
- **Programas escritos en el lenguaje interpretado personalizado**
- Estos son los archivos de código fuente que el intérprete puede ejecutar
- Ejemplos notables:
  - `example1.pr` - Ejemplo básico de uso
  - `factorial.pr` - Cálculo de factoriales
  - `ventanas.pr`, `ventanas2.pr`, `ventanas3.pr`, `ventanas4.pr` - Programas con interfaz gráfica
  - `html.pr` - Generación de HTML
  - `ia.pr`, `ia2.pr`, `iann.pr` - Programas de inteligencia artificial
  - `bucles_anidados.pr` - Ejemplos de bucles
  - `integracion.pr`, `integracion2.pr`, `integracion3.pr` - Cálculos de integración numérica
  - `numeroEuler2.pr`, `numerodeEuler.pr` - Cálculo del número de Euler
  - `raiz_cuadrada.pr` - Cálculo de raíces cuadradas
  - `registros.pr` - Manejo de registros
  - Y muchos más ejemplos en el directorio `Ejemplos/`

## 3. Archivos de Construcción y Configuración (151 archivos)

### Makefiles (55 archivos)
- Archivos .mk para compilar el proyecto
- Utilizados por el sistema de compilación de NetBeans
- Ubicados principalmente en directorios `nbproject/`

### Scripts Bash (37 archivos)
- Scripts .bash para automatización en Linux
- Usados para configuración y compilación

### Archivos Batch (9 archivos)
- Scripts .bat para Windows
- Automatización de tareas en sistemas Windows

### Archivos XML (30 archivos)
- Configuración de proyectos NetBeans
- Metadatos del proyecto

### Archivos JSON (13 archivos)
- Configuración de Visual Studio Code
- Metadatos en formato JSON

### Archivos de Propiedades (7 archivos)
- Archivos .properties con configuraciones
- Usados por NetBeans

## 4. Documentación (9 archivos)

### Archivos Markdown (1 archivo)
- `README.md` - Documentación principal del proyecto
- Incluye instrucciones de instalación y uso

### Archivos de Texto (8 archivos)
- Documentación adicional
- Notas de desarrollo
- Ejemplos de salida
- Manual del intérprete en `Manual/`
- Notas en `Notas/diario.txt` y `Notas/leeme.txt`
- `multiplicacion matrices.txt` - Documentación de multiplicación de matrices

## 5. Archivos de Datos (14 archivos)

### Archivos dBase (3 archivos)
- Archivos .dbf - Base de datos dBase
- El intérprete soporta manejo de bases de datos dBase
- Ejemplo: `nuevos contactos.dbf`

### Archivos de Índice (5 archivos)
- Archivos .ndx - Índices para archivos dBase
- Mejoran el rendimiento de búsquedas en bases de datos

### Archivos CSV (2 archivos)
- Archivos de valores separados por comas
- Ejemplo: `contactos.csv`
- Para importar/exportar datos

### Archivos DAT (4 archivos)
- Archivos de datos binarios o de configuración

## 6. Archivos Compilados y Binarios (18 archivos)

### Archivos Objeto (12 archivos)
- Archivos .o - Código objeto compilado
- Resultado intermedio de la compilación
- **Nota**: Estos archivos deberían estar en .gitignore

### Archivos DLL (3 archivos)
- Bibliotecas de enlace dinámico para Windows

### Archivos SO (3 archivos)
- Bibliotecas compartidas para Linux (Shared Objects)

## 7. Archivos Comprimidos (5 archivos)

### Archivos ZIP (5 archivos)
- `CppApplication_sin_graficos.zip` - Versión sin gráficos del intérprete
- `cppapp1MockDebug.zip` - Versión de depuración
- `cppappMockDebug_12Sept21.zip` - Versión de depuración del 12 de septiembre de 2021
- Contienen copias de versiones anteriores o distribuciones

## 8. Otros Archivos (27 archivos)

### Archivos inc (5 archivos)
- Archivos de inclusión adicionales

### Archivos syn (3 archivos)
- Posiblemente archivos de sintaxis

### Archivos JavaScript (1 archivo)
- Archivo .js para alguna funcionalidad web o de configuración

### Otros
- Archivos sin extensión
- Archivos de configuración de IDE (.vs, .vscode)

## Estructura de Directorios

```
.
├── CppApplication_1/          # Proyecto principal del intérprete
├── CppApplication_2/          # Versión alternativa
├── CppApplication_reparado/   # Versión reparada
├── CppApplication_sin_graficos/ # Versión sin interfaz gráfica
├── Ejemplos/                  # 37 programas de ejemplo en .pr
├── Manual/                    # Manual del intérprete
├── Notas/                     # Notas de desarrollo
├── ejemplos/                  # Ejemplos adicionales y archivos de prueba
├── myModule/                  # Módulo adicional
├── .vs/                       # Configuración de Visual Studio
└── .vscode/                   # Configuración de Visual Studio Code
```

## Tecnologías Utilizadas

Basándose en los tipos de archivos, este proyecto utiliza:

1. **Lenguaje C** - Lenguaje principal del intérprete
2. **Flex/Lex** - Para análisis léxico
3. **Yacc/Bison** - Para análisis sintáctico
4. **GTK+ 2.24** - Para interfaz gráfica (mencionado en README.md)
5. **Cairo** - Para gráficos 2D
6. **dBase** - Para manejo de bases de datos
7. **NetBeans** - Como IDE principal
8. **GCC** - Como compilador

## Propósito del Proyecto

Este es un **intérprete de lenguaje de programación personalizado** escrito en C que:
- Ejecuta programas escritos en un lenguaje interpretado propio (archivos .pr)
- Soporta operaciones matemáticas, estructuras de control, y gráficos
- Puede manejar bases de datos dBase
- Incluye interfaz gráfica basada en GTK+
- Proporciona múltiples ejemplos de programas en el lenguaje interpretado

## Conclusión

El repositorio contiene principalmente:
- **80 archivos** de código fuente del intérprete (C, C++, Lex, Yacc)
- **80 archivos** de programas de ejemplo en el lenguaje interpretado (.pr)
- **151 archivos** de configuración y construcción
- **14 archivos** de datos de prueba
- **59 archivos** entre documentación, binarios, y otros

Total: **384 archivos** organizados para desarrollar, compilar, y probar un intérprete de lenguaje personalizado con capacidades gráficas y de base de datos.
