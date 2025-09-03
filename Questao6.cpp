#include <stdio.h>

int main(){
	int mat_notas [3][3]{
	{2, 5, 6},
	{6, 9, 10},
	{0, 0, 5}	
	};
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", *(*(mat_notas + i) + j));
			
		}
		printf("\n");
	}
	printf("Soma da Diagonal principal:");
	int soma;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == j){
				soma += *(*(mat_notas + i) + j);
				
			}
			
		}
	
	}
	printf("%d", soma);
	return 0;
}
