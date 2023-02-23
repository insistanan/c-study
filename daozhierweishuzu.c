//
// Created by yzn__ on 2022/12/2.
//倒置二维数组
//
#include <stdio.h>
void inverse1(int n,int m,int (*p)[m]){
    //双指针扫描交换
    for (int i = 0; i < n/2; ++i) {
        // n是行，因为双指针交换，所以除二，
        // 但是碰到行n为奇数情况，会留下最中间一行没有扫描到，于是在底下进行处理
        for (int j = 0; j < m; ++j) {
            //交换列m
            p[i][j] = p[i][j] + p[n-1-i][m-1-j];
            p[n-1-i][m-1-j] = p[i][j] - p[n-1-i][m-1-j];
            p[i][j] = p[i][j] - p[n-1-i][m-1-j];
        }
    }
    switch (n%2) {
        case 1://奇数
            //处理最中间一行，交换头尾列
            for (int i = 0; i < m/2; ++i) {
                //m要除二，因为这里也是头尾互相交换
                //这里不用处理奇偶列，遗漏中间的一个数不用交换
                p[n/2][i] = p[n/2][i] + p[n/2][m-1-i];
                p[n/2][m-1-i] = p[n/2][i] - p[n/2][m-1-i];
                p[n/2][i] = p[n/2][i] - p[n/2][m-1-i];
            }
            break;
    }
    //打印
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d, ",p[i][j]);
        }
        printf("\n");
    }
}

void inverse2(int n, int m,int *p){
    int len = n*m;
    //头尾扫描交换
    for (int i = 0; i < len/2; ++i) {
        *(p+i) = *(p+i) + *(p+len-1-i);
        *(p+len-1-i) = *(p+i) - *(p+len-1-i);
        *(p+i) = *(p+i) - *(p+len-1-i);
    }
    //打印
    for (int i = 0; i < len; ++i) {
        printf("%d, ",*(p+i) );
        if( (i+1)%m == 0) printf("\n");
    }
}
