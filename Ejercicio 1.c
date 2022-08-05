/*1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.
*/
#include <stdio.h>

int main()
{
    char palabra[20];
	char *p;    /* Puntero de la cadena */
	int contar=0;

    printf("Ingrese una Palabra:\n"); scanf("%s",palabra);

	p = palabra;  /* Apunta al primer elemento de la cadena */
	while (*p != '\0')   /*Por convención, un caracter nulo \0 marca el fin de un string */
	{
		contar++;
		printf( "%i -", contar );
		printf( "%c\n", *p );	/* Mostramos la letra actual */
		p++;			/* Vamos a la siguiente letra */
	}
	printf( "La Palabra \"%s\" Tiene %i Letras.\n", palabra, contar );
    
}