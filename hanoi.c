//
// Created by yzn__ on 2022/12/1.
//
//汉诺塔
#include <stdio.h>
void move(int n,char start,char end){
    printf("the %d from %c to %c,\n",n,start,end);
}

void hanoi(int n,char a, char b,char c){
    if(n <= 0) return;
    else if (n == 1) {
        move(n,a,c);
    }
    else{
        hanoi(n-1,a,c,b);
        move(n,a,c);
        hanoi(n-1,b,a,c);
    }
}
//汉诺塔简化
void hanoijian(char a, char b, char c, int n){
    if(n == 0) return;
    hanoijian(a, c ,b, n - 1);
    printf("第%d个圆盘：%c --> %c\n", n, a, c);
    hanoijian(b, a, c, n - 1);
}