#include <stdio.h>
#include <stdlib.h>

int factorial (int numero){

    int resultat;

    if (numero==1){
        return 1;
    }
    else{
      resultat=numero*factorial(numero-1);
      return resultat;
    }


}


int main()
{   //comentaire
    //commentaire 2
    int numero=0, resultat=0;
    printf("Entrez un numero\n");
    scanf("%i", &numero);
    resultat=factorial(numero);
    printf("\n\nLe resultat factorial de %i est %i\n\n", numero,resultat);

    return 0;
}

