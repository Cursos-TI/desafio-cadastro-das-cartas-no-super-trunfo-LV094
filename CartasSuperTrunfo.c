#include <stdio.h>

    int main(){
        printf("Desafio Super Trunfo! \n");

        int codigo = 1923;
        char nome[30] = "Brasil";
        double populacao = 212583.750;
        double area = 8515767.049;
        int PIB = 2174000.000;
        int NPT = 5.412;

        printf("Digite o código da cidade: \n");
        scanf("%d", &codigo);

        printf("Digite o nome do país: \n");
        scanf("%s", &nome);

        printf("Digite a População: \n");
        scanf("%e", &populacao);

    return 0;
}
