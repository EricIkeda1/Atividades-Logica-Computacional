//5) Na matem�tica, um n�mero perfeito � um n�mero inteiro para o qual a soma
//de todos os seus divisores positivos pr�prios (excluindo ele mesmo) � igual ao
//pr�prio n�mero. Por exemplo o n�mero 6 � perfeito, pois 1+2+3 � igual a 6. Sua
//tarefa � escrever um programa que imprima se um determinado n�mero �
//perfeito ou n�o.
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
