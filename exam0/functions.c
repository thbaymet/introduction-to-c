#include <stdio.h>

typedef struct {
    float r;
    float i;
} Complexe;

int produit(int a, int b) {
    return a * b;
}

int somme(int a, int b) {
    return a + b;
}



int somme_p(int* pa, int* pb) {
    *pa = *pa + *pb;
}


void saisir(Complexe* pz) {
    scanf("%f", &((*pz).r));
    scanf("%f", &((*pz).i));
}


void g(int * p) {
    *p = 12;
}


int main() {
    int a = 4;
    int b = 5;

//    somme_p(&a, &b);      int *pa = &a; int * pb = &b;
    int * pa;
    int * pb;

    pa = &a;
    pb = &b;

    a = a + b;
    *pa = *pa + *pb;


    printf("%d", a);

    int* p;
    g(p);
    printf("%d\n", *p);

    Complexe z;

//    saisir(&z);

    return 0;
}



