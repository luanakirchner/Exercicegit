#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, i=0, resultat=0;
    printf("Entrez un numero\n");
    scanf("%i", &numero);
    resultat=numero;

    for(i=1; i<numero; i++){
    resultat=resultat*i;
    }
    printf("\n\nle calcul factorial de %i est %i\n\n", numero,resultat);
    return 0;
}
