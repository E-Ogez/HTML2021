#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main() {
    int valeurHaut = 1;
    int valeurBas;
    int valeur;

    printf("        1       2       3       4       5       6       7       8       9       10\n");
    while (valeurHaut <= 10) {
        printf("%d", valeurHaut);
        valeurBas = 1;

            while (valeurBas <= 10){
                valeur = valeurHaut*valeurBas;
                printf("\t%d",valeur);
                valeurBas++;
            }

        printf("\n");
        valeurHaut++;
    }
}
