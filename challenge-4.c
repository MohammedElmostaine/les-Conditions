/*Challenge 4 : Equation du Deuxième Degré
Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.
*/ 

#include <stdio.h>
#include <math.h>

int main(){
    double a , b, c , d ;
    double x1 ,x2 ;

    printf("Entrez les valeur des coefficients de l'equation  a x \n");
    printf("a : ");
    scanf("%lf", &a);
    printf("b : ");
    scanf("%lf", &b);
    printf("c : ");
    scanf("%lf", &c);

    d = pow(b , 2) - (4 * a * c);

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a) ;
        x2 = (-b - sqrt(d)) / (2 * a);
    printf("\nl'equation admet deux solutions : \n");
    printf("x1 = %lf\n" , x1 );
    printf("x2 = %lf\n" , x2 );
    } else if (d == 0) {
        printf("\nl'equation admet une solution : \n");
        x1 =  -b / ( 2 * a ) ;
        printf("x = %lf \n" , x1 );
    } else {
        printf("\nl'equation n'admet pas de solution : \n");

    }
    return 0 ;
}