#include <stdio.h>

/*4 - Escreva um algoritmo que leia um n�mero inteiro. Se o n�mero lido for positivo,
escreva uma mensagem indicando se ele � par ou �mpar. Se o n�mero for negativo,
escreva a seguinte mensagem �Este n�mero n�o � positivo�.*/

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
			printf("\nEH �MPAR!");
		}
	}
	else{
		printf("o numero digitado nao eh positivo...\n");
	}
	return(0);
}
