// Exercice 1:
// 1- Transformer ce tableau de char en string:
// char chaine[] = {'S','a','l','u','t',' ','l','e','s',' ','c','o','d','e','u','r','s','!'};
// 2- Afficher la string via un printf
// 3- Modifier la chaîne pour afficher que le premier mot (Salut)

#include <stdio.h>
#include <string.h>

int main() {

    char chaine[] = {'S','a','l','u','t',' ','l','e','s',' ','c','o','d','e','u','r','s','!','\0'};
    int i;

    printf("%s\n", chaine);

    for(i = 0; i < 5; i++) {
        printf("%c", chaine[i]);
    }

    return 0;
}