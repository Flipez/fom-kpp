#include <stdio.h>
#define LEN 11

int main(){
    int i = 0;
    char wort[LEN];
    printf("Bitte geben Sie einen Text ein! (Maximallaenge %d):", LEN-1);
    fgets(wort, LEN, stdin);

    for (i = 0; wort[i] != 0; i++);
    if(wort[i-1] == '\n'){
        wort[i-1] = '0';
        i--;
    }
    printf("Der eingegebene Text ist %d Zeichen lang!\n", i);
    return 0;
}