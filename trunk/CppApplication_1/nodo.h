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

elnodo * procedimientos[127]; //cambiar esta forma
static int idx_prc = 0;

elnodo * pila_programas[32];
static int idx_prg = 0;


static int nro_decimales = 0;
