#include <stdio.h>

int main(){
	
	int cofrinho = 1000;
	int *p = &cofrinho;
	
	printf("Valor do cofrinho: %d\n", *p);
	printf("Endereco do cofrinho: %p", p);
	
	return 0;
}
