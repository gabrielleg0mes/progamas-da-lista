#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Quest�o 1 - Fa�a uma sub-rotina que receba um n�mero inteiro e positivo N como par�metro e retorne a soma dos n�meros inteiros existentes entre o n�mero 1 e N (inclusive).

int num(int z) {

int n, soma = 0;

for(n=2; n<z; n++) {
soma = soma+n; }

return soma;

}

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int n, x = 0;
	
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d", &n);
	
	x= num(n);
	
	printf("\nA soma dos n�meros maior que 1 e %d �: %d.\n", n,x);
	
	return 0;
}
