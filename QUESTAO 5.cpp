#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questa� 5 - Fa�a uma sub-rotina que receba um valor inteiro e verifique se ele � positivo ou negativo.

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
		printf("\nEste � um n�mero negativo.\n");
	}
	else {
		printf("\nEste � um n�mero � positivo.\n");
	}
}
