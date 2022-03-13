#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Questão 18 - Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.

int ehprimo(int x) {
    int i,divisores = 0;
    
    for(i=1; i <=x; i++) {
    	if(x%i==0)
    	divisores++;
	}
    if(divisores==2)
         return 1; 
         else
         return 0;
}
int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
    int i, total_primos=0;
    
    for(i=100; i<=1000; i++) {
    	if(ehprimo(i) ==1) {
	    	printf ("\n%d\n", i);
	    	total_primos++;
        }
        if(total_primos==3) {
        	break;
        	
		}
    }
	return 0;
}
