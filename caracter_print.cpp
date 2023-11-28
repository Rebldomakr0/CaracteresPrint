/* Escribir un programa que lea una frase y posteriormente la escriba carácter a carácter utilizando printf.  strlen */

#include <stdio.h>
#include <string.h>

void caracter(char *, int, int );

int main(){
    char frase[50];
    
    
    int tam, i;

    caracter(&frase[50], tam, i);

    return 0;
}

void caracter(char frase[], int tam, int i){
    printf("Ingrese una frase: \n");
    gets(frase);
    tam = strlen(frase);
    
    printf("\nLa frase '%s' posee %d caracteres (contando espacios)\n", frase,tam);
    
    for(i=0; i<tam; i++){
    	printf("\n%c", frase[i]);
    	
	}

}
