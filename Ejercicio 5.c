/*5) El usuario ingresa una palabra. Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.*/

#include <stdio.h>

int main()
{
    char palabra[20];
	char *p;    /* Puntero de la cadena */
	int contar=0;
	int CuentaMinusculas=0;
	int CuentaMayusculas=0;
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
       switch(*p)
       {
         case 'A':CuentaMayusculas++; break;
         case 'E':CuentaMayusculas++; break;
         case 'I':CuentaMayusculas++; break;
         case 'O':CuentaMayusculas++; break;
         case 'U':CuentaMayusculas++; break;
         case 'a':CuentaMinusculas++; break;
         case 'e':CuentaMinusculas++; break;
         case 'i':CuentaMinusculas++; break;
         case 'o':CuentaMinusculas++; break;
         case 'u':CuentaMinusculas++; break;
        }
        p++;
    }
    printf("\n");
    printf( "La Palabra \"%s\" Tiene Total %i Letras y tiene %i vocales minúsculas y %i vocales mayúsculas", palabra,contar,CuentaMinusculas,CuentaMayusculas);
}