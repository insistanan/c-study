//
// Created by yzn__ on 2022/12/2.
//
#include <stdio.h>

void mergearray(int arr1[],int l1,int arr2[],int l2){
    int len1 = l1-1;
    int len2 = l2-1;
    int len = len1 +len2 + 2;
    int arr[len];
    for (int i = len-1; i >= 0 ; --i) {
        //如果数组1的值遍历完了，不用判断了，直接将数组2的值添加到合并数组的末尾
        if( len1 <0 ){
            *(arr+i) = *(arr2+len2--);
        }
        //如果数组2的值遍历完了，不用判断了，直接将数组1的值添加到合并数组的末尾
        else if( len2 <0 ){
            *(arr+i) = *(arr1+len1--);
        }
        else{
            //比较数组1和数组2的末尾元素，将大的数添加到合并数组的末尾
            *(arr+i) = *(arr1+len1) <= *(arr2+len2) ? *(arr2+len2--) : *(arr1+len1--);
        }
    }
    for (int i = 0; i < len; ++i) {
        printf("%d, ",*(arr+i));
    }
}