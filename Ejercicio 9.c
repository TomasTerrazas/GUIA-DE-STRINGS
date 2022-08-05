/*9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano.*/

#include <stdio.h>
#include<string.h>

int main()
{
    char palabra[10];
    int CantidadLetras=0;
    int i = 0;
	    printf("Ingrese la palabra con Mayusculas a Encriptar: ");
        scanf("%s", palabra);
        CantidadLetras=strlen(palabra);
        for(i=0; i<CantidadLetras; i++)  // Encriptada letras Mayusculas
        {
            if (palabra[i]>64 && palabra[i]<91)
            {
                if (palabra[i]<=87)
                {
                  palabra[i]=palabra[i]+3;  
                }
                else 
                {
                  palabra[i]=65+(90-palabra[i]);     
                }
            }
        }
        printf("\n");
        printf("Palabra Encriptada: %s (son %i letras)",palabra,CantidadLetras); 
}
