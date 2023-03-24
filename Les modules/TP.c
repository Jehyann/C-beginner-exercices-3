// TP :
// Nous allons créer un écran de sélection de jeu. L’objectif est de lister tous les jeux que nous avons
// créés lors des TPs précédents et de demander à l’utilisateur auquel il souhaite jouer. Biensûre, ici
// nous n’allons pas mettre le code source de tous nos TPs dans le fichier main.c, mais découper en
// modules.
// Par exemple :
// Ma bibliothèque de jeux :
// 1-Morpion
// 2-Mastermind
// 3-Pendu
// 0-Sortir
// A quel jeu voulez-vous jouer ?
// 1
// demarrage du morpion
// | . | . | . |
// | . | . | . |
// | . | . | . |
// ------------------------------------------------------------
// Votre code main de base est le suivant :
// int choix = 0;
// do { afficherBibliotheque();
// printf("A quel jeu voulez-vous jouer?");
// fflush(stdin);
// scanf("%d", &choix);
// selectionJeu(choix);
// }
// while(choix != SORTIR);
// return 0;

// ------------------------------------------------------------------
// 1- Créer un module “jeux” qui comporte
// 1.a- Une fonction “afficherBibliotheque” qui affiche la liste des jeux disponibles et leur index
// respectif pour être lancé (ex: “1-Morpion”).
// 1.b- Une fonction ”selectionJeu” qui prend en entré le numéro du jeu à lancer et qui affiche pour le
// moment le nom du jeu sélectionné par le joueur. (ex: “Demarrage du jeu Morpion”). 1.c- les defines
// du nombre de jeu, et des index des jeux.
// 2- Créer un module “morpion”
// 2.a- Copier les fonctions et prototypes du code du TP sur le Morpion
// 2.b- Créer une fonction “morpion” et y copier le code de la fonction main du TP sur le Morpion. Ce
// sera notre fonction de boucle de jeu.

// 3- Lancer le jeu morpion si l’utilisateur sélectionne ce jeu.
// 4- Ajouter l’option 0 pour quitter le programme et le define qui vas avec.