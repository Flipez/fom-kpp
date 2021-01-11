#define arrLen 20
#include <stdio.h>
void reverseA(int array[], int len, int curPos){
    if (curPos <= (len/2)){
        int temp;
        temp = array[curPos];
        array[curPos] = array[len-curPos-1];
        array[len-curPos-1] = temp;
        reverseA(array, len, curPos+1);
    }
}

int main(){
    int array[arrLen];
    for(int i = 0; i < arrLen; i++){
        array[i] = i;
    }
    reverseA(array, arrLen,0);
    printf("Array now:");
    for(int i = 0 ; i < arrLen; i++){
        printf("%d ", array[i]);
    }
}