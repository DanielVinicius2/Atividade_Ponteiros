#include <stdio.h>

int main(){
	float lista_precos [] = {50, 1499, 499, 274, 630};
	int i = 0;
	float *plist;
	
	
	printf("Precos Originais: ");
	for(i = 0;i < 5; i++){
		plist = &lista_precos[i];
		printf("%.2f|| Endereco: %p\n", *plist, plist);
		}
	printf("-------------------------------------------------\n");
	printf("Precos com 10 porcento de Desconto: \n");
	for(i = 0;i < 5; i++){
		plist = &lista_precos[i];
		float desconto = *plist - *plist/10;
		printf("%.2f|| Endereco: %p\n", desconto, plist);
		}
	
	
	return 0;
}
