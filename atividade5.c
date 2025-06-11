//5) Na matemática, um número perfeito é um número inteiro para o qual a soma
//de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao
//próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua
//tarefa é escrever um programa que imprima se um determinado número é
//perfeito ou não.
#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }

    if (soma == numero) {
        printf("%d e um numero perfeito.\n", numero);
    } else {
        printf("%d nao e um numero perfeito.\n", numero);
    }

}
