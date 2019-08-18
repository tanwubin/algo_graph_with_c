/*
 * @Copyright: Tanwubin's Tech Research
 * @Descripttion: 
 * @Author: tanwubin
 * @Date: 2019-08-18 14:29:22
 * @version: 1.0
 * @LastEditors: tanwubin
 * @LastEditTime: 2019-08-18 16:31:42
 */
#include <stdio.h>
/**
 * @description: 使用分而治之思想，找到列表中的最大值
 * @param {type} 
 * @return: 
 */

int getMax(int a,int b)
{
    return a<b?b:a;
}

int findTheMaxNum(int arr[],int begin,int end)
{
    // 基线条件
    if (end - begin + 1 == 1)
    {
        return getMax(arr[begin],arr[end]);
    }else if (end - begin + 1 == 2)
    {
        return getMax(arr[begin],arr[end]);
    }else
    {
        // 分而治之
        int mid = begin + (end - begin)/2;
        int left = findTheMaxNum(arr,begin,mid);
        int right = findTheMaxNum(arr,mid+1,end);
        return left < right ? right:left;
    }
}

void findTheMaxNumTest()
{
    printf("findTheMaxNumTest begin======>\n");
    int a[] = {1,22,56,2,34,78,93,2,106};
    int maxnum = findTheMaxNum(a,0,sizeof(a)/sizeof(a[0])-1);
    printf("The Max Num is %d\n",maxnum);
}