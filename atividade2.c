//2) Escreva um programa em C que monitore o nível de líquido em um tanque. O
//programa deve ler o nível atual do líquido (em litros) e indicar se o nível está
//abaixo, acima ou dentro do limite desejado (por exemplo, entre 50 e 100 litros).
//- Se o nível estiver abaixo de 50 litros, o programa deve indicar que o tanque
//precisa ser preenchido.
//- Se o nível estiver acima de 100 litros, o programa deve indicar que o tanque está
//cheio demais e precisa ser esvaziado.
//- Se o nível estiver dentro do intervalo especificado, o programa deve indicar que o
//nível está adequado.
#include <stdio.h>

int main() {
    int nivel;

    printf("Digite o nivel atual do liquido no tanque (em litros): ");
    scanf("%d", &nivel);

    if (nivel < 50) {
        printf("O tanque precisa ser preenchido.\n");
    } else if (nivel > 100) {
        printf("O tanque esta cheio demais e precisa ser esvaziado.\n");
    } else {
        printf("O nivel esta adequado.\n");
    }

}
