#include <stdio.h>
#define LEN 5

int main(){
    int anzahl;
    int zahlen[LEN];

    do{
        printf("Bitte geben Sie an, wie viele Zahlen Sie eingeben wollen (Min 1, Max %d):\n", LEN);
        scanf("%d", &anzahl);

        if (anzahl < 1 || anzahl > LEN){
            printf("Fehler: Bitte achten Sie auf die angegebenen Grenzen!\n");
        }
    } while(anzahl < 1 || anzahl > LEN);

    int min;
    int max;
    int sum;

    for (int i = 0; i < anzahl; i++){
        int curZ;
        printf("Bitte geben Sie die %d Zahl ein:\n", i + 1);
        scanf("%d", &curZ);
        zahlen[i] = curZ;

        if(i){
            sum += curZ;
            if(curZ < min){
                min = curZ;
            } else if (curZ > max){
                max = curZ;
            }
        } else {
            sum = min = max = curZ;
        }
    }
    printf("Minimum:\t%d\nMaximum:\t%d\nDurchschnitt:\t%f\n", min, max, ((float)sum)/anzahl);
    return 0;
}