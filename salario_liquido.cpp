#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "");
float salario_Base, gratificacao, salario_Bruto, ir, salario_Liquido;

printf("Informe o sal�rio base R$: ");
scanf("%f", &salario_Base);
printf("Informe a gratifica��o R$: ");
scanf("%f", &gratificacao);

salario_Bruto = salario_Base+gratificacao;

if (salario_Bruto<2500)
ir=salario_Bruto*0.15;

else
ir=salario_Bruto*0.2;

salario_Liquido=salario_Bruto-ir;

printf ("Sal�rio Bruto R$ = %0.2f \n", salario_Bruto);
printf ("IR R$ = %0.2f \n", ir);
printf ("Sal�rio liquido R$ = %0.2f \n" , salario_Liquido);


system("PAUSE");
return(0);}

