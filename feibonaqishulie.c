//
// Created by yzn__ on 2022/12/1.
//
//斐波那契数列解法   递归解法
int feibo1(int index){
    if (index<=2) {return 1;}
    else {
        return feibo1(index-2)+ feibo1(index-1);
    }
}
//斐波那契数列解法   数组解法
int feibo2(int index){
    int target;
    if(index <= 0){return 0;}
    else if(index <= 2) {return 1;}
    else{
        target = index;
        int dp[target];
        dp[0]= dp[1] = 1;
        for (int i = 2; i < target; ++i) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[target-1];
    }
}
//斐波那契数列解法   循环解法
int feibo3(int index){
    int a = 1,b = 1,c;
    if(index<=0){return 0;}
    if(index<=2){return 1;}
    for (int i = 2; i < index; ++i) {
        c = a + b;
        a = b,
                b = c;
    }
    return c;
}