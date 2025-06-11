//7) Construa algoritmo que seja capaz de concluir qual dentre os seguintes
//animais foi escolhido, atrav�s de perguntas e respostas (o algoritmo deve
//perguntar a classifica��o do animal e receber como resposta apenas 1 para sim
//ou 0 para n�o).
//Animais poss�veis: le�o, cavalo, homem, macaco, morcego, baleia, avestruz,
//pinguim, pato, �guia, tartaruga, crocodilo e cobra.
//Exemplo:
//� � mam�fero? 1 (Sim).
//� � quadr�pede? 1 (Sim).
//� � carn�voro? 0 (N�o).
//� � herb�voro? 1 (Sim).
//� Ent�o o animal escolhido foi o cavalo
#include <stdio.h>

int main() {
    int resposta;

    printf("Responda com 1 (sim) ou 0 (nao).\n");

    printf("E mamifero? ");
    scanf("%d", &resposta);

    if (resposta == 1) {
        printf("E quadrupede? ");
        scanf("%d", &resposta);
        if (resposta == 1) {
            printf("E carnivoro? ");
            scanf("%d", &resposta);
            if (resposta == 1)
                printf("Animal escolhido: Leao\n");
            else {
                printf("E herbivoro? ");
                scanf("%d", &resposta);
                if (resposta == 1)
                    printf("Animal escolhido: Cavalo\n");
            }
        } else {
            printf("E bipede? ");
            scanf("%d", &resposta);
            if (resposta == 1) {
                printf("E onivoro? ");
                scanf("%d", &resposta);
                if (resposta == 1)
                    printf("Animal escolhido: Homem\n");
                else {
                    printf("E frutifero? ");
                    scanf("%d", &resposta);
                    if (resposta == 1)
                        printf("Animal escolhido: Macaco\n");
                }
            } else {
                printf("E voador? ");
                scanf("%d", &resposta);
                if (resposta == 1)
                    printf("Animal escolhido: Morcego\n");
                else {
                    printf("E aquatico? ");
                    scanf("%d", &resposta);
                    if (resposta == 1)
                        printf("Animal escolhido: Baleia\n");
                }
            }
        }
    } else {
        printf("E ave? ");
        scanf("%d", &resposta);
        if (resposta == 1) {
            printf("E nao voadora? ");
            scanf("%d", &resposta);
            if (resposta == 1) {
                printf("E tropical? ");
                scanf("%d", &resposta);
                if (resposta == 1)
                    printf("Animal escolhido: Avestruz\n");
                else {
                    printf("E polar? ");
                    scanf("%d", &resposta);
                    if (resposta == 1)
                        printf("Animal escolhido: Pinguim\n");
                }
            } else {
                printf("E nadadora? ");
                scanf("%d", &resposta);
                if (resposta == 1)
                    printf("Animal escolhido: Pato\n");
                else {
                    printf("E de rapina? ");
                    scanf("%d", &resposta);
                    if (resposta == 1)
                        printf("Animal escolhido: Aguia\n");
                }
            }
        } else {
            printf("E reptil? ");
            scanf("%d", &resposta);
            if (resposta == 1) {
                printf("Tem casco? ");
                scanf("%d", &resposta);
                if (resposta == 1)
                    printf("Animal escolhido: Tartaruga\n");
                else {
                    printf("E carnivoro? ");
                    scanf("%d", &resposta);
                    if (resposta == 1)
                        printf("Animal escolhido: Crocodilo\n");
                    else {
                        printf("Nao tem patas? ");
                        scanf("%d", &resposta);
                        if (resposta == 1)
                            printf("Animal escolhido: Cobra\n");
                    }
                }
            } else {
                printf("Animal nao esta na lista.\n");
            }
        }
    }

}
