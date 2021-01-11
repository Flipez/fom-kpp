#define LEN 101
#include <stdio.h>
#include <stdlib.h>

int main(){
    char *text;
    int i= 0;
    text = malloc(sizeof(char) * LEN);
    printf("Bitte geben Sie einen Text ein:\n");
    fgets(text, LEN, stdin);

    for (;*(text + i) != 0; i++);
    if (*(text + i - 1) == '\n'){
        i--;
        *(text + i) = 0;
    }

    i--; 

    for (int j = 0; j <= (i/2); j++){
        if (*(text + j) != *(text + i - j)){
            printf("%s ist kein Palindrom", text);
            free(text);
            return 0;
        }
    }

    printf("%s ist ein Palindrom", text);
    free(text);
    return 0;
}