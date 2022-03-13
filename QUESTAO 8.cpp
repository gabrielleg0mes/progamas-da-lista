#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 8 - Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.

int fatorial (int valor) {
	int fatorial = 1;
	for (int i = valor; i > 1; i--) {
		fatorial = fatorial * i;
	}

	return fatorial;
}

int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");

	int numero, resultado;

	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &numero);

	resultado = fatorial(numero);
	printf("\nO fatorial desse número é: %d\n", resultado);
}
