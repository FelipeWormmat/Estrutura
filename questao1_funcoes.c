/*

quest�o 1 - fun��es
	Felipe
	02/05/2018

*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

	float abs(float valor){
	float resultado;
	if(valor<0)
		resultado=valor*-1;
	else
		resultado=valor;
		return resultado;
		
}

int main(){
	setlocale(LC_ALL, "");
	
	float numero;
	float absoluto;
	
	printf("forne�a um numero: ");
	scanf("%f", &numero);
	absoluto=abs(numero);
	printf("o valor de  %f �  %f\n\n\n", numero, absoluto);




system("PAUSE");
return(0);}

