#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int A[2][4], B[2][4], l, c, z = 1, soma = 0;
	printf("\nMatriz A\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			printf("Digite o %dº valor para a matriz A: ", z++);
			scanf("%d", &A[l][c]);
		}
	}
	z = 1;
	printf("\nMatriz B\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			printf("Digite o %dº valor para a matriz B: ", z++);
			scanf("%d", &B[l][c]);
		}
	}
	printf("\n\t\tMatriz A\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			printf("\t%d ", A[l][c]);
		}
		printf("\n");
	}
	printf("\n\t\t+\n");
	printf("\n\t\tMatriz B\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			printf("\t%d ", B[l][c]);
		}
		printf("\n");
	}
	printf("\n\t\t=\n");
 	printf("\n\t\tMatriz AB\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			soma = A[l][c] + B[l][c];
			printf("\t%d ", soma);
		}
		printf("\n");
	}
	return 0;
}
