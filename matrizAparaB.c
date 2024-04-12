#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int m1[2][4], m2[2][4], l, c, z = 1;
	printf("\nMatriz A\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			printf("Digite o %dº valor para a matriz A: ", z++);
			scanf("%d", &m1[l][c]);
		}
	}
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			m2[l][c] = m1[l][c];
		}
	}
	printf("\nMatriz B\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			printf("%d ", m2[l][c]);
		}
		printf("\n");
	}
	return 0;
}
