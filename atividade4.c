//4) Com base na tabela abaixo, escreva um programa que leia o código de um
//item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a
//pagar.
//O arquivo de entrada contém dois valores inteiros correspondentes ao código e à
//quantidade de um item conforme tabela acima.
//O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser
//pago, com 2 casas após o ponto decimal.
#include <stdio.h>

int main() {
    int codigo, quantidade, total, reais, centavos;

    printf("Digite o codigo do produto e a quantidade:\n");
    scanf("%d %d", &codigo, &quantidade);

    if (codigo == 1) {
        total = 400 * quantidade;
    } else if (codigo == 2) {
        total = 450 * quantidade;
    } else if (codigo == 3) {
        total = 500 * quantidade;
    } else if (codigo == 4) {
        total = 200 * quantidade;
    } else if (codigo == 5) {
        total = 150 * quantidade;
    } else {
        printf("Codigo invalido.\n");
    }

    reais = total / 100;
    centavos = total % 100;

    printf("Total: R$ %d.", reais);

    if (centavos == 0) {
        printf("00\n");
    } else if (centavos < 10) {
        printf("0");
        printf("%d\n", centavos);
    } else {
        printf("%d\n", centavos);
    }

}
