//9) Escreva um algoritmo que encontre e imprima todos os números de 100 a 999
//(três dígitos) que possuem a seguinte propriedade:
//- A soma dos cubos dos seus dígitos é igual ao próprio número.
//Exemplo:
//Esses números são chamados de números de Armstrong (ou narcisistas).
#include <stdio.h>

int main() {
    int num, a, b, c;

    for (num = 100; num <= 999; num++) {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;

        if (a*a*a + b*b*b + c*c*c == num) {
            printf("%d\n", num);
        }
    }

}
