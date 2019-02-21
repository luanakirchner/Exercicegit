#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=0, resultat=0;
    printf("Entrez un numero\n");
    scanf("%i", &numero);
    resultat=factorial(numero);
    printf("\n\nle resultat factorial de %i est %i\n\n", numero,resultat);

    return 0;
}

int factorial (int numero){

    int i, resultat;

    resultat=numero;

    for(i=1; i<numero; i++){
        resultat=resultat*i;
    }

    return resultat;
}
