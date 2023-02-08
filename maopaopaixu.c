//
// Created by yzn__ on 2022/12/1.
//
#include "stdio.h"
//冒泡排序
int maopao(){
    int arr[10] = {36,54,8,9,12,61,48,2,3,17};
    int length = sizeof(arr)/4;
    for (int i = 0; i < length-1; ++i) {
        for (int j = 0; j < length-1; ++j) {
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j]-arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d \n",arr[i]);
    }
}
//冒泡排序plus
int maopaoplus(){
    int arr[10] = {36,54,8,9,12,61,48,2,3,17};
    int length = sizeof(arr)/4 -1;
    int lastChangeIndex = 0;  //最后一次遍历的下标
    for (int i = 0; i < sizeof(arr)/4-1; ++i) {
        _Bool boolean = 1;   //有序标记，每一轮初始为ture
        for (int j = 0; j < length; ++j) {
            if(arr[j]>arr[j+1]){
                boolean = 0;  //需要交换，更改有序标记，说明目前非有序状态，接着遍历
                //交换
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j]-arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                lastChangeIndex = j;  //记录最后一次交换的下标
            }
        }
        length = lastChangeIndex;//将边界变为最后一次交换的下标
        if(boolean){
            break;   //如果现在是有序列表，跳出大循环
        }
    }
    for (int i = 0; i < sizeof(arr)/4; ++i) {
        printf("%d \n",arr[i]);
    }
}
//冒泡排序接着plus  双向冒泡 鸡尾酒算法
void maopaojiweijiu(){
    int arr[10] = {36,54,8,9,12,61,48,2,3,17};
    int leftborder = 0,lastLeftIndex = 0,lastRightIndex = 0;
    int rightborder = sizeof(arr)/4-1;
    for (int i = 0; i < sizeof(arr)/4/2; ++i) {
        _Bool boolean = 1;  //有序标记
        //排过去最大
        for (int j = leftborder; j < rightborder; ++j) {
            if(arr[j]>arr[j+1]){
                //非有序列表，需要交换，将有序标记变为false
                boolean = 0;
                //交换
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j]-arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                lastRightIndex = j;  //记录最后一次交换的右侧下标
            }
        }
        rightborder = lastRightIndex;
        if(boolean) break;   //如果是有序列表,不用再排序遍历了，跳出循环
        //中场休息，将有序标记重新变为ture
        boolean = 1;
        //排过来最小
        for (int j = rightborder; j > leftborder; --j) {
            if(arr[j]<arr[j-1]){
                //交换
                boolean = 0;   //变更有序标记
                arr[j-1] = arr[j] + arr[j-1];
                arr[j] = arr[j-1] - arr[j];
                arr[j-1] = arr[j-1] -arr[j];
                lastLeftIndex = j;    //记录最后一次交换的左侧下标
            }
        }
        leftborder = lastLeftIndex;
        if(boolean) break;   //如果是有序列表,不用再排序遍历了，跳出循环
    }
    //输出数组
    for (int i = 0; i < sizeof(arr)/4; ++i) {
        printf("%d \n",arr[i]);
    }
    return;
}
