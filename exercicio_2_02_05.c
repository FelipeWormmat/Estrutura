
/*
	Felipe
	02/05/2018

*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

	int segundos(int horas){
	int resultado;
	resultado=horas*3600;
	return resultado;
}


int main(){
	setlocale(LC_ALL, "");
	int s, h;
	
	printf("Forneça um número de horas: ");
	scanf("%d", &h);
	s=segundos(h);
	
	printf("%d horas tem %d segundos.", h, s);
	printf("%d horas tem %d segundos.\n", h, segundos(h));




system("PAUSE");
return(0);
}

