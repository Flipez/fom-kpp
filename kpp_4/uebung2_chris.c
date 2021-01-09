#include <stdio.h>

int main(){
    int zahl1 = 0;
    int zahl2 = 0;

    while (zahl1 == 0){
        printf("Bitte geben Sie zwei Zahlen ein (erste ungleich 0):\n");
        scanf("%d", &zahl1);
        scanf("%d", &zahl2);
    }
    printf("Summe a+b = %d\n", zahl1+zahl2);
    printf("Division a-b = %d\n", zahl1-zahl2);
    printf("Division b-a = %d\n", zahl2-zahl1);
    printf("Multiplikation a*b = %d\n", zahl1*zahl2);
    if(zahl2 != 0){
        float zwisch;
        zwisch = ((float)zahl1)/zahl2;
        printf("Quotient a/b = %f\n", zwisch);
        printf("Quotient mit Rest a/b = %d Rest %d\n", zahl1/zahl2, zahl1%zahl2);
    }
    float zw2;
    zw2 = ((float)zahl2)/zahl1;
    printf("Quotient b/a = %f\n", zw2);
    printf("Quotient mit Rest b/a = %d Rest %d\n", zahl2/zahl1, zahl2%zahl1);
    return 0;
}
