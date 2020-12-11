/*
	Felipe
	04/04/2018
	Calculo da área do Circulo
*/

#include<stdio.h>
#include<stdlib.h>


int main(){
	float salarioreajustado;
	float salario;
	int idade;
	//entrada
	printf("forneca o salario R$ ");
	scanf("%f", &salario);
	printf("forneca a idade ","anos");
	scanf("%d", &idade);
	//processamento
	salarioreajustado=salario/100*12+salario; 
	//saida
	printf("salario reajustado R$ %0.2f \n\n\n", salarioreajustado);
	
	
	system("PAUSE");
	return(0);
}
