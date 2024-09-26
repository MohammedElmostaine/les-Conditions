/* Challenge 9 : Vérification d'Alphabet
Écrivez un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou non. Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.*/

#include <stdio.h>

int main () {

    char caractere;

    printf("Entrez un caractere \n");
    scanf(" %c", &caractere );
    
    if ( caractere <= 122 && caractere >= 65) {
        if ( caractere <= 90 && caractere >= 65) {
         printf("le caractere saisie est  un alphabet majuscule\n");
         }else {
         printf("le caractere saisie est un alphabet minuscule\n");
        }
    }else {
        printf("le caractere saisie n' est pas un alphabet\n");
    }
    return 0;


}