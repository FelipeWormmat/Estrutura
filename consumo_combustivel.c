/*
	Felipe
	04/04/2018
	consumo combustivel
*/

#include<stdio.h>
#include<stdlib.h>

#define CONSUMO 12


int main(){

	float distancia_km;
	float valor_combustivel;
	float quantidade_litros;
	float gastos_reais;
	
	
	//entrada
	printf("forneca a distancia percorrida  ");
	scanf("%f", &distancia_km);
	printf("forneca o valo do combustivel em R$  ");
	scanf("%f", &valor_combustivel);
		

	//processamento
	quantidade_litros=distancia_km/CONSUMO;
	gastos_reais=quantidade_litros*valor_combustivel;
	
	//saida
	printf("\nconsumo de combustivel %0.2f \n\n", quantidade_litros);
	printf("consumo em reais %.2f \n\n\n", gastos_reais);

	system("PAUSE");
	return(0);
}
