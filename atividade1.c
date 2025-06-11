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
    int temperatura;

    printf("Digite a temperatura atual do forno: ");
    scanf("%d", &temperatura);

    if (temperatura < 2000) {
        printf("Aquecimento deve ser LIGADO. Temperatura abaixo do ideal.\n");
    } else if (temperatura > 2200) {
        printf("Aquecimento deve ser DESLIGADO. Temperatura acima do ideal.\n");
    } else {
        printf("Temperatura dentro do limite desejado. Nenhuma acao necessaria.\n");
    }

}
