#include <stdio.h>

int main(){
	int mat_pontos [4][4]{
	{5, 7, 8, 6},
	{4, 6, 5, 7},
	{3, 9, 6, 8},
	{2, 4, 7, 5}
	};
	printf("Pontos dos alunos: ");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%d ", *(*(mat_pontos + i) + j));
			
		}
		printf("\n");
	}
	printf("--------------------------------------------------------------------------\n");
	printf("Pontos pares e impares: \n");
	int par;
	int impar;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(*(*(mat_pontos + i) + j) % 2 == 1){
				impar += 1;
			}			
			else{
				par += 1;
			}
		}
	}
	
	printf("\nPontos pares: %d\nPontos impares: %d\n", par, impar);
	printf("--------------------------------------------------------------------------\n");
	
	printf("Soma dos pontos de cada jogador: \n");
	
	 for (int i = 0; i < 4; i++) {
        int soma = 0;
        int *p_linha = mat_pontos[i]; // Ponteiro para o início da linha i
        for (int j = 0; j < 4; j++) {
            soma += *(p_linha + j); // Acessa mat[i][j]
        }
        printf("Soma do jogador %d = %d\n", i+1, soma);
    }
    
	printf("--------------------------------------------------------------------------\n");
    printf("Soma dos Pontos Por SET: \n");
    
    for (int j = 0; j < 4; j++) {
        int soma = 0;
        int *p_coluna = mat_pontos[j]; // Ponteiro para o início da coluna j
        for (int i = 0; i < 4; i++) {
            soma += *(*(mat_pontos + i)+j); // Acessa mat[i][j]
        }
        printf("Soma do SET %d = %d\n", j+1, soma);
    }
    printf("--------------------------------------------------------------------------\n");
    printf("Media de pontos do jogadores: ");
    
    for (int i = 0; i < 4; i++) {
        float soma = 0;
        int *p_linha = mat_pontos[i]; 
        for (int j = 0; j < 4; j++) {
            soma += *(p_linha + j); 
        }
        printf("Media do jogador %d = %.2f\n", i+1, soma/4);
    }
    
    printf("--------------------------------------------------------------------------\n");
    printf("Regularidade dos jogadores: \n");

    int menor_dif = 9999;
    int jogador_regular = -1;

    for (int i = 0; i < 4; i++) {
        int *p_linha = mat_pontos[i]; 
        int min = *p_linha;
        int max = *p_linha;

        for (int j = 0; j < 4; j++) {
            int valor = *(p_linha + j);
            if (valor < min) min = valor;
            if (valor > max) max = valor;
        }

        int diferenca = max - min;
        printf("Jogador %d -> min = %d, max = %d, diferenca = %d\n", i+1, min, max, diferenca);

        if (diferenca < menor_dif) {
            menor_dif = diferenca;
            jogador_regular = i + 1;
        }
    }

    printf("\nJogador mais regular: Jogador %d (diferenca = %d)\n", 
           jogador_regular, menor_dif);

	return 0;
}
