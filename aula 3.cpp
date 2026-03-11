#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
	// exercicio 1
	/*int num;
	
	printf("E positivivo ou negativo?\n");
	printf("Para saber, digite um numero: ");
	scanf("%i", &num);
	
	if(num >= 0) {
		printf ("Nao e negativo\n");
	}
	else {
	printf ("e negativo\n");
	}
	
	
	// exercicio 2
	
	printf("\nEsta entre um intervalo de numeros?\n");
	printf("Para saber, digite um numero: ");
	scanf("%i", &num);
	
	if (num >=0 && num <=9) {
		printf ("O numero esta ente 0 e 9");
	}
	else {
		printf("O numero nao esta entre 0 e 9");
	}
	
	
	
	// exercicio 3
	int num1;
	int num2;
	float num3;
	printf("\nDigite um numerador: ");
	scanf("%i", &num1);
	fflush (stdin);
	printf("\nDigite um divisor: ");
	scanf("%i", &num2);
	
	
	if (num2 !=0) {
		num3 = (num1/num2);
		printf("%.2f", num3);
	}
	
	else {
		printf("Nao existe divisao por zero");
	}*/

	
	
	//exercicio 4
	float num1, num2, num3, num4, num5, num6, num7, num8;
	printf("\nMedia do aluno\n");
	printf("Digite sua nota na P1: ");
	scanf("%f", &num5);
	printf("\nNota P2: ");
	scanf ("%f", &num6);
	
	num7 = (num5 + num6)/2;
	
	if (num7 >=5) {
		printf("\nAprovado");
	
	}
	else {
		num8 = 5 - num7;
		printf("Faltou %.2f para a aprovacao");
	}
	
	
	
	return 0;
}