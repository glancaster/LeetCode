#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x){
    int i,j;

    if (x < 1) return false;

    int count = 1;
    int y = x;

    while (y > 1){
        y/=10;
        count++;
        /*printf("%d ", count);*/
    }

    char* strx = (char*)malloc(count*sizeof(char));

    snprintf(strx,count+1, "%d", x);

    /*printf("int to string: %s\n", strx);*/
    for (int i = 0; i < count; i++){
        /*printf("%d:%c\n", i, strx[i]);*/
        if (strx[i] != strx[count - 1 - i]) return false;
    }

    free(strx);
    return true;
}



int main(){
    if (isPalindrome(121)) printf("True");
    else printf("False");
    return 0;
}

