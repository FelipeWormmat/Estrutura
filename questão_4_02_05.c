
/*
	Felipe
	02/05/2018

*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

float cubo(float x){
	return x*x*x;
	
}

int main(){
	setlocale(LC_ALL, "");

	 float numero;
	 float cubonumero;
	 
	 printf("forneça um numero: ");
	 scanf("%f ",&numero);
	 cubonumero=cubo(numero);
	 printf("o cubo de %0.2f eh %0.2f. \n\n ", numero, cubonumero);


system("PAUSE");
return(0);
}

