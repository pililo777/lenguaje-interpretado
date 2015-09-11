// especificar aqui los tipos de nodo que puede tener el arbol sintactico  abstracto  --  abstract syntax tree AST

typedef enum tipos_nodo {un_numero =1, desde, nombre_de_variable, dimensionar, asigna_vector, evalua_vector, dibuja_linea, dibuja_circulo,
			indice_strings, procedimiento, secuencia , imprimir, convertir_texto_a_numero, convertir_numero_a_texto,
			suma, resta, multiplica, divide, si, mientras, asigna_num, asigna_alfa, evaluar,
			mayorque, menorque, igualque, leer, leertexto, noigualque, menorigualque, mayorigualque, negativo,
			comparaliteral, imprimir_varios, imprimir_expresion, imprimir_literal, imprimir_var_alfa, guardar_boton, secuencia_controles,
			constante_literal, llamar, decimales, ventana, defventana, crear_ventana, mostrar_ventana, mostrar_ventanas, cambiar_titulo,  mensaje, guardar_etiqueta, guardar_texto, interpreta, graficos, stop} tiponodo;

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
