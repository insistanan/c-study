//
// Created by yzn__ on 2022/12/1.
//
#include <stdio.h>
//打印九九乘法表
void jiujiuchengfabiao(){
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j <=i; ++j) {
            printf("%d * %d = %d ",i,j,j*i);
        }
        printf("\n");
    }
}