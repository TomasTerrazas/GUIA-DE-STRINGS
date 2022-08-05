/*2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".*/

#include <stdio.h>

int main()
{
    char palabra[20];
	char *p;    /* Puntero de la cadena */
	int contar=0;
	int i;

    printf("Ingrese una Palabra:\n"); scanf("%s",palabra);

	p = palabra;  /* Apunta al primer elemento de la cadena */
	while (*p != '\0')   /*Por convención, un caracter nulo \0 marca el fin de un string */
	{
		contar++;
		p++;			/* Vamos a la siguiente letra */
	}
	printf("La Palabra \"%s\" al revés \"", palabra );
	for (i=0;i<=contar;i++)
    {
       printf( "%c", *p );	/* Mostramos la letra actual */ 
       p--;
    }
    printf("\"");
}