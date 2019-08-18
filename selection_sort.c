/*
 * @Copyright: Tanwubin's Tech Research
 * @Descripttion: 选择排序算法
 * @Author: tanwubin
 * @Date: 2019-08-18 10:44:42
 * @version: 1.0
 * @LastEditors: tanwubin
 * @LastEditTime: 2019-08-18 13:00:04
 */
#include<stdio.h>
/**
 * @description: 选择排序 o(n*n)
 * @param {int[],int} 
 * @return: int
 */
void selection_sort(int arr[],int count)
{
    for (int i = 0; i < count; i++)
    {
        int smallestindex = i;
        // i后面的元素与i比较，找到最小元素索引后与ijinx交换
        for (int j = i+1; j < count; j++)
        {
            if (arr[j] < arr[smallestindex])
            {
                smallestindex = j;
            }
        }
        // 相等说明后面没有更小的，就不需要交换
        if(smallestindex != i){
            int tmp = arr[i];
            arr[i] = arr[smallestindex];
            arr[smallestindex] = tmp;
        }
    }
}

void selection_sort_test()
{
    printf("selection sort test begin======>\n");
    int a[] = {1,2,3,6,3,4};
    int count = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < count; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    selection_sort(a,count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n"); 
}
