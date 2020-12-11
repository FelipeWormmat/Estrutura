/*

	calculo de raizes por bhaskara
	Felipe
	02/05/2018

*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	float a, b, c;
	float delta;
	float x1,x2;
	
	printf("Na fun��o de segundo grau: ax�+bx+c=0");
	printf("forne�a o valor de a: \n");
	scanf("%f", &a);
	printf("forne�a o valor de b: \n");
	scanf("%f", &b);
	printf("forne�a o valor de c: \n");
	scanf("%f", &c);
	
	
	delta=pow(b,2)-4*a*c;
	printf("valor do delta: %0.2f", delta);
	
	if(delta>0 ){
		printf ("raizes reais distintas. |n");
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		
		printf("raizes reais calculadas: %0.2f e  %0.2f. \n", x1, x2);	
}
	else{
		if(delta==0){
			printf("raizes reais iguais. \n");
			x1=b/(2*a);
			printf("raizes reais calculadas: %0.2f e  %0.2f. \n", x1, x1);	
		}
		else{ //delta<0
			printf("N�o h� ra�zes reais");
		}
	}	
	

system("PAUSE");
return(0);
}

