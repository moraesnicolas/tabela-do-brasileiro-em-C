#include <stdio.h>

int main() {
    char nomes[5][20] = {"Athletico", "Coritiba", "Sao Paulo", "Corinthians", "Vasco"};
    int pontos[5] = {46, 38, 33, 32, 25};
    int i;

    /* Mostra a tabela com os times */
    printf("===== TABELA DOS TIMES DO GRUPO =====\n");
    for (i = 0; i < 5; i++) {
        printf("%d - %s: %d pontos\n", i + 1, nomes[i], pontos[i]);
    }

    /* Processamento: soma, media, maior e menor */
    int soma = 0, maior = pontos[0], menor = pontos[0];
    int indiceMaior = 0, indiceMenor = 0;

    for (i = 0; i < 5; i++) {
        soma = soma + pontos[i];

        if (pontos[i] > maior) {
            maior = pontos[i];
            indiceMaior = i;
        }
        if (pontos[i] < menor) {
            menor = pontos[i];
            indiceMenor = i;
        }
    }

    float media = (float) soma / 5;

    printf("\n===== ESTATISTICAS =====\n");
    printf("Soma de pontos: %d\n", soma);
    printf("Media de pontos: %.2f\n", media);
    printf("Maior pontuacao: %s (%d pts)\n", nomes[indiceMaior], maior);
    printf("Menor pontuacao: %s (%d pts)\n", nomes[indiceMenor], menor);

    /* Busca em vetor: repete a pergunta ate encontrar um time,
       ou ate o usuario digitar -1 para desistir da busca */
    int pontosBuscados, encontrado, posicao;

    do {
        encontrado = 0;
        posicao = -1;

        printf("\nDigite uma pontuacao para buscar (-1 para sair): ");
        scanf("%d", &pontosBuscados);

        if (pontosBuscados == -1) {
            printf("Busca cancelada.\n");
            break;
        }

        for (i = 0; i < 5; i++) {
            if (pontos[i] == pontosBuscados) {
                encontrado = 1;
                posicao = i;
            }
        }

        if (encontrado == 1) {
            printf("Time encontrado: %s\n", nomes[posicao]);
        } else {
            printf("Nenhum time tem essa pontuacao. Tente novamente.\n");
        }

    } while (encontrado == 0);

    /* Decisao: classifica o time buscado, se foi encontrado */
    if (encontrado == 1 && pontos[posicao] >= 40) {
        printf("Situacao: briga pelo titulo.\n");
    } else if (encontrado == 1 && pontos[posicao] >= 35) {
        printf("Situacao: talvez classifique para Libertadores.\n");
    }  else if (encontrado == 1 && pontos[posicao] >= 30) {
        printf("Situacao: meio de tabela e talvez uma sula.\n");
    } else if (encontrado == 1) {
        printf("Situacao: ta na zona e pode cair.\n");
    }

    return 0;
}
