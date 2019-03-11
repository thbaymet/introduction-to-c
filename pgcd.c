#include <stdio.h>

//
// Created by h on 11/03/19.
//
int pgcd(int x, int y);

int main() {
    int x = 60;
    int y = 40;

    int p = pgcd(x, y);

    printf("%d", p);

    return 0;
}

int pgcd(int x, int y) {
    if (x == y) {
        return x;
    } else if (x > y) {
        return pgcd(x - y, y);
    } else {
        return pgcd(x, y - x);
    }
}
