#include <stdio.h>
int main(){
    int entfernung[5][5] = {
        { 0, 2, 5, 9, 14},
        { 0, 0, 7, 15, 27},
        { 0, 0, 0, 9, 23},
        { 0, 0, 0, 0, 12},
        { 0, 0, 0, 0, 0}};
    int ort1;
    int ort2;

    do {
        printf("Bitte geben Sie zwei Ortsnummern an (zwischen 1 & 5):\n");
        scanf("%d %d", &ort1, &ort2);

        if(ort1 < 1 || ort1 > 5 || ort2 < 1 || ort2 > 5){
            printf("Mindestens einer der beiden Orte liegt nicht in den angegebenen Grenzen!\nBitte geben Sie die Orte nochmals ein.\n");
        }
    } while (ort1 < 1 || ort2 < 1|| ort1 > 5 || ort2 > 5);

    if (ort1 > ort2){
        int temp;
        temp = ort1;
        ort1 = ort2;
        ort2 = temp;
    }

    printf("Die Entfernung zwische Ort %d und Ort %d ist %d!\n", ort1, ort2, entfernung[ort1-1][ort2-1]);
    return 0;
}