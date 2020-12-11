#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");


//entrada
int numero;
printf("Insira um numero: ");
scanf("%d", &numero);

//processamento
if(numero%2==0)
printf("Numero Par. \n");

else
printf("Numero Impar. \n");

system("PAUSE");
return(0);}

