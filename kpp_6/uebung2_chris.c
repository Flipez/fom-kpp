#define BUFFERLEN 101
#define MAXWORDS 10
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char *words[MAXWORDS];
    char buffer[BUFFERLEN];

    for(i = 0; i < MAXWORDS; i++){
        printf("Bitte geben Sie da %d. Wort ein:\n", i+1);
        fgets(buffer, BUFFERLEN, stdin);

        int wl = 0;
        for(wl = 0; buffer[wl]; wl++);
        if(buffer[wl-1] == '\n'){
            wl--;
            buffer[wl] = 0;
        }
        if (!wl) break;
        words[i] = malloc(sizeof(char));
        for (int ii = 0; ii <= wl; ii++){
            words[i][ii] = buffer[ii];
        }
    }
    for(int j=0; j < i; j++){
        printf("%d. Wort: %s\n", j+1, words[j]);
        free(words[j]);
    }
}