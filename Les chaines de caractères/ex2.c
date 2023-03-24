// Exercice 2 :
// 1- Créer un programme qui demande à l’utilisateur les informations suivantes et les affiches:
// - Date de naissance: string au format jj/mm/aaaa
// - Nom: string - Prenom: string
// - Couleur des yeux: string
// Exemple : Donnez les informations suivantes:
// Date de naissance: 15/08/1988
// Nom: Lee
// Prenom: Bruce
// Couleur des yeux: marron
// Vous vous appelez Bruce Lee, vous etes nee le 15/08/1988 et vos yeux sont marron.

#include <stdio.h>
#include <string.h>

int main() {

    char date_birthday[11], name[100], surname[100], eyes_color[100];

    printf("\nPlease enter your date of birth (dd/mm/yyyy) :\n");
    gets(date_birthday);

    printf("Please enter your name :\n");
    gets(name);

    printf("Please enter your surname/family name :\n");
    gets(surname);

    printf("Please enter your eyes color :\n");
    gets(eyes_color);

    printf("\n\nDate of birth :%s\n", date_birthday);
    printf("Name :%s\n", name);
    printf("Surname :%s\n", surname);
    printf("Eyes color :%s\n\n", eyes_color);

    return 0;
}