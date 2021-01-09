#include <stdio.h>

int main () {

    int Anzahl, i, Eingabe, neg=0, pos=0;

    printf("Wie viele Zahlen moechten Sie eingeben?\n");
    scanf("%d", &Anzahl);

    for(i=0; i<Anzahl; i++) {
        printf("Zahl %d:", i);
        scanf("%d", &Eingabe);

        if(Eingabe<0) {
            neg = neg + Eingabe;
        } else {
            pos = pos + Eingabe;
        }
    }
    if(neg) {
    printf("Gesamtsumme: %d \n", neg);
    } else {
    printf("Gesamtsumme: %d \n", pos);
    }

return 0;
}
