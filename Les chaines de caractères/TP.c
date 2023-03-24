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