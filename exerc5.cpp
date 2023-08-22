#include <stdio.h>

/*5 - Elabore um algoritmo que informe se um dado ano é ou não bissexto. Obs: um ano é
bissexto se ele for divisível por 400 ou se ele for divisível por 4 e não por 100.*/

int main(){
	int ano, div1, div2, div3;
	
	printf("-> insira um ano: ");
	scanf("%d", &ano);
	
	div2 = (ano%4);
	div3 = (ano%100);
	
	if((div1 == 0) && (div3 != 0)){
		printf("\nO ANO EH BISSEXTO!\n");
	}
	else{
		printf("\nO ANO NAO EH BISSEXTO!\n");
	}
	return(0);
}
