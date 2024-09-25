/*Challenge 1 : Paire ou Impaire
Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.*/

#include <stdio.h>

int main () {
    int nombre ;
    printf("Entrez un nombre : \n");
    scanf("%d",&nombre);
    if ((nombre % 2) == 1){
        printf("%d est un nombre impair\n", nombre);
    }else{
        printf( "%d est un nombre pair\n" , nombre);
    }
    return 0;

}