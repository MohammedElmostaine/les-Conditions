/*Challenge 6 : Positif, Négatif ou Nul
Écrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro, alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal à zéro.*/

#include <stdio.h>

int main() {

    double nombre;

    printf("Entrez un nombre : ");
    scanf("%lf", &nombre);
    if (nombre > 0) {
        printf("Le nombre %lf est positif.\n", nombre);
    } else if (nombre < 0) {
        printf("Le nombre %lf est négatif.\n", nombre);
    } else {
        printf("Le nombre est nul.\n");
    }
    return 0;
}