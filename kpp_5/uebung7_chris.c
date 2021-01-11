#include <stdio.h>
#define LEN 101

int main(){
    char text[LEN];
    printf("Bitte geben Sie einen Text an (Maximal %d Zeichen):\n", LEN-1);
    fgets(text, LEN, stdin);
    int anzE = 0;
    int i;
    for (i = 0; text[i] != 0; i++){
        if(text[i] == 'e'){
            anzE++;
        }
        else{
            text[i-anzE] = text[i];
        }
    }
    i = i - anzE;
    text[i] = 0;
    if(text[i-1] == '\n'){
        text[i-1] = 0;
        i--;
    }
    printf("\'%s\' ist ihr Text ohne den Buchstaben \'e\'", text);
    return 0;
}