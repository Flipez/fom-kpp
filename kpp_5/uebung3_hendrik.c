#include <stdio.h>

int main () {

    int anzahl, ergebnis=0, eingabe, vor_eingabe;
    int entfernung[5][5] = {
                            { 0, 2, 5, 9, 14},
                            { 0, 0, 7, 15, 27},
                            { 0, 0, 0, 9, 23},
                            { 0, 0, 0, 0, 12},
                            { 0, 0, 0, 0, 0}
                            };

    do{
        printf("Wie viele Orte wollen Sie eingeben (mindestens 2): \n");
        scanf("%d", &anzahl);

        if(anzahl<2){
            printf("Bitte geben Sie mindestens zwei Orte an\n");
        }
    } while(anzahl<2);

    for(int i=0;i<anzahl;i++){
        printf("Geben Sie den %d. Ort ein: \n", i+1);
        scanf("%d", &eingabe);

        if(i!=0){

            int temp;
            if(eingabe>vor_eingabe){
                temp=entfernung[vor_eingabe-1][eingabe-1];
            } else {
                temp=entfernung[eingabe-1][vor_eingabe-1];
            }

            ergebnis+=temp;
        } 
        vor_eingabe=eingabe;
    }

    printf("\nDie Entfernung ist: %d", ergebnis);

    return 0;
}
