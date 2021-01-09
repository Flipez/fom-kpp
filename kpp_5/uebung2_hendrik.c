#include <stdio.h>

int main() {

    int anzahl, min=0, max=0, sum=0;

    do{
        printf("Wie viele Zahlen moechten Sie eingeben (min 1, max 5): \n");
        scanf("%d", &anzahl);
        if (anzahl<1 || anzahl>5) {
        printf("Bitte geben Sie mindestens eine und maximal fuenf Zahlen ein\n");
        }
    } while(anzahl<1 || anzahl>5);

    // Ab hier nur in C99!:
    int zahlen[anzahl];

    for(int i=0;i<anzahl;i++) {
        printf("Bitte geben Sie die %d. Zahl ein: \n", i+1);
        scanf("%d", &zahlen[i]);

        if(i==0){
            min=zahlen[i];
            max=zahlen[i];
        } else {            
            if (zahlen[i]<min) {
                min=zahlen[i];
            } 

            if (zahlen[i]>max) {
                max=zahlen[i];
            }
        }

        sum+=zahlen[i];
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Durchschnitt: %.3f", (float) sum/anzahl);

    return 0;
}
