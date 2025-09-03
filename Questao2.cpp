#include <stdio.h>

int main(){
	int idade;
	printf("Insira a idade do aluno:");
	scanf("%d", &idade);
	
	int *p = &idade;
	
	printf("Idade: %d\n\n", *p);
	printf("Endereco da idade: %p", p);
	
	return 0;
}
