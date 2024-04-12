#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int mat[5][5], l, c, i = 1;
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			printf("Digite o %iº valor: ", i++);
			scanf("%d", &mat[l][c]);
		}
	}
	printf("\nMatriz\n\n");
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}
	return 0;
}
