#include <stdio.h>

#define DIM 20

typedef char Chaine[DIM];

typedef struct {
    Chaine nom;
    int id;
    int nbPersonnes;
} Departement;

typedef Departement* PtrDepartement;

int main() {

    Chaine ch1, ch2;

    Departement dep1, dep2;

    PtrDepartement pdep1, pdep2;



    return 0;
}
