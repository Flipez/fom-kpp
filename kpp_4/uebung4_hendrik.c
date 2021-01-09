#include <stdio.h>

int main() {

    int anzahl, zahl, min, max;

    do {
        printf("\nWie viele Zahlen moechten Sie eingeben?\n");
        scanf("%d", &anzahl);

        if(anzahl<1) {
        printf("\nBitte geben Sie mindestens eine Zahl ein!");
        }
    } while (anzahl<1);
    

    for(int i=0; i<anzahl;i++) {
        printf("\nBitte geben Sie die %d. Zahl: ", i+1);
        scanf("%d", &zahl);

        if(i==0) {
            min=zahl;
            max=zahl;
        } else if (min>zahl) {
            min=zahl;
        } else if (max<zahl) {
            max=zahl;
        }
    }

    printf("\nMaximum: %d", max);
    printf("\nMinimum: %d", min);

    return 0;
}
