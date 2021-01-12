#include <stdio.h>
#include <stdlib.h>

#define len 100

// Zeilenvorschub cia "chomp" durch 0-Byte ersetzen:
void chomp(char text[]) {
    int i;
    for (i; text[i]!=0; i++);
    if (i>0 && text[i-1] == '\n') {
        text[i-1]=0;
    }
}

int main() {

    // Variablen definieren:
    char text[len];
    char buchstabe[128];
    int j, i, anzahl;

    // Jede Stelle in "buchstabe" mit 0 versehen:
    for(j=0; j<128; j++) {
        buchstabe[j]=0;
    }
    // Abfrage des Texts und Entfernen von Zeilenvorschub:
    printf("Bitte geben Sie einen Text ein: \n");
    fgets(text, len, stdin);

    chomp(text);

    // Durchzählen der Zeichen und Vergabe des Werts in "buchstabe":
    for(anzahl=0; text[anzahl]!=0; anzahl++) {
        int t = text[anzahl];
        buchstabe[t]++;
    }

    // Ausgabe:
    for(i='!'; i<='z';i++) {
        if(buchstabe[i]) {
            printf("%c kommt so oft vor: %d\n", i, buchstabe[i]);
        }
    }

    return 0;
}
