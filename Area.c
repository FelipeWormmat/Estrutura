/*
	Felipe
	04/04/2018
	Calculo da �rea do Circulo
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main()
{
	float raio;
	float area;
	float perimetro;

	//entrada
	printf("forneca o raio do circulo (em m)");
	scanf("%f", &raio);
	//processamento
	area = PI * raio * raio;
	perimetro = 2 * PI * raio;
	//saida
	printf("a area do circulo eh %0.1f m2.\n\n\n", area);
	printf("perimetro eh %f \n\n\n", perimetro);

	system("PAUSE");
	return (0);
}
