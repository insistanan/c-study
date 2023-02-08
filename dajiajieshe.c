//
// Created by yzn__ on 2022/12/1.
//
#include <stdio.h>
//打家劫舍  No.198 打家劫舍**：https://leetcode.cn/problems/house-robber/
int dajie(){
    int arr[] = {2,7,9,8,1}, size = 5, result;
    int dp[size];
    dp[0]=arr[0];
    dp[1]=arr[1]>arr[0]?arr[1]:arr[0];
    for (int i = 2; i < size; ++i) {
        dp[i] = dp[i-1]>(dp[i-2]+arr[i]) ? dp[i-1] :(dp[i-2]+arr[i]);
    }
    result = dp[size-1];
    printf("%d",result);
}