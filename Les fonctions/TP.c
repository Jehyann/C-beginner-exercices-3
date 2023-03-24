// TP:
// Nous allons créer un petit jeu de type Morpion. L’objectif est d’aligner 3 symboles identiques dans
// une grille de 3X3. Le jeu se joue à deux. Chaque joueur possède un symbole parmis ‘X’ et ‘O’. A tour
// de rôle, ils dessinent dans une cas libre de la grille leur symbole respectif. Celui qui aligne 3 de ses
// symboles (horizontal, vertical ou diagonal), remporte la victoire. En cas de grille pleine sans
// alignement de 3 symboles identiques, c’est un match nulle!
// printf("TP: Les fonctions\n");
// int fin_partie=0;

// char joueur = 'X';
// int coord_x, coord_y;
// char grille[3][3]= {
// {'.','.','.'},
// {'.','.','.'},
// {'.','.','.'}
// };
// do{
// } while(fin_partie != 1);
// return 0;
// ------------------------------------------------------------------------
// 1- Créer une fonction qui affiche le contenue de la grille de manière graphique comme dans
// l’exemple.
// 2- Créer une fonction pour gérer la saisie utilisateur:
// 2.a- Affichage des instructions: “Joueur X ou voullez-vous jouer (x y)?”
// 2.b- Lecture de la saisie (coordonnées x et y de la case à joueur)
// 2.c- Inscription du signe du joueur dans la grille
// 3- Créer une fonction qui vérifie la validité de la saisie utilisateur ( case libre et coordonnées valide)
// 4- Utiliser cette dernière fonction pour redemander à l’utilisateur une saisie temps qu’elle n’est pas
// valide.
// 5- Utiliser ces fonctions dans la boucle de jeu de la fonction main