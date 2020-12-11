# include <stdio.h>
# include <stdlib.h>
# include <locale.h>



int main(){
	setlocale(LC_ALL, "");
	
int numero;
printf("Digite um valor:  ");
scanf("%d", &numero);
if(numero>0) 
	printf("numero positivo. \n");
else{
	if(numero<0)
	printf("numero negativo. \n");
	else
	printf("valor nulo. \n");

}
	system("PAUSE");
return (0);
}


