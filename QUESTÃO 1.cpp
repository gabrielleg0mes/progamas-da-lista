#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 1 - Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos números inteiros existentes entre o número 1 e N (inclusive).

int num(int z) {

int n, soma = 0;

for(n=2; n<z; n++) {
soma = soma+n; }

return soma;

}

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int n, x = 0;
	
	printf("Digite um número inteiro e positivo: ");
	scanf("%d", &n);
	
	x= num(n);
	
	printf("\nA soma dos números maior que 1 e %d é: %d.\n", n,x);
	
	return 0;
}
