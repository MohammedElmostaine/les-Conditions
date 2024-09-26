/*Challenge 10 : Formatage de la Date
Écrivez un programme C qui lit une date au format 15/09/2012 et l'affiche sous le format suivant : 15-Septembre-2012.*/

#include <stdio.h>

int main() {
    int jour, mois, annee;
    printf("Entrez une date (Jour/Mois/annee) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    while ( (mois <= 0 || mois > 12) || (jour <= 0 || jour > 31) || annee <= 0 )
    {
    
    if ( mois <= 0 || mois > 12){
        printf("ENTRER un nombre entre 1 et 12 pour les mois\n");
    } else if (jour <= 0 || jour > 31){
        printf("Entrez un nombre entre 1 et 30 pour les jour\n");
    } else if ( annee <= 0 ){
        printf("ENTRER un nombre positife pour les annees\n");
    } 
    scanf("%d/%d/%d", &jour, &mois, &annee);
    }
    
    
    switch (mois)
    {
    case 1:
        printf("%d/Janvier/%d", jour, annee);
        break;
    case 2:
        printf("%d/fevrier/%d", jour, annee) ;
        break;
    case 3:
        printf("%d/Mars/%d", jour, annee) ;
        break;
    case 4:
        printf("%d/Avril/%d", jour, annee) ;
        break;
    case 5:
        printf("%d/Mai/%d", jour, annee) ;
        break;
    case 6:
        printf("%d/Juin/%d", jour, annee) ;
        break;
    case 7:
        printf("%d/Juillet/%d", jour, annee); 
        break;
    case 8:
        printf("%d/Aout/%d", jour, annee) ;
        break;
    case 9:
        printf("%d/Septembre/%d", jour, annee); 
        break;
    case 10:
        printf("%d/Octobre/%d", jour, annee) ;
        break;
    case 11:
        printf("%d/Novembre/%d", jour, annee) ;
        break;
    case 12:
        printf("%d/Decembre/%d", jour, annee) ;
        break;
    
    }
return 0;

}