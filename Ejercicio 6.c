/*6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces. Para simplificar el problema, trabaje solo con mayúsculas.*/

#include <stdio.h>

int main()
{
    char palabra[20];
	char *p;    /* Puntero de la cadena */
	int contar=0;
	int i;
	int max=0;
    int index=0;
	
	int NumeroLetra[27]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  //27 Letras
    char Letra[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',165};
    printf("Ingrese una Palabra TODOS CON MAYUSCULA:\n"); scanf("%s",palabra);

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
        case 65:NumeroLetra[0]++; break;
        case 66:NumeroLetra[1]++; break;
        case 67:NumeroLetra[2]++; break;
        case 68:NumeroLetra[3]++; break;
        case 69:NumeroLetra[4]++; break;
        case 70:NumeroLetra[5]++; break;
        case 71:NumeroLetra[6]++; break;
        case 72:NumeroLetra[7]++; break;
        case 73:NumeroLetra[8]++; break;
        case 74:NumeroLetra[9]++; break;
        case 75:NumeroLetra[10]++; break;
        case 76:NumeroLetra[11]++; break;
        case 77:NumeroLetra[12]++; break;
        case 78:NumeroLetra[13]++; break;
        case 79:NumeroLetra[14]++; break;
        case 80:NumeroLetra[15]++; break;
        case 81:NumeroLetra[16]++; break;
        case 82:NumeroLetra[17]++; break;
        case 83:NumeroLetra[18]++; break;
        case 84:NumeroLetra[19]++; break;
        case 85:NumeroLetra[20]++; break;
        case 86:NumeroLetra[21]++; break;
        case 87:NumeroLetra[22]++; break;
        case 88:NumeroLetra[23]++; break;
        case 89:NumeroLetra[24]++; break;
        case 90:NumeroLetra[25]++; break;
        case -61:NumeroLetra[26]++; break;
        }
        p++;
    }
    printf("\n");
    printf( "La Palabra \"%s\" Tiene Total %i Letras", palabra,contar);
    	
        for(i=0;i<27;i++)
        {
            if(NumeroLetra[i]>max)
            {
                  max=NumeroLetra[i];
                  index=i;
            } 
        }
    printf("\n");
    printf( "La letra \"%c\" aparece mayor cantidad de veces. Aparece %i veces ", Letra[index],max);
}
