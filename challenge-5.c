/*Challenge 5 : Conversion d'Année
Écrivez un programme C piloté par menu pour convertir une année donnée en :
  
Mois
Jours
Heures
Minutes
Secondes

Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire). 1 an = 365 jours, 1 mois = 30 jours.*/

#include <stdio.h>
#include <math.h>

int main () {

    int annee1, annee2;
    int menu;
    

    printf("Entrez un nombre d' annees que vous souhaitez convertir : \n");
    scanf("%d", &annee1);
    if ( annee1 < 0){
        printf("ENTREZ UN NOMBRE POSITIF!!");

    }
    
    printf("Choisissez une option de conversion :\n");
    printf("[1] convertir en mois \n");
    printf("[2]/ convertir en jours \n");
    printf("[3]/ convertir en heures \n");
    printf("[4]/ convertir en minutes \n");
    printf("[5]/ convertir en secondes \n");
    scanf("%d", &menu);

    
    switch (menu) {

        case 1:
        annee2 =  annee1 * 12;
        printf("%d mois\n", annee2);
            break;

        case 2:
        annee2 =  annee1 * 365;
        printf("%d jours\n", annee2);
            break;

        case 3:
        annee2 =  annee1 * 24 * 365;
        printf("%d heures\n", annee2);
            break;
        
        case 4:
        annee2 =  annee1 * 60 * 24 * 365;
        printf("%d minutes\n", annee2);
            break;

        case 5:
        annee2 =  annee1 * 60 * 60 * 24 * 365;
        printf("%d secondes\n", annee2);
            break;
        default :
        printf("ENTREZ UN NOMBRE ENTRE 1 ET 5 !! \n");
            break;

    }
    return 0;
}