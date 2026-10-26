#include <stdio.h>

int main() {
    int numero, i = 0, maior, menor, negativo= 0, par = 0, impar= 0;
    float soma = 0;
    float media;

    printf("Digite 0 para sair.\n ");

    do {
        printf("Digite numeros ate cansar: ");
        scanf("%d", &numero);

        soma+=numero;

        if (numero != 0){
            if ( i == 0) {
                maior = numero;
                menor = numero;
        } else {
                if (numero > maior) {
                    maior = numero;
            }
                if (numero < menor) {
                    menor = numero;
            }
        }
            i++;
            media=soma/i;

            if ( numero < 0){
                negativo++;
            }

            if ( numero % 2 == 0){
                par++;
            } else {
                impar++;
            }

        } 

    }    while (numero != 0);

    if (i == 0 ){
        printf("\nNada digitado\n");
    }else{
        printf("\nSoma:%.0f\n Quantidade:%d\n media:%.2f\n Maior:%d\n Menor:%d\n Negativo: %d\n Par: %d\n Impar:%d\n",soma,i, media,maior,menor,negativo,par,impar);

        }

    return 0;
} 
