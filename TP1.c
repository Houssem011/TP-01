#include <stdio.h>

int main() {
    // Initialiser la matrice
    char matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {7, 'a', 'c', 8, 'd'},
        {'c', 9, 4, 'z', 8},
        {5, 6, 'p', 'n', 3},
        {2, 9, 't', 'm', 'k'}
    };

    int i, j;

    // Question 1.1 (1) : Afficher la matrice complète
    printf("Matrice complète :\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    // Question 1.1 (2) : Afficher uniquement les lignes avec des indices pairs
    printf("\nLignes avec des indices pairs :\n");
    for (i = 0; i < 5; i += 2) {  // Uniquement les lignes avec indices pairs
        for (j = 0; j < 5; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    // Question 1.1 (3) : Afficher uniquement les éléments avec des indices pairs dans chaque ligne
    printf("\nÉléments avec des indices pairs dans chaque ligne :\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j += 2) {  // Uniquement les éléments avec indices pairs
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    // Question 1.2 : Afficher les diagonales
    // Première diagonale (de haut à gauche vers bas à droite)
    printf("\nDiagonale principale (haut-gauche vers bas-droite) :\n");
    for (i = 0; i < 5; i++) {
        printf("%c ", matrix[i][i]);
    }
    printf("\n");

    // Deuxième diagonale (de haut à droite vers bas à gauche)
    printf("\nDiagonale secondaire (haut-droite vers bas-gauche) :\n");
    for (i = 0; i < 5; i++) {
        printf("%c ", matrix[i][4 - i]);
    }
    printf("\n");

    return 0;
}
