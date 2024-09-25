/*Challenge 2 : Voyelle ou Non
Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.*/

#include <stdio.h>

int main () {
    char caractere ;
    printf("Entrez uncaractere : \n");
    scanf("%s" , &caractere);
    switch (caractere) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("le caractere saisi est une voyelle\n");
        break;
    default:
    printf("le caractere saisi n'est pas une voyelle\n");
        break;
    }
    return 0;
}

