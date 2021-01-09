#include <stdio.h>

int main() {

signed int zahl1;
signed int zahl2; 
signed int i;
signed int r;

printf("Bitte geben Sie zwei Werte ein: \n");
scanf("%d %d", &zahl1, &zahl2);
printf("Die folgenden Zahlen sind durch 7 teilbar: \n");

if(zahl2<zahl1){
    r=zahl1;
    zahl1=zahl2;
    zahl2=r;
}

for(i=zahl1; i<=zahl2; i++){
     if(i%7==0) {
        printf("%d ", i);
    }
}

return 0;
}
