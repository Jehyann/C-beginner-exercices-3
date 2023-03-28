// Exercice 2:
// 1- Créer une fonction De, qui prend en entré 1 entier qui correspond au nombre de faces d’un dé et
// qui retourne aléatoirement un numéro de face. Exemple de(6) correspond à un lancé de dé de 6,
// donc un retour entre 1 et 6.
// 2- Créer une fonction Des, qui prend en entré 2 entiers
// - Nombre de dés à lancer.
// - Nombre de faces par dé.
// Cette fonction retourne alors la somme des résultats de chaque dé.

#include <stdio.h>
#include <stdlib.h>


void de() {
    int entryFace;
    int randomFace;

    printf("Please enter the number of faces you want on your dice :\n");
    scanf("%d", &entryFace);

    randomFace = rand() % entryFace;

    printf("Random number between 0 and the number you choose: %d\n", randomFace);
}

void des() {
    int entryDice;
    int entryFace2;
    int randomFace2;
    int res;

    printf("Please enter how many dice you want :\n");
    scanf("%d", &entryDice);

    printf("Please enter the number of faces you want on your dice(s) :\n");
    scanf("%d", &entryFace2);

    for (int i = 0; i< entryDice; i++) {
        randomFace2 = rand() % entryFace2;
        res = res + randomFace2;
    }
    printf("Sum of all the faces (random) of the number of dice(s) you chose: %d\n", res);

}


int main () {
    de();
    des();
    return 0;
}