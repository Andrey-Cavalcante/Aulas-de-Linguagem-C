#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1,n2,n3,n4,n5,n6,n7,n8;
	
	printf("Escreva o primeiro valor: ");
	scanf("%d", &n1);
	
	printf("\nEscreva o segundo valor: ");
	scanf("%d", &n2);
	
	if (n1 % n2 == 1){
		n3 = n1 + n2 + 1;
		printf("\nA soma das 2 é %d", n3);
	} else if (n1 % n2 == 2){
		if(n1%2 == 0){
			printf("\nO primeiro é par ");
		}else{
			printf("\nO primeiro é impar ");
		}
		
		if(n2%2 == 0){
			printf("\nO segundo é par ");
		}else{
			printf("\nO segundo é impar ");
		}
	} else if(n1 % n2 == 3) {
		n5 = (n1+n2)*n1;
		printf("\nO valor deles somados vezes o primeiro é %d", n5);
	}else if (n1 % n2 == 4){
		if(n2 != 0){
			n6=(n1+n2)/n2;
			printf("\nA divisao é %d", n6);
		}else {
			printf("\nO segundo valor é 0!!");
		}
	}else {
		n7=n1*n1;
		n8=n2*n2;
		
		printf("\nO quadrado do primeiro é %d", n7);
		printf("\nO quadrado do segundo é %d", n8);
	}
	
		
	return 0;
}
