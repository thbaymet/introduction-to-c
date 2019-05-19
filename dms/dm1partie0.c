#include <stdio.h>

#define MAX_LENGTH 9

typedef struct {
    int valeur;
    int composition[MAX_LENGTH];
    int length;
} Nombre;

void afficher_chiffres(int nombre) {
    int chiffre = 0;

    while(nombre > 0) {
        chiffre = nombre % 10;
        printf("%d | ", chiffre);
        nombre = (int) (nombre / 10);
    }
}

int trouver_length(int nombre) {
    int length = 0;

    while(nombre != 0) {
//        printf("trouver_length: %d : %d \n", length, nombre);
        nombre = nombre / 10;
        length++;
    }

    return length;
}

int trouver_length_rec(int nombre) {
    if (nombre == 0) {
        return 1;
    } else {
//        printf("trouver_length_rec: %d\n", nombre);
        return 1 + trouver_length_rec(nombre / 10);
    }
}

int main() {
    int n = 34561213;

    int length = trouver_length(n);
    printf("\nlength: %d\n", length);

    length = trouver_length_rec(n);
    printf("\nlength_rec: %d\n", length);

    afficher_chiffres(n);
    return 0;
}
