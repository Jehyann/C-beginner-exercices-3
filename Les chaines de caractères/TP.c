// TP:
// Nous allons créer un petit jeu de type pendu. L’objectif est de deviner un mot caché (ex: -----). Pour
// cela le joueur peut proposer des lettres. Si une lettre est bien présente dans le mot alors elle est
// placée sur le mot caché (ex: --LL-). Si le joueur propose une lettre qui ne se trouve pas dans le mot
// alors il perd une vie.
// Nous allons simplifier un peu les règles pour ce TP.
// - Le mot a deviné sera écrit en dure dans le code (ex: LOL).
// - Pas de mot composé (pas d’espaces).
// - Le joueur ne peut que proposer des lettres une par une (pas de proposition du mot entier).
// - Le joueur commence avec 10 points de vie.
// 1- Créer les variables et constantes nécessaires au programme (mot_secret, saisie_utilisateur, ...).
// 2- Créer la boucle de jeu
// 2.1- Demander au joueur de faire une proposition de lettre (attention, utiliser la commande
// "fflush(stdin);" avant le scanf pour ne pas risquer de lire des restes entré au clavier).
// 2.2- Si la proposition est bonne remplacer les ‘-’ correspondants par la lettre. Sinon faire perdre une
// vie au joueur.
// 3- Gérer la fin de partie. Victoire: Cas où le joueur a trouvé toutes les lettres ou Défaite: cas où le
// joueur n’a plus de vies.

#include <stdio.h>
#include <string.h>

int main() {
    
    // word to guess
    char word[7] = {'p', 'o', 't', 'a', 't', 'o'};


    // set to 0 bc nothing is guessed yet
    int lenWord = strlen(word) ;
    int hidden[lenWord];
    for (int i=0; i < lenWord; ++i) {
        hidden[i] = 0;
    }


    // loop till game over (no hp)
    int hp = 10;
    while (hp >= 0) {

        // printing the letters, if not found "-"
        printf("Yhe word is : ");
        for(int j=0; j < lenWord; ++j) {
            if (hidden[j]) {
            printf("%c", word[j]);
        }
        else {
            printf(" - ");
        }
        }
        printf("\n");

        // take player's guess
        char playerGuess;
        printf("Choose your letter to find the word : ");
        fflush(stdout);
        scanf(" %c", &playerGuess);

        // if guess in word ->
        if(strchr(word, playerGuess) != NULL) {
            for(int k=0; k < lenWord; ++k) {
                if (word[k] == playerGuess) {
	            hidden[k] = 1;
                }
            }
        }
        else {
            printf("\nThis letter is not in the word ! HP left : %d.\n", hp);
            hp = hp - 1;
        }

        // check if won
        for(int m = 0; m < lenWord; ++m) {
            if (!hidden[m]) {
            break;
            }
        }
    }

    if (hp <= 0) {
        printf("You loose !");
    }
    return 0;
}