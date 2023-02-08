//
// Created by yzn__ on 2022/12/1.
//
//水仙花数
#include <stdio.h>
#include <math.h>
void shuixianhua(){
    for (int i = 100; i <= 1000; ++i) {
        int temp = i%100;
        int ge = temp%10;
        int shi = (temp-ge)/10;
        int bai = (i-temp)/100;
        if((int)pow(ge,3)+(int) pow(shi,3)+(int) pow(bai,3) == i){
            printf("%d   \n",i);}
    }
}
