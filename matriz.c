#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int mat[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25}, l, c, i = 0;
	printf("\nMatriz\n\n");
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			printf("%d ", mat[l][c]);
		}
		printf("\n");
	}
	return 0;
}
