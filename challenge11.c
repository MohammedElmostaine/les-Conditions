/*Challenge 11 : Jour de la Semaine
Écrivez un programme C qui affiche d'une manière aléatoire un des jours de la semaine.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
     
   
   srand(time(NULL));

     char *jours[20] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi" , "dimanche"};
    int jour = rand() % 7;
    printf("jour aleatoir: %s \n", jours[jour]);
 return 0 ;
}