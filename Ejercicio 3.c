/*3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, si tienen las mismas letras en las mismas posiciones.*/


#include <stdio.h>

int main()
{
    char palabra1[20];
    char palabra2[20];
	char *p1;    /* Puntero de la cadena */
	char *p2;    /* Puntero de la cadena */
	int contar1=0;
	int contar2=0;
	int i;
    int CuentaErrores;
    printf("Ingrese la Palabra1:\n"); scanf("%s",palabra1);
    printf("Ingrese la Palabra2:\n"); scanf("%s",palabra2);
	p1 = palabra1;  /* Apunta al primer elemento de la palabra1 */
	p2 = palabra2;  /* Apunta al primer elemento de la palabra2 */	
	while (*p1 != '\0')   /*Por convención, un caracter nulo \0 marca el fin de un string */
	{
		contar1++;
		p1++;			/* Vamos a la siguiente letra */
	}
	while (*p2 != '\0')   /*Por convención, un caracter nulo \0 marca el fin de un string */
	{
		contar2++;
		p2++;			/* Vamos a la siguiente letra */
	}
	printf( "La Palabra1 \"%s\" Tiene %i Letras.\n", palabra1, contar1 );
	printf( "La Palabra2 \"%s\" Tiene %i Letras.\n", palabra2, contar2 );
	p1 = palabra1;  /* Apunta al primer elemento de la palabra1 */
	p2 = palabra2;  /* Apunta al primer elemento de la palabra2 */	
	CuentaErrores=0;
	if (contar1==contar2) // comparar la cantidad de letras en las palabras
	{
		for (i=1;i<=contar1;i++)
        {
           if (*p1==*p2)  // comparar letra por letra de cada palabra
           {
            p1++;
            p2++;
           } 
           else
           {
            CuentaErrores++;  //cuenta errores de NO igualdad 
           }
        }
        if (CuentaErrores==0)
           {
            printf("Las Palabras SON IGUALES");
           } 
           else
           {
            printf("Las Palabras NO SON IGUALES");
           }
	} else
      {
      printf("Las Palabras NO SON IGUALES");
      }
}