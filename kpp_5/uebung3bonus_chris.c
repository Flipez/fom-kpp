#include <stdio.h>

int main() {
    int entfernung[5][5] = {
        { 0, 2, 5, 9, 14},
        { 0, 0, 7, 15, 27},
        { 0, 0, 0, 9, 23},
        { 0, 0, 0, 0, 12},
        { 0, 0, 0, 0, 0}
    };
    int currentNum = 0;
    int previousNum = 0;
    int totalDistance = 0;
    int numberOfCities = 0;

    do{
        printf("Bitte geben Sie an wie viele Orte sie besuchen wollen: \n");
        scanf("%d", &numberOfCities);
    } while (numberOfCities <= 1);

    for(int i = 0; i < numberOfCities; i++) {
        do{
            printf("Bitte geben sie die %d. Ortsnummer zwischen 1 & 5 an:\n", i + 1);
            scanf("%d", &currentNum);
        } while ( currentNum < 1 || currentNum > 5);

        if (i){
            if (previousNum > currentNum){
                totalDistance = totalDistance + entfernung[currentNum - 1][previousNum - 1];
            }
            else{
                totalDistance = totalDistance + entfernung[previousNum - 1][currentNum - 1];
            }
        }
        previousNum = currentNum;
        currentNum = 0;
    }
   
   printf("Die totale Distanz nachdem alle Orte besucht wurden ist: %d", totalDistance);
    return 0;

}