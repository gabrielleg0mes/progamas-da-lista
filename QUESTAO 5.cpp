#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questaõ 5 - Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.

void numero();

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	numero();
}
void numero() {
 	int valor;

	printf("\nDigite um valor: ");
	scanf("%d", &valor);

	if (valor < 0) {
		printf("\nEste é um número negativo.\n");
	}
	else {
		printf("\nEste é um número é positivo.\n");
	}
}
