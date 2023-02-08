//
// Created by yzn__ on 2022/12/1.
//
//回文字符串
#include <stdio.h>
#include <string.h>
void huiwen(){
    char str[64];
    printf("please input a str length 64 \n");
//    scanf("%s",str);
    gets(str);
    int size = strlen(str);
    if (size==1){ printf("%s is huiwen \n",str);return;}
    int boolean =1;
    for (int i = 0; i < size/2; ++i) {
        if(str[i]!=str[size-i-1]){boolean=0;break;}
    }
    if(boolean){printf("%s is wenhui \n",str);}
}