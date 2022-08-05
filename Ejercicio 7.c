/*7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.*/

#include <stdio.h>
#include<string.h>

int main()
{
    char nombre[20];
	int edad;
	int i;
	int edadjoven=100;
	char nombrejoven[20];
    int index=0;

        for(i=1;i<6;i++)
        {
            printf("Ingrese el NOMBRE de la persona N°%i : ",i); scanf("%s",nombre);
            printf("Ingrese la EDAD de \"%s\" : ",nombre); 
            scanf("%i",&edad);
            if(edad<edadjoven)
            {
                edadjoven=edad;
                strcpy(nombrejoven,nombre);
            } 
        }
    printf("\n");
    printf( "El Nombre de la Persona mas Joven es: \"%s\" su edad es \"%i\" años ",nombrejoven,edadjoven);
}
