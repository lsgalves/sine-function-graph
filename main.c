#include <stdio.h>
#include <math.h>

#define ROWS 25
#define COLS 85

int main() {
	float px, py, v = -7, seno[COLS];
	float rows, cols;
	int i, j, aux;
	char x[ROWS][COLS];

	rows = 1;
	cols = 10;

	py = (rows - (-rows)) / ROWS;
	px = (cols - (-cols)) / COLS;

	// Criando o grafico da função seno
	for (i = 0; i < COLS; i++) {
		seno[i] = sin(v);
		aux = seno[i] / py;
		if (aux > 0) {
			aux = ROWS / 2 + aux;
		} else {
			aux *= -1;
			aux = ROWS / 2 - aux;
		}
		x[aux][i] = '+';
		v += px;
	}

	// Criando plano cartesiano
	printf("\n");
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			if ((i == (ROWS / 2)) && (j == (COLS / 2))) {
				x[i][j] = '+';
			} else if (i == (ROWS/2) && x[i][j] != '+') {
				x[i][j] = '-';
			} else if (j == (COLS/2) && x[i][j] != '+') {
				x[i][j] = '|';
			} else if (x[i][j] != '+') {
				x[i][j] = ' ';
			}
			printf("%c", x[i][j]);
		}
		printf("\n");
	}

	return 0;
}
