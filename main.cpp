#include <iostream>
#include <stdio.h>
#include <math.h>

// UTILIZAR O ARGUMENTO -lm PARA A FUNÇÃO SIN(X)

#define LINHAS 25
#define COLUNAS 80

using namespace std;

int main(int argc, char *argv[]) {
	float px, py;
	float lins, cols;
	int i, j;

	lins = 1;
	cols = 10;

	py = (lins -(-lins))/LINHAS;
	px = (cols -(-cols))/COLUNAS;

	//DECLARANDO A MATRIZ LINHAS | COLUNAS
	char x[LINHAS][COLUNAS];

	//CRIANDO PLANO CARTESIANO
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			if((i == (LINHAS/2)) && (j == (COLUNAS/2))){
				x[i][j] = '+';
			}else if(i == (LINHAS/2)){
				x[i][j] = '-';
			}else if(j == (COLUNAS/2)){
				x[i][j] = '|';
			}else{
				x[i][j] = ' ';
			}
		}
	}

    float v = -7;
    float seno[COLUNAS];
	int aux;

	for(i = 0; i < COLUNAS; i++){
		seno[i] = sin(v);
		aux = seno[i]*LINHAS;
		if(aux < 0){
			aux *= -1;
		}
		x[aux][i] = '+';
		v += py;
	}

    int aux;
    for(i = 0; i < COLUNAS; i++){
        aux = seno[i]*LINHAS;
        x[aux][i] = '+';
    }

	//PRINTANDO A MATRIZ
	printf("\n");
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("%c", x[i][j]);
		}
		printf("\n");
	}

	return 0;
}
