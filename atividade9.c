//9) Escreva um algoritmo que encontre e imprima todos os n�meros de 100 a 999
//(tr�s d�gitos) que possuem a seguinte propriedade:
//- A soma dos cubos dos seus d�gitos � igual ao pr�prio n�mero.
//Exemplo:
//Esses n�meros s�o chamados de n�meros de Armstrong (ou narcisistas).
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
