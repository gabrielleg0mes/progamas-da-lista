#include <stdlib.h> 
#include <locale.h>
#include <stdio.h>

// Quest�o 9 -  Crie uma sub-rotina que receba como par�metro um valor inteiro e positivo e retorne a soma dos divisores desse valor.

int numero (int x) {
  	int i, divisores = 0;

	for(i=1; i <=x; i++) {
		if(x % i == 0)
			divisores = divisores + 1;
	}
	
return divisores;
}

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
 	int i, resultado;

	printf("\nDigite um numero inteiro e positivo: ");
	scanf("%d", &i);


	resultado = numero(i);

	printf("\nO resultado da soma �: %d.\n", resultado);
}
