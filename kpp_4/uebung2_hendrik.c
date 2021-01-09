#include <stdio.h>

int main () {

    int zahl1, zahl2, sum=0, dif=0, prod=0, mod=0;
    float quot=0;
    
    while (1) {
        printf("\nGeben Sie zwei Zahlen ein: \n");
        scanf("%d %d", &zahl1, &zahl2);
        printf("\nWir berechnen nun Summe, Differenz, Produkt, Quotient sowie Rest von %d und %d\n", zahl1, zahl2);

        if(zahl1==0) {
            printf("\nProgramm beendet\n");
            break;
        }

        sum = zahl1+zahl2;
        dif = zahl1-zahl2;
        prod = zahl1*zahl2;
        
        printf("\nSumme: %d", sum);
        printf("\nDifferenz: %d", dif);
        printf("\nProdukt: %d", prod);

        if(zahl2==0) {
            printf("\nDivision und Rest nicht moeglich, da nicht durch 0 geteilt werden kann\n");
        } else {    
            quot = (float)zahl1/zahl2;
            printf("\nQuotient: %g", quot);
            mod = zahl1%zahl2;
            printf("\nModulo: %d\n", mod);
        }
        


    continue;
    }
return 0;
}
