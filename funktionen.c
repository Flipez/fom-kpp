
/*  ACHTUNG:    Dies ist nur eine Ansammlung an gängigen Funktionen, Algorithmen, Formeln, 
                Aufbauten, etc. und ist weder vollständig, noch als Programm ausführbar!!! */


// Für uns übliche Libraries:
#include <stdio.h>  // Für printf, scanf, fgets, etc.
#include <stdlib.h> // Für malloc, realloc & free

#define len 100     // Definiert global "len" mit dem Wert 100


// Main-Funktion zur Ausführen:
int main() {

    return 0;
}


// for-Schleife, do-while-Schleife, while-Schleife:
for(i=0; i<Wert; i++){      
    }

do{                         
    } while (anzahl != 0);

while (Anzahl != 0) {
    }


// Chomp-Funktion für Strings als Array:
 void chomp(char string[]) {
    int i;
    for(i = 0; string[i] != 0;i++);
    if(i > 0 && string[i - 1] == '\n') {
        string[i - 1]=0;
    }
}


// Chomp-Funktion für Strings als Pointer:
int chomp(char *string) {
    int i;
    for(i = 0;*(string + i) != 0; i++);
    if(i > 0 && *(string + i - 1) == '\n') {
        i--;
        *(string + i) = 0;
    } 
    return 0;
}


// Globale Funktion zum Zählen einer Stringlaenge als Pointer:
int zaehler(char *string) {
    int i;
    for(i = 0; *(string+i) != 0; i++);
    return i;
}


// Schleife zum Durchzählen eines Strings als Array:
    for(i=0; text[i] != 0; i++);


// Aufbau von struct:
	struct student {
		char first[30];     // Vorname 30 Zeichen
		char last[40];      // Nachname 40 Zeichen
		long matrikelnr;    // Matrikelnummer long
	};
	struct student string;


// Aufbau von malloc() und Freigabe durch free():
    char *string;
    string = (char*) malloc(sizeof(char)*len);
    free(string);


// Beispielsyntax von vordefinierten ein- & zweidimensionalen Arrays:
    int array1[5] = { 1, 2, 3, 4, 5};

    int array2[3][3] = {
                            { 0, 2, 5},
                            { 0, 0, 7},
                            { 0, 9, 23}
                            };


// Werte von Variablen austauschen:
    int t;
    int a = 1, b = 2;

    a = t;
    t = b;
    b = a;


// Schleife für kleinste & größte Zahl, sowie den Durchschnitt einer zuvor definierten Anzahl an eingegebenen Zahlen:
    for(int i=0;i<anzahl;i++) {
        printf("Die %d. Zahl: \n", i+1);
        scanf("%d", &zahlen[i]);

        if(i==0){
            min=zahlen[i];
            max=zahlen[i];
        } else {            
            if (zahlen[i]<min) {
                min=zahlen[i];
            } 

            if (zahlen[i]>max) {
                max=zahlen[i];
            }
        }

        sum+=zahlen[i];
        durchschnitt=(float) sum/anzahl);
    }


// Ausgabe einer zuvor definierten Anzahl negativer & positiver Zahlen
    for(i=0; i<Anzahl; i++) {
        printf("Zahl %d:", i);
        scanf("%d", &Eingabe);

        if(Eingabe<0) {
            neg = neg + Eingabe;
        } else {
            pos = pos + Eingabe;
        }
    }


// Funktion für das Entfernen von "e" und "E" aus einem zuvor eingegebenen Text:
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


// Verknüpfung von Strings:
    for(i = 0; vorname[i] != 0; i++) {      // Zählt Vornamen durch
        target[i] = vorname[i];
    }

    target[i++] = ' ';                      // Setzt leerzeichen zw. Vor- und Nachnamen

    for(j = 0; nachname[j] != 0;j++) {      // Zählt Nachnamen durch
        target[i+j] = nachname[j];
    }

    target[i+j] = 0;                        // 0 als Abschluss

    printf("Concat: %s\n", target);


// Palindrom:
    for(ende = 0; wort[ende] != 0; ende++);     // Durchzählen der Stringlänge
    ende--;
    laenge = ende;
    
    for(j = 0; ende >= 0; j++) {                // Austausch der Zeichen
        vergleich[j] = wort[ende];
        ende--;
    }

    printf("%s & %s\n", wort, vergleich);   // Überprüfung der Äquivalenz von "wort" & "vergleich" und Ausgabe

    for(int i = 0; laenge > i; i++) {
        if(wort[i] != vergleich[i]) {
            printf("%s ist kein Palindrom\n", wort);
            return 0;
        }
    }


// Funktion zum Vertauschen von Werten als Pointer:
void vertausche(int *x, int *y) {
    int t;
    t = *x;
    *x = *y;
    *y = t;
}