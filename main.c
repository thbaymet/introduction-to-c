#include <stdio.h>

#define DIM 4

int isArrayOrdered();

int initArray();

int simpleCalculus();


int main (void){

    int taille = 4;
    int tab[DIM] = { 3, 5, 7, 9};

    for(int i = 0; i < taille; i++) {
        printf("tab[%d]:%p -> %d\n", i, &tab[i], tab[i]);
    }

    int* p = tab; // pointer sur la premiere case
    printf("pointeur sur 1st element: p:%p -> %p -> %d\n", &p, p, *p);

    int* m = tab + DIM; // pointer sur DIM ème case (qui n'est pas à nous)
    printf("pointeur sur last element: m:%p -> %p -> %d\n", &m, m, *(m - 1));

    for(int* k = tab; k < m; k++) {
        printf("k: %p\n", k);
        printf("*k: %d\n", *k);
    }

//    isArrayOrdered();


    initArray();

    return 0;
}


int simpleCalculus() {

    int n = 10;
    int max = 0;
    int nombre = 0;

    char c = 'c';
    int i = 0;
    for(; i < n; i++) {
        printf("Veuillez saisir un nombre: ");
        scanf("%d", &nombre);
        if (max < nombre) {
            max = nombre;
        }
    }
}


int initArray() {
    int tab[DIM] = {0};

    for(int i = 0; i < DIM; i++) {
        printf("%d, ", tab[i]);
    }
}

int isArrayOrdered() {
    int i, j;
    int tab[DIM] = { 3, 5, 7, 9};

    int trie = 1;

    for(i = 0; i < DIM - 1; i++) {
        for(j = i + 1; j < DIM; j++) {
            if (tab[i] > tab[j]) {
                trie = 0;
            }
        }
    }

    if (trie == 0) {
        printf("le tableau n'est pas trié");
    } else {
        printf("le tableau est dans l'ordre croissant");
    }


    trie = 1;

    for(i = 0; i < DIM - 1; i++) {
        if (tab[i] > tab[i+1]) {
            trie = 0;
        }
    }

    if (!trie) {
        printf("le tableau n'est pas trié");
    } else {
        printf("le tableau est dans l'ordre croissant");
    }

}



















































//int tab[DIM];
//int i, k;
//
//for (int i = 0; i < DIM; ++i) {
//printf("Veuillez saisir un nombre: ");
//scanf("%d", &tab[i]);
//
////        tab[i] = k;
//
//if (tab[i] == 0) {
//printf("i = %d: value: %d\n", i, tab[i]);
//}
//}







//    printf("hello!!!");
//
//    int k = 5;
//    int u = k;
//
//
//    // la condition pour s’arreter
//    do {
//
//        printf("u=%d ", u);
//
//        if (u % 2 == 0) {
//            // si c’est pair >
//            u = (int)( u / 2);
//
//        }
//        else {
//            u = (int)(3 *u) + 1;
//            // si c’est impaire
//
//        }
//        printf("u=%d ", u);
//
//
//    }while (u != 1);
