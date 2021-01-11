#define buflen 100
#define maxwords 100
#include <stdio.h>
#include <stdlib.h>


int laenge(char *text)
{
    int i;
    for(i = 0; text[i]; i++);
    return i;
}

int findKey(char *text, char *searchKey){
    int i = 0;
    for(int j = 0; text[j]; j++){
        if (text[j] == searchKey[0]){
            int k = 1;
            for(; searchKey[k];k++){
                if (text[j+k] != searchKey[k]){
                    break;
                }
            }
            if(k == laenge(searchKey)){
                i++;
                break;
            }
        }
    }
    return i;
}

void kopieren(char *from, char *to){
    while(*from){
        *to = *from;
        from++;
        to++;
    }
    *to = 0;
}

void chomp(char *text)
{
    int i;
    for(i = 0; text[i]; i++);
    if(i>0 && text[i-1] == '\n'){
        text[i-1] = 0;
    }
}

void anhaengen(char *from, char *to){
    int i = 0;
    for (;to[i];i++);
    to = &to[i];
    if (i){
        *to = '!';
        to++;
    }
    while(*from){
        *to = *from;
        to++;
        from++;
    }
    *to = 0;
}

int main(){
    char buffer[buflen];
    char *words[maxwords];
    char *allWords;

    int count;
    int totalLaenge = 0;

    printf("Bitte geben Sie pro Zeile einen Text ein. Beenden Sie die Eingabe mit einem doppelten Return.\n");
    for(count = 0; count < maxwords; count++){
        fgets(buffer, buflen, stdin);
        fflush(stdin);
        chomp(buffer);
        int wl = laenge(buffer);
        if(!wl) break;
        words[count] = malloc(sizeof(char)*wl);
        kopieren(buffer, words[count]);
    }

    
    for(int i =0; i < count; i++){
        totalLaenge += laenge(words[i]) + 1;
        if(!i){
            allWords = malloc(sizeof(char)*totalLaenge);
            allWords[0] = 0;
        }
        else{
            allWords = realloc(allWords, sizeof(char)*totalLaenge);

        }
        anhaengen(words[i], allWords);
    }
    printf("Ihre eingegebenen Texte waren:\n%s",allWords);


    for(int i =0; i < count; i++){
        free(words[i]);
    }
}