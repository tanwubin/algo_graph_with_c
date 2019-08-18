/*
 * @Copyright: Tanwubin's Tech Research
 * @Descripttion: 快速排序，从小到大排列
 * @Author: tanwubin
 * @Date: 2019-08-18 16:45:16
 * @version: 1.0
 * @LastEditors: tanwubin
 * @LastEditTime: 2019-08-18 18:47:48
 */
#include<stdio.h>

void swap(int a[],int low,int high)
{
    int tmp = a[high];
    a[high] = a[low];
    a[low] = tmp;
}

int partion(int arr[],int low,int high)
{
    int base = arr[low];
    int l = low;
    int r = high;
    while (l < r)
    {
        // l<r 防止已经是从小到大，r--一直进行下去
        while(l<r && arr[r] >= base)
            r--;
        swap(arr,l,r);
        while (l<r && arr[l] <= base)
            l++;
        swap(arr,l,r);
    }
    arr[l] = base;
    return l;
    
}

void quicksort(int arr[],int begin,int end)
{
    if(begin<end){
        int mid = partion(arr,begin,end);
        quicksort(arr,begin,mid);
        quicksort(arr,mid+1,end);
    }
}

void quicksort_test()
{
    int a[] = {3,4,2,5};
    quicksort(a,0,sizeof(a)/sizeof(a[0])-1);
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}