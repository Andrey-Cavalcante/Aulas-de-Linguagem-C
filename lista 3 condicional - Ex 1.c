#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/* (Lista 3 condicional)*/
/*AT 01)*/	
	int v1, v2, v3;
	
	printf("Primeiro valor: ");
	scanf("%d",&v1);
	
	printf("Segundo valor: ");
	scanf("%d",&v2);
	
	printf("Terceiro valor: ");
	scanf("%d",&v3);
	
	
	
	if(v1 > v2 && v1 > v3) {
		printf("O maior valor e: %d\n", v1);
	}
	else if(v2 > v1 && v2 > v3){
		printf("O maior valor valor e: %d\n", v2);
	}
	else{
		printf("O maior valor e: %d\n", v3);
	}
	
	if(v1 < v2 && v1 < v3) {
		printf("O menor valor e: %d\n", v1);
	}
	else if(v2 < v1 && v2 < v3){
		printf("O menor valor valor e: %d\n", v2);
	}
	else{
		printf("O menor valor e: %d\n", v3);
	}
	
	
	return 0;
}
