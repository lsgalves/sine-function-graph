#include <iostream>
#include <math.h>

#define LINHAS 25
#define COLUNAS 85

int main(int argc, char *argv[]) {
	float px, py, v = -7, seno[COLUNAS];
	float lins, cols;
	int i, j, aux;
	char x[LINHAS][COLUNAS];

	lins = 1;
	cols = 10;

	py = (lins - (-lins)) 	/ LINHAS;
	px = (cols - (-cols)) / COLUNAS;

	// CRIANDO PLANO CARTESIANO
	for (i = 0; i < LINHAS; i++) {
		for (j = 0; j < COLUNAS; j++) {
			if ((i == (LINHAS / 2)) && (j == (COLUNAS / 2))) {
				x[i][j] = '+';
			} else if (i == (LINHAS/2)) {
				x[i][j] = '-';
			} else if (j == (COLUNAS/2)) {
				x[i][j] = '|';
			} else {
				x[i][j] = ' ';
			}
		}
	}

	// CRIANDO A FUNCAO SENO
	for (i = 0; i < COLUNAS; i++) {
		seno[i] = sin(v);
		aux = seno[i] / py;
		if (aux > 0) {
			aux = LINHAS / 2 + aux;
		} else {
			aux *= -1;
			aux = LINHAS / 2 - aux;
		}
		x[aux][i] = '+';
		v += px;
	}

	// PRINTANDO A MATRIZ
	std::cout << std::endl;
	for (i = 0; i < LINHAS; i++) {
		for (j = 0; j < COLUNAS; j++) {
			std::cout << x[i][j];
		}
		std::cout << std::endl;
	}

	return 0;
}
