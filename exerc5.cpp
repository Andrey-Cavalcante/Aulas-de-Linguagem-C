#include <stdio.h>

/*5 - Elabore um algoritmo que informe se um dado ano � ou n�o bissexto. Obs: um ano �
bissexto se ele for divis�vel por 400 ou se ele for divis�vel por 4 e n�o por 100.*/

int main(){
	int ano, div1, div2;
	
	printf("-> insira um ano: ");
	scanf("%d", &ano);
	
	div1 = (ano%4);
	div2 = (ano%100);
	
	if((div1 == 0) && (div2 != 0)){
		printf("\nO ANO EH BISSEXTO!\n");
	}
	else{
		printf("\nO ANO NAO EH BISSEXTO!\n");
	}
	return(0);
}
