
/*
	Felipe
	02/05/2018

*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");

int numero;
int repeticao;

for (repeticao=0;repeticao<15;repeticao++)      {

printf("Forneca um numero:");
scanf("%i", &numero);
if (numero>0)
printf("numero positivo: %i\n", numero);
else
printf("numero negativo: %i\n", numero);
if ((numero%2)==0)
printf("numero par: %i\n", numero);
else
printf("numero impar: %i\n", numero);

}






system("PAUSE");
return(0);
}

