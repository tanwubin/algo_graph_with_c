/*
 * @Copyright: Tanwubin's Tech Research
 * @Descripttion: 
 * @Author: tanwubin
 * @Date: 2019-08-17 16:28:41
 * @version: 1.0
 * @LastEditors: tanwubin
 * @LastEditTime: 2019-08-17 17:34:06
 */
#include <stdio.h>
#include "algolib.h"
int main()
{
    int test[5] = {1,2,3,4,5};
    int position = binary_search(test, 5, 0);
    if(position != -1){
        printf("find position is %d\n",position);
    }else
    {
        printf("not find");
    }
    return position;
}