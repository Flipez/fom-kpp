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

int main(){
    char buffer[buflen];
    char *words[maxwords];
    char searchKey[buflen];

    int count;

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

    printf("Bitte geben Sie einen Text nach dem gesucht werden soll an:\n");
    scanf("%s", &searchKey);

    printf("Folgende Texte enthielten den Text \'%s\':\n", searchKey);
    for(int i =0; i < count; i++){
        if(findKey(words[i], searchKey)){
            printf("%s\n", words[i]);
        }
        free(words[i]);
    }
}