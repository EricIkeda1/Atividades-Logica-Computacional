//1) Escreva um programa que simule o controle de temperatura de um forno
//industrial. O programa deve ler a temperatura atual do forno (em graus Celsius)
//e ajustar o aquecimento conforme necessário para manter a temperatura
//dentro de um intervalo especificado (por exemplo, entre 200°C e 220°C).
//- Se a temperatura estiver abaixo de 200°C, o programa deve mostrar uma
//mensagem que o aquecimento deve ser ligado.
//- Se a temperatura estiver acima de 220°C, o programa deve mostrar uma
//mensagem que o aquecimento deve ser desligado.
//- Se a temperatura estiver dentro do intervalo especificado, o programa deve
//mostrar uma mensagem que a temperatura está dentro do limite desejado.
#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor da altura: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");

        for (int j = 0; j < 2 * N - 1; j++) {
        }
        printf("\n");
    }

}
