/*
 * @Copyright: Tanwubin's Tech Research
 * @Descripttion: 二分查找算法:输入一个有序字符串数组，找到对应的字符串在数组中的位置
 * @Author: tanwubin
 * @Date: 2019-08-17 16:31:11
 * @version: 1.0
 * @LastEditors: tanwubin
 * @LastEditTime: 2019-08-18 13:00:12
 */
#include<stdio.h>
int binary_search(int pIntArray[], int arrayLen, int targetInt)
{
    int position = arrayLen/2;
    while (pIntArray[position] != targetInt)
    {
        printf("position is %d\n",position);
        if(pIntArray[position] < targetInt){
            position = (position + arrayLen)/2;
            printf("new position is %d\n",position);
            if(position == arrayLen-1 && pIntArray[arrayLen-1] != targetInt){
            return -1;
            }
        }else{
            position = position / 2;
            printf("new position is %d\n",position);
            if(position == 0 && pIntArray[0] != targetInt){
            return -1;
            }
        }
    }
    return position;
}


int binary_search_test()
{
    printf("binary search test begin======>\n");
    int test[5] = {1,2,3,4,5};
    int position = binary_search(test, 5, 0);
    if(position != -1){
        printf("find position is %d\n",position);
    }else
    {
        printf("not find\n");
    }
    return position;
}