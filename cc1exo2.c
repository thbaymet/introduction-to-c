#include <stdio.h>

//
// Created by h on 11/03/19.
//
int cc1exo2();
int cc1exo2V2();

int main() {

    cc1exo2();
    printf("\n");
    cc1exo2V2();

    return 0;
}

int cc1exo2() {
#define LIMIT 10
    int a, b, i, x;
    a = 5;
    b = 12;

    for (i = a; i < b; i++) {
        if (i == LIMIT) {
            break;
        }
        x = (i % 2 == 0) ? a : b;

        if (x == a) {
            continue;
        }

        printf("%d_", i);
    }
    return 0;
}

int cc1exo2V2() {
#define LIMIT 10
    int a, b, i, x;
    a = 5;
    b = 12;

    // x = (i % 2 == 0) ? a : b;
    // if (x == a) {

    i = a;
    while (i < b && i != LIMIT) {
        if (i % 2 != 0) {
            printf("%d_", i);
        }
        i++;
    }
    return 0;
}