#include <stdio.h>

#define len 100

void chomp(char text[]) {
    int i;
    for(i=0; text[i]; i++);
        if(i>0 && text[i-1]=='\n') {
            text[i-1]=0;
        }
}

int main() {

    char text[len];
    char texte[len];
    int j, anzahle=0;

    printf("Bitte geben Sie einen string ein: \n");
    fgets(text, len, stdin);
    chomp(text);

    for(j=0;text[j];j++) {
        if(text[j]=='e' || text[j]=='E'){
            anzahle++;
        } else {
            int k;
            k=j-anzahle;
            texte[k]=text[j];
        }
    }

    int k;
    k=j-anzahle;
    texte[k]=0;

    printf("Ihr string ohne es: %s", texte);

    return 0;
}
