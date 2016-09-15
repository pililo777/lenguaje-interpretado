// especificar aqui los tipos de nodo que puede tener el arbol sintactico  abstracto  --  abstract syntax tree AST
//github
typedef enum tipos_nodo {un_numero =1, desde, nombre_de_variable, dimensionar, asigna_vector, evalua_vector, dibuja_linea, dibuja_circulo,
indice_strings, procedimiento, secuencia , imprimir, convertir_texto_a_numero, convertir_numero_a_texto,
suma, resta, multiplica, divide, si, mientras, asigna_num, asigna_alfa, evaluar,
mayorque, menorque, igualque, leer, leertexto, noigualque, menorigualque, mayorigualque, negativo,
comparaliteral, imprimir_varios, imprimir_expresion, imprimir_literal, imprimir_var_alfa, guardar_boton, secuencia_controles,
constante_literal, llamar, decimales, ventana, defventana, crear_ventana, mostrar_ventana, mostrar_ventanas, cambiar_titulo,  mensaje, guardar_etiqueta, guardar_texto, interpreta, 
 graficos, stop, abrir, cerrar, leer_archivo, mostrar, 
sumar_alfa, salir,  vaciar, and, or, continuar, buscar_clave, insertar_clave, 
eliminar_clave, use_indice, close_indice, actualizar, push, pop,
definir_registro, buscar_registro, listacampos, imprimir_var_vectoralfa, retorno, 
asigna_alfa_var, actualizar_registro, escribir_archivo, dimensionar_alfa, asigna_vector_alfa,
asigna_vector_alfa2, asigna_vector_alfa3, funcion, lista_argumentos, lista_parametros } tiponodo;

typedef struct ast {
	tiponodo tipo;
	double num;
	int    nrolinea1;
	int    nrolinea2;
	 
	int subnodos;
	struct ast * nodo1;
	struct ast * nodo2;
	struct ast * nodo3;
	struct ast * nodo4;
        struct ast * nodo5;
} ast;
