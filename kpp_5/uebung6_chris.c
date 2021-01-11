#include <stdio.h>
#define LEN 101

int main(){
    char text[LEN];

    printf("Bitte geben Sie einen Text ein (Maximal %d Zeichen):\n", LEN-1);
    fgets(text, LEN, stdin);

    char ascii[128];
    for (char i = 'a'; i <= 'z'; i++){
        ascii[i] = 0;
    }

    char diff = 'A' - 'a';

    for (int i = 0; text[i] != 0; i++){
        if (text[i] >= 'A' && text[i] <= 'Z'){
            ascii[text[i]-diff]++;
        }else{            
            ascii[text[i]]++;
        }
    }
    printf("So oft sind die Buchstaben in Ihrem Text vorgekommen:\n");
    for (char i = 'a'; i <= 'z'; i++){
        if (ascii[i] > 0){
            printf("%c: %d\n", i, ascii[i]);
        }
    }
    return 0;
}