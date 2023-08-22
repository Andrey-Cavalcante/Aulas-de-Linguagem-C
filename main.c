//EXERCÍCIO 3

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sideA, sideB, sideC;
	
	printf("Digite os valores de cada lado (lado 1): \n");
	scanf("%i", &sideA);
	
	printf("Digite os valores de cada lado (lado 2): \n");
	scanf("%i", &sideB);
	
	printf("Digite os valores de cada lado (lado 3): \n");
	scanf("%i", &sideC);
	
	if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA){
	  printf("Formam um triangulo ");	 
		if (sideA == sideB && sideA == sideC){
	 		printf("equilatero. \n");
		 }
		else if (sideA == sideB || sideA == sideC || sideB == sideC){
			printf("isosceles. \n");
		}
		else {
			printf("escaleno.\n");
		}
	}
	else {
	 	printf("Nao e um triangulo.");
	 }
	return 0;
}
