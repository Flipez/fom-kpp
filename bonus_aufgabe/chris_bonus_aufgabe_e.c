#define buflen 100
#define maxwords 100
#include <stdio.h>
#include <stdlib.h>

int findKey(char *text, char searchKey){
    int i = 0;
    for(int j = 0; text[j]; j++){
        if (text[j] == searchKey){
            i++;
            break;
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

int laenge(char *text)
{
    int i;
    for(i = 0; text[i]; i++);
    return i;
}

int main(){
    char buffer[buflen];
    char *words[maxwords];
    char searchKey = 0;

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

    while(searchKey < 'A' || searchKey > 'z'){
        printf("Bitte geben Sie einen Buchstaben nach dem gesucht werden soll an:\n");
        scanf("%c", &searchKey);
        if (searchKey < 'A' || searchKey > 'z'){
            printf("Es gelten nur Buchstaben! (A-Za-z)\n");
        }
    }

    printf("Folgende Texte enthielten den Buchstaben \'%c\':\n", searchKey);
    for(int i =0; i < count; i++){
        if(findKey(words[i], searchKey)){
            printf("%s\n", words[i]);
        }
        free(words[i]);
    }
}