//8) Em uma eleição presidencial, existem dois candidatos. Os votos são
//informados através de um número:
//• 1 e 2 representa o voto para os respectivos candidatos A e B
//respectivamente.
//• 0 representa o voto em branco.
//• Qualquer outro número diferente representa um voto nulo.
//Elabore um algoritmo que leia votos de 10 pessoas, calcule e escreva:
//a) Total e o percentual de votos de cada candidato.
//b) Total e o percentual de votos em branco e nulos.
//c) O candidato vencedor (com maior número de votos), em que se deve
//imprimir o nome do candidato vencedor (A ou B) e o percentual e quantidade
//de votos.
#include <stdio.h>

int main() {
    int voto, i, a = 0, b = 0, branco = 0, nulo = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o voto %d (1=A, 2=B, 0=branco, outro=nulo): ", i + 1);
        scanf("%d", &voto);

        if (voto == 1)
            a++;
        else if (voto == 2)
            b++;
        else if (voto == 0)
            branco++;
        else
            nulo++;
    }

    printf("\nResultado\n");
    printf("Candidato A: %d votos (%d%%)\n", a, a * 100 / 10);
    printf("Candidato B: %d votos (%d%%)\n", b, b * 100 / 10);
    printf("Brancos: %d votos (%d%%)\n", branco, branco * 100 / 10);
    printf("Nulos: %d votos (%d%%)\n", nulo, nulo * 100 / 10);

    if (a > b)
        printf("Vencedor: Candidato A com %d votos (%d%%)\n", a, a * 100 / 10);
    else if (b > a)
        printf("Vencedor: Candidato B com %d votos (%d%%)\n", b, b * 100 / 10);
    else
        printf("Empate entre os candidatos A e B.\n");


}
