/*8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN". No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nombre[100][20]; //Arreglo que guardara los nombres
	char FIN[]="FIN";
	char texto[20];
	char aux[20]; //Vector auxiliar que guardara nombres temporalmente
	int i,x; //Ciclos que ayudaran a ordenar el arreglo
	int numero;

	printf("---- INGRESE LISTA DE NOMBRES DE PERSONAS. Para terminar ingrese la palabra \"FIN\" (EN MAYUSCULAS)---- \n");
    i=0;
	while (strcmp(texto,FIN)!=0)
	{
		printf("Ingresa un nombre: ");
		scanf("%s",texto);
		strcpy(nombre[i],texto);
		i++;
	} 
	
	numero=i-1;
	for(i=1;i<numero;i++) //Ciclo que se repetirá n veces para ordenar cada nombre
  		for(x=0;x<numero-i;x++) //Ciclo que ordenara un nombre por cada ciclo
    		 if(strcmp(nombre[x],nombre[x+1])>0) //Si el nombre actual es mayor al siguiente 
        	{
        		strcpy(aux,nombre[x]); //Guardamos el nombre actual en Aux
        		strcpy(nombre[x],nombre[x+1]); //Pasamos el nombre siguiente al actual
        		strcpy(nombre[x+1],aux); //Pasamos el Aux al siguiente
    	    }
    	    
	printf("\n---- NOMBRES ORDENADOS ---- ");
	printf( " SON %i NOMBRES\n",numero);
	//Mostramos los nombres ordenados
	for(i=0;i<numero;i++){
		printf("%s \n",nombre[i]);
	} 
}