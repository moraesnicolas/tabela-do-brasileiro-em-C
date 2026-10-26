#include <stdio.h>

int main(){
	int maior, verificar, numero [10], achou = 0;
	float soma = 0, media;
	

	for (int i = 0 ; i < 10 ; i++) {
		printf("Digite seu %d numero: ",i+1);
		scanf("%d" , &numero[i]);
		soma += numero[i];
		
		if (i == 0 || maior < numero[i]){
			maior = numero[i];
		}
	}

	
	media=soma/10;
	printf("Digite um numero para verificar se ele esta no vetor: ");
    scanf("%d", &verificar);
    
	for ( int i =  0 ; i<10; i++) {
		if (numero[i] == verificar) {
			achou = 1;
			break;
		}
	}
	if ( achou == 1){
		printf("Seu numero esta no vetor! ");
	} else{
		printf("Seu numero nao esta no vetor");
	}
	printf("A soma e: %.1f\n e a media e: %.2f\n maior e: %d\n",soma,media,maior);
	
	

	
	return 0;

}
