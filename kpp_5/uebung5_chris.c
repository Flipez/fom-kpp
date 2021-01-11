#include <stdio.h>
#define LEN 1010
int main(){
    char text[LEN];
    printf("Bitte geben Sie einen zu pruefenden Text ein (Maximallaenge: %d):\n", LEN-1);
    fgets(text, LEN, stdin);

    int i;
    for(i = 0; text[i] !=0; i++);
    if(text[i-1] == '\n'){
        text[i-1] = 0;
        i--;
    }
    int textlen = i-1;
    int palim =1;
    for(i=0; i<=(textlen/2);i++){
        printf("%c %c\n", text[i], text[textlen - i]);
        if(text[i] != text[textlen - i]){
            palim = 0;
            break;
        }
    }
    if (palim){
        printf("%s ist ein Palindrom.\n", text);
    }else{
        printf("%s ist kein Palindrom.\n", text);
    }
}