// Exercice 1:
// 1- Créer une fonction min, qui prend en entré 2 entiers et retourne la valeur du plus petit.
// 2- Créer une fonction max, qui prend en entré 2 entiers et retourne la valeur du plus grand.
// 3- Utiliser ces deux fonctions et afficher le résultat dans la fonction main.

#include <stdio.h>

void min() {

    int n1 = 0;
    int n2 = 0;

    printf("Please enter your first whole number :\n");
    scanf("%d", &n1);
    printf("Please enter your second whole number :\n");
    scanf("%d", &n2);

    if (n1 < n2)
        printf("%d is smaller than %d.", n1, n2);

    else if (n1 == n2)
        printf("You entered the same number!");

    else 
        printf("%d is smaller than %d.", n2, n1);
}

void max() {

    int n1 = 0;
    int n2 = 0;

    printf("Please enter your first whole number :\n");
    scanf("%d", &n1);
    printf("Please enter your second whole number :\n");
    scanf("%d", &n2);

    if (n1 > n2)
        printf("%d is higher than %d.", n1, n2);

    else if (n1 == n2)
        printf("You entered the same number!");

    else 
        printf("%d is higher than %d.", n2, n1);

}

int main() {
    printf("\n\n");
    min();
    printf("\n\n");
    printf("-----------------------------------------");
    printf("\n\n");
    max();
    printf("\n\n");
    return 0;
}