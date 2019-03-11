#include <stdio.h>

//
// Created by h on 11/03/19.
//
int syracuseV1(int k);
int syracuseV2(int k);

int main() {
    printf("Bienvenue dans le programme d'affichage de suite de Syracuse\n");
    printf("Veuillez saisir un nombre entier k appartenant à N*: ");

    int k = 5;
    scanf("%d", &k);

    syracuseV1(k);
    printf("\n");
    syracuseV2(k);

    return 0;
}


int syracuseV1(int k) {

    int u = k;

    while (u != 1) {
        printf("%d ", u);
        if (u % 2 == 0) {
            u = (int)(u / 2);
        } else {
            u = (int)(3 * u) + 1;
        }
    }
    printf("%d ", u);
}

int syracuseV2(int k) {

    int u = k;
    int n = 0;

    while (u != 1) {
        printf("u(%d)=%d ", n, u);
        if (u % 2 == 0) {
            u = (int)(u / 2);
        } else {
            u = (int)(3 * u) + 1;
        }
        n++;
    }
    printf("u(%d)=%d ", n, u);
    printf("\nL'indice du premier terme de la suite égal à 1: %d", n);
}