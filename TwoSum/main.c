#include <stdio.h>
#include <stdlib.h>

int* twoNum(int* nums, int numsSize, int target, int* returnSize);

int main(){
    printf("Hello");
    int* testnums = malloc(sizeof(int)*4);
    testnums[0] = 2;
    testnums[1] = 7;
    testnums[2] = 11;
    testnums[3] = 15;

    int* returnsize = malloc(sizeof(int));
    returnsize[0] = 2;
    int* res = twoNum(testnums, 4, 9, returnsize);
    for (int i = 0; i < 2; i++){
        printf("%d", res[i]);
    }
    return 0;
}

int* twoNum(int* nums, int numsSize, int target, int* returnSize){
    for (int i=0; i < numsSize; i++){
        for (int j=0; j < numsSize; j++){
            if (nums[j] == target - nums[i]){
                int* result = malloc(sizeof(int)*2);
                result[0] = i;
                result[1] = j;
                return result;
}
}}}
