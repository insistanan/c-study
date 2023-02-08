//
// Created by yzn__ on 2022/12/8.
//

int* runningSum(int* nums, int numsSize, int* returnSize){
    *(returnSize+0) = *(nums+0);
    for (int i = 1; i < numsSize; ++i) {
        *(returnSize+i) = *(nums+i) + *(returnSize+i-1);
    }
}