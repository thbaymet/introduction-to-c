#include <stdio.h>

#define MAX_LENGTH 9

typedef struct {
    int valeur;
    int composition[MAX_LENGTH];
    int length;
} Nombre;


void decompose(Nombre* p) {
    int valeur = p->valeur;
    int u = 0; // cette variable représentera les chiffres du nombre
    int i = p->length - 1; // index partant du la dernier position vers la premier et l'index du chiffre u

    while(valeur != 0) {
        u = valeur % 10;
        p->composition[i] = u;
        valeur = valeur / 10;
        i--;
    }
}

int palindrome(Nombre* p) {
    // index partant de la premier chiffre vers le chiffre au milieu
    int i = 0;
    // index partant de la dernier chiffre vers le chiffre au milieu
    int j = p->length - 1;

    // on suppose que le nombre est palindrome
    int estPalindrome = 1;

    // tantque on compare pas les mêmes chiffres et que cela paraît toujours un nombre palindrome
    while(i < j && estPalindrome) {
        // si deux chiffres symétriques au milieu du nombre ne sont pas égaux
        if (p->composition[i] != p->composition[j]) {
            // alors ce n'est pas un nombre palindrome ! donc ce sera la fin de la boucle/(ou de la vérification)
            estPalindrome = 0;
        }
        // on s'approche de gauche vers le milieu du nombre
        i++;
        // on s'approche de droite vers le milieu du nombre
        j--;
    }

    return estPalindrome;
}

void afficher(Nombre* p) {
    printf("\nComposition du nombre \n");
    for (int i = 0; i < p->length; i++) {
        printf("%d ", p->composition[i]);
    }
}

int main() {

    Nombre n;
    n.valeur = -3443;
    n.length = 4;

    Nombre* p = &n;

    afficher(p);

    decompose(p);

    afficher(p);

    int estPalindrome = palindrome(p);
    printf("estPalindrome: %d", estPalindrome);

    return 0;
}
