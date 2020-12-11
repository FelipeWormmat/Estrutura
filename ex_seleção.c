/*
	Felipe
	11/04/2018
	Exemplo com extrutura de seleção
*/

#include<stdio.h>
#include<stdlib.h>


int main(){
	float  a1, a2, a3;
	float media;

	
	//entrada
	printf("Forneca a nota da primeira avaliacao:");
	scanf("%f", &a1);
	printf("Forneca a nota da segunda avaliacao (APS):");
	scanf("%f", &a2);
	printf("Forneca a nota da terceira avaliacao:");
	scanf("%f", &a3);
	
	media=a1*0.2+a2*0.2+a3*0.6;
	printf("Media Calculada %f. \n\n", media);
	
	if(media>=7){
		printf("aluno aprovado. \n\n");
		printf("Parabens. \n\n");
	}
	else{
		printf("aluno Reprovado. \n\n");
		printf("devera cursar a disciplina novamente. \n\n");
	}

	system("PAUSE");
	return(0);
}
