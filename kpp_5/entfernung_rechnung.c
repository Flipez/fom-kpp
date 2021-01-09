#include<stdio.h>
int entfernung(){
    int a,b;
    int arr[5][5] = {
            { 0, 2, 5, 9, 14},
            { 0, 0, 7, 15, 27},
            { 0, 0, 0, 9, 23},
            { 0, 0, 0, 0, 12},
            { 0, 0, 0, 0, 0}
    };
    do{
        printf("\n Geben Sie Zwei Ort Nummern von 1-5, separated by space\n");
        scanf("%d %d", &a,&b);
        if(a < 1 || a > 5 || b < 1 || b > 5){
            printf("\nOrt Nummer kann nicht kleiner als 1 oder groesser als 5 sein.\nnur von inclusive 1 bis inclusive 5.\n");
        }
    }while(a < 1 || a > 5 || b < 1 || b > 5);
    int erste,zweite;
    if( b < a){
        erste = b;
        zweite = a;
    }else{
        erste = a;
        zweite = b;
    }
    //printf("\n##%d##\n", arr[0][3]);
    erste--;zweite--;
    int t = arr[erste][zweite];
    printf("\nEntfernung zwichen %d. Ort und %d. Ort ist: %d\n",a,b,t);
    return t;
}
int main(){
    entfernung();
}


