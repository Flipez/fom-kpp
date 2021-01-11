#define buflen 100
#define maxwords 100
#include <stdio.h>
#include <stdlib.h>

int paareBuch(char *text){
    int i = 0;
    if(text[0]){
        for(int j = 1; text[j]; j++){
            if(text[j-1] == text[j]){
                i++;
                if(text[j+1]){
                    j++;
                }
                else break;
            }
        }
    }
    return i;
}

void reverseTo(char *from, char *to,int len){
    int i;
    for(i = 0; from[i]; i++){
        to[i] = from[len-i-1];
    }
    to[i] = 0;
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
    char *ausgabe;
    char richtung = 0;  

    int count;
    int showTextNum = 0;
    int anzBPaare;

    printf("Bitte geben Sie pro Zeile einen Text ein. Beenden Sie die Eingabe mit einem doppelten Return.\n");
    for(count = 0; count < maxwords; count++){
        fgets(buffer, buflen, stdin);
        chomp(buffer);
        int wl = laenge(buffer);
        if(!wl) break;
        words[count] = malloc(sizeof(char)*wl);
        kopieren(buffer, words[count]);
    }
    fflush(stdin);

    printf("Sie haben %d Eingaben getaetigt.\n", count);

    while(showTextNum < 1 || showTextNum > count){
        printf("Den wievielten Text wollen Sie ausgeben? (Zwischen 1 und %d)\n", count);
        scanf("%d", &showTextNum);
        fflush(stdin);
        if(showTextNum < 1 || showTextNum > count)
        {
            printf("Beachten Sie die Begrenzung!\n");
        }
    }
    showTextNum--;

    while(richtung != 'v' && richtung != 'r'){
        printf("Wollen Sie den Text vorwaerts (\"v\") oder rueckwaerts (\"r\") ausgeben lassen?\n");
        scanf("%c", &richtung);
        fflush(stdin);
        if(richtung != 'v' && richtung != 'r'){
            printf("Nur r und v sind moeglich!\n");
        }
    }

    if (richtung == 'r'){
        char *revT;
        revT = malloc(sizeof(words[showTextNum]));
        reverseTo(words[showTextNum], revT, laenge(words[showTextNum]));
        ausgabe = revT;
    }
    else{
        ausgabe = words[showTextNum];
    }

    anzBPaare = paareBuch(ausgabe);


    printf("Der %d. Text ist:\n%s (%d)", showTextNum+1, ausgabe, anzBPaare);

    for(int i =0; i < count; i++){
        free(words[i]);
    }
}