#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
    system("cls");

    char p1[4];
    char p2[4];
    int chute;
    int i; //numero de tentativas
    int x;
    int y;
    int casa = 0;
    int visitante = 0;

    printf("ACERTE O PENALTI\n");

    printf("Escolha o time da casa (COLOQUE APENAS 3 LETRAS):\n");
    scanf("%s", p1); // Removido o & antes de p1 e p2
    printf("Escolha o time visitante (COLOQUE APENAS 3 LETRAS):\n");
    scanf("%s", p2);


    printf("%s x %s\n", p1, p2);

    srand(time(0));

    int min = 0;
    int max = 9;

    // Correção do loop for
    for (i = 1; i < 6; i++) {
        for (x = 1; x < 6; x++) {

            system("cls");

            // Numeros do time da casa
            int numeroAleatorio_1 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_2 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_3 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_4 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_5 = (rand() % (max - min + 1)) + min;

            printf("%s %d\n%s %d\n", p1, casa, p2, visitante);

            //time da casa
            printf(" ___________________________________________________________________________________________\n");
            printf("| 1                     9                   6                     9                       3 |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("| 2                   8                    5                      7                        4|\n");
            printf("tentativa %d\n vez do %s \n", i, p1);
            scanf("%d", &chute);

            if (chute <= 9) {
                if (chute == numeroAleatorio_1 || chute == numeroAleatorio_2 || chute == numeroAleatorio_3 || chute == numeroAleatorio_4 || chute == numeroAleatorio_5) {
                    printf("O goleiro pegou\n\n");
                } else {
                    printf("\t GOOl do %s \n\n", p1);

                    casa++;
                }
                system("pause");
                system("cls");
            } else {
                printf("seu numero foi maior que 9, tente novamente\n");
                x--;
                system("pause");
                continue;
            }
            break;
        }
        for (y = 1; x < 6; y++) {

        system("cls");
            // Numeros do time visitante
            int numeroAleatorio_6 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_7 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_8 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_9 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_10 = (rand() % (max - min + 1)) + min;

            printf("%s %d\n%s %d\n", p1, casa, p2, visitante);

            //time visitante
            printf(" ___________________________________________________________________________________________\n");
            printf("| 1                     9                   6                     9                       3 |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("| 2                   8                    5                      7                        4|\n");

            printf("tentativa %d\n vez do %s \n", i, p2);
            scanf("%d", &chute);

            if (chute <= 9) {
                if (chute == numeroAleatorio_6 || chute == numeroAleatorio_7 || chute == numeroAleatorio_8 || chute == numeroAleatorio_9 || chute == numeroAleatorio_10) {
                    printf("O goleiro pegou\n\n");

                } else {
                    printf("\t GOOl do %s \n\n", p2);
                    visitante++;
                }
                system("pause");
                system("cls");
            } else {
                printf("seu numero foi maior que 9, tente novamente\n");
                y--;
                system("pause");
                continue;
            }
            break;
        }
    }

        //COBRANÇAS ALTERNADAS
        for (i = 1; (casa == visitante); i++) {
            system("cls");
            int min = 0;
            int max = 9;

            // Numeros do time da casa
            int numeroAleatorio_1 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_2 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_3 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_4 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_5 = (rand() % (max - min + 1)) + min;
            // Numeros do time visitante
            int numeroAleatorio_6 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_7 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_8 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_9 = (rand() % (max - min + 1)) + min;
            int numeroAleatorio_10 = (rand() % (max - min + 1)) + min;

            printf("%s %d\n%s %d\n", p1, casa, p2, visitante);

            //time da casa
            printf(" ___________________________________________________________________________________________\n");
            printf("| 1                     9                   6                     9                       3 |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("| 2                   8                    5                      7                        4|\n");
            printf("tentativa %d\n vez do %s \n", i, p1);
            scanf("%d", &chute);
            if (chute == numeroAleatorio_1 || chute == numeroAleatorio_2 || chute == numeroAleatorio_3 || chute == numeroAleatorio_4 || chute == numeroAleatorio_5) {
                printf("O goleiro pegou\n\n");
            } else {
                printf("\t GOOl do %s \n\n", p1);
                casa++;
                break;
            }
            system("pause");
            system("cls");

            printf("%s %d\n%s %d\n", p1, casa, p2, visitante);

            //time visitante
            printf(" ___________________________________________________________________________________________\n");
            printf("| 1                     9                   6                     9                       3 |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("|                                                                                           |\n");
            printf("| 2                   8                    5                      7                        4|\n");
            printf("tentativa %d\n vez do %s \n", i, p2);
            scanf("%d", &chute);
            if (chute == numeroAleatorio_6 || chute == numeroAleatorio_7 || chute == numeroAleatorio_8 || chute == numeroAleatorio_9 || chute == numeroAleatorio_10) {
                printf("O goleiro pegou\n\n");
            } else {
                printf("\t GOOl do %s \n\n", p2);
                visitante++;
            }
            system("pause");
            system("cls");

            if (casa != visitante && (casa != 0 && visitante != 0))
                break;
        }

        printf("o total terminou em %d x %d\n", casa, visitante);

        if (casa > visitante) {
            printf("o %s ganhou\n\n", p1);

        } else {
            printf("O %s foi o campeao\n\n", p2);
        }

        system("pause");
    
        return 0;
    }
