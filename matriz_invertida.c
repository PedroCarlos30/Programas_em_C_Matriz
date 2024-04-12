#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	int m1[2][4], l, c, z = 1;
	printf("\nMatriz\n\n");
	for(l = 0; l < 2; l++){
		for(c = 0; c < 4; c++){
			printf("Digite o %dº valor para a matriz: ", z++);
			scanf("%d", &m1[l][c]);
		}
	}
	printf("\nMatriz Invertida\n\n");
	for(l = 1; l >= 0; l--){
		for(c = 3; c >= 0; c--){
			printf("%d ", m1[l][c]);
		}
		printf("\n");
	}
	return 0;
}
