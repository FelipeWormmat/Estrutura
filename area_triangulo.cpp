/*
	Felipe
	04/04/2018
	Calculo da área do triangulo
*/

#include<stdio.h>
#include<stdlib.h>




int main(){

	float area_do_triangulo;
	float base;
	float altura;
	
	//entrada
	printf("forneca a base do triangulo  ");
	scanf("%f", &base);
	printf("forneca a altura do triangulo   ");
	scanf("%f", &altura);	

	//processamento
	area_do_triangulo=base*altura/2;
	
	//saida
	printf("area do triangulo %0.2f \n\n\n", area_do_triangulo);

	system("PAUSE");
	return(0);
}
