#include <stdio.h>

//
// Created by h on 11/03/19.
//

int main() {
    printf("Bienvenue dans le programme d'affichage de suite de Syracuse\n");
    printf("Veuillez saisir un nombre entier k appartenant à N*: ");

    int k = 5;
    scanf("%d", &k);

    int n = 0;
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

    return 0;
}
