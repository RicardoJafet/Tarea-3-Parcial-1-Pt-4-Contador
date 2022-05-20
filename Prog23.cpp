/*Autor: Ricardo Jafet Granados Chable, Realizado: 23/02/2022
    programa numero 23 en C: Conteo de numeros negativos.
	*/
	
#include<stdio.h>

int main (){
	float n;
	int negativo=0;
	printf("--------------------------------");
	printf("\nContador de numeros negativos");
	printf("\n--------------------------------");
	while(n!=0){
		printf("\nIntroduzca el numero: ");
		scanf("%f",&n);
		if(n<0){
		negativo=negativo+1;	
		}
	}
	
	printf("\nLa cantidad de numeros negativos es: %d",negativo);
	
	return 0;
}
