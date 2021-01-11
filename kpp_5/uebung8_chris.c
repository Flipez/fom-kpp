#include <stdio.h>
#define LEN 101

int main(){
    char text[LEN];
    int sum = 0;
    int zahl = 0;

    printf("Bitte geben Sie eine Zahl ein:\n");
    fgets(text, LEN, stdin);
    int i = 0;
    for (i = 0;text[i] != 0; i++){
        if (text[i]>= '0' && text[i] <='9'){
        }
        else if(!i && text[i] == '-');
        else if (text[i] != '\n'){
            printf("Fehler: Nicht nur Zahlen eingegeben! Programm beendet!");
            return 1;
        }
    }
    if(text[i-1] == '\n'){
        text[i-1] = 0;
        i--;
    }
    i--;

    for(int j = i; j >= 0; j--){
        if(j==i){
            zahl = text[j]-'0';
        }
        else if(j==0&&text[j]=='-'){
            zahl = -zahl;
        }
        else{
            int potenz = 1;
            for(int k = 0; k < (i-j); k++){
                potenz *= 10;
            }
            zahl = zahl + ((text[j]-'0')*potenz);
        }
    }
    printf("Eingegebene Zahl als int:\t\t%d", zahl);
    return 0;
}
 