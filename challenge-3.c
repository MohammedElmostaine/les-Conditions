/*Challenge 3 : Somme de Deux Valeurs
Écrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.
*/

#include <stdio.h>
#include <math.h>

int main () {
    int a , b;
    printf("Entrez la premiere valeur \n");
    scanf("%d", &a);
    printf("Entrz la deuxieme valeur \n");
    scanf("%d" , &b);
    if ( a != b ){
        printf("%d" , a + b);
    }else{
    printf("les deux valeurs sont identiques\n Voila le triple de leur somme : ");
    printf("%d" , ( a + b)*3);
    }
}
