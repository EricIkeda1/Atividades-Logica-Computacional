//6) Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram
//pares, quantos valores digitados foram ímpares, quantos valores digitados
//foram positivos e quantos valores digitados foram negativos.
//Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha,
//não esquecendo o final de linha após cada uma.
//Exemplo de Entrada Exemplo de Saída
//-5
//0
//-3
//-4
//12
//3 valor(es) par(es)
//2 valor(es) impar(es)
//1 valor(es) positivo(s)
//3 valor(es) negativo(s)
#include <stdio.h>

int main() {
    int valor;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    printf("Digite 5 valores inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
}
