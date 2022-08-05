/*4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.*/

#include <stdio.h>

int main()
{
    char palabra[20];
	char *p;    /* Puntero de la cadena */
	int contar=0;
	int CuentaLetras=0;
	int i;

    printf("Ingrese una Palabra:\n"); scanf("%s",palabra);

	p = palabra;  /* Apunta al primer elemento de la cadena */
	while (*p != '\0')   /*Por convención, un caracter nulo \0 marca el fin de un string */
	{
		contar++;
		p++;			/* Vamos a la siguiente letra */
	}
	p = palabra;  /* Apunta al primer elemento de la cadena */	
	for (i=0;i<=contar;i++)
    {
       if(*p==97) // Comparamos con la letra A minuscula con el codigo ASCII a=97
       {
        CuentaLetras++;   
       }
       p++;
    }
    printf( "La Palabra \"%s\" Tiene Total %i Letras y %i Letras A minusculas.", palabra,contar, CuentaLetras );
}