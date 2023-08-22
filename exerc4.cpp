#include <stdio.h>

/*4 - Escreva um algoritmo que leia um número inteiro. Se o número lido for positivo,
escreva uma mensagem indicando se ele é par ou ímpar. Se o número for negativo,
escreva a seguinte mensagem “Este número não é positivo”.*/

int main(){
	int num;
	
	printf("-> digite um numero: ");
	scanf("%d", &num);
	
	if(num > 0){
		printf("o numero digitado eh positivo...\n");
		if(num % 2 == 0){
			printf("\nEH PAR!");
		}
		else{
			printf("\nEH ÍMPAR!");
		}
	}
	else{
		printf("o numero digitado nao eh positivo...\n");
	}
	return(0);
}
