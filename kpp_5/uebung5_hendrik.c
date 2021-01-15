#include <stdio.h>

#define LEN 100

/* Diese Funktionn löscht das "Enter" bei Eingabe*/
void chomp(char wort[]) {
    int i;
    for(i=0; wort[i]!=0; i++);
    if(i>0 && wort[i-1]=='\n') {
        wort[i-1]=0;
    }
}


int main() {

char vergleich[LEN]={0};    /* Variable für Wort rückwärts */
char wort[LEN]={0};
int ende, j;
int laenge;

    printf("Bitte geben Sie ein Wort ein: \n");
    fgets(wort, LEN, stdin);        

    // Loeschen des "Enter" bei Eingabe
    chomp(wort);              

    // Stringlaenge iterieren
    for(ende=0; wort[ende]!=0; ende++);   
    ende--;
    laenge=ende;

    // Austausch der Zeichen
    for(j=0; ende>=0; j++) {
        vergleich[j]=wort[ende];
        ende--;
    }

    // Überprüfung der Äquivalenz von wort & vergleich und Ausgabe
    printf("%s\n%s\n", wort, vergleich);

    for(int i=0; laenge>i; i++) {
        if(wort[i]!=vergleich[i]) {
            printf("%s ist kein Palindrom\n", wort);
            return 0;
        }
    }

    printf("%s ist ein Palindrom\n", wort);
    
    return 0;
}
