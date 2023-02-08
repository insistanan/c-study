//
// Created by yzn__ on 2022/12/1.
//
void quicksort(int arr[],int leftborder,int rightborder){
    if(leftborder>=rightborder) return;  //函数出口
    int base = arr[leftborder];   //将第一位设为基准
    int l = leftborder;   //左指针
    int r = rightborder;  //右指针
    while (l < r){
        //排小的
        while (l < r && arr[r] >= base ){
            //当右边的数大于基准时，不需要排序，则右边界减1
            r--;
            // 当这个循环不满足时，就意味着右边的数小于基准，需要排序，于是在底下紧接着把这个值排到左边
         }
        //加个判断，左边界小于右边界
        if (l<r)  arr[l] = arr[r];
        //交换顺序后，右指针不动（r--了，也就是排了序了），左指针开始走，把左边大的排到右边
        //排大的
        while (l < r && arr[l] <= base ){
            l++;
        }
        if (l<r)  arr[r] = arr[l];
    }
    //上面排序完了，基准到了中间，现在l和r相同
    arr[l] = base;
    //分而治之，递归
    quicksort(arr,leftborder,r-1);
    quicksort(arr,l+1,rightborder);
}
