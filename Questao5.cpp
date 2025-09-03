#include <stdio.h>

int main(){
	float lista_notas[] = {7, 9, 10, 10, 4, 6.5};
	int n = sizeof(lista_notas) / sizeof(lista_notas[0]);
	float *plist_notas;
	float *p_inic = lista_notas;
	float *p_final = lista_notas + n - 1;
	int temp;
	
	printf("Ordem dos dados iniciais: \n");
	for(int i = 0; i < n; i++){
		plist_notas = &lista_notas[i];
		printf("%.2f|| Endereco: %p \n", *plist_notas, plist_notas);
		}
	
	while(p_inic < p_final){
		temp = *p_inic;
		*p_inic = *p_final;
		*p_final = temp;
		
		p_inic++;
		p_final--;
	}
	
	printf("Nova Ordem de dados: \n");
		for(int i = 0; i < n; i++){
			plist_notas = &lista_notas[i];
			printf("%.2f|| Endereco: %p \n", *plist_notas, plist_notas);		
		}
	return 0;
}
