#include <stdio.h>
#include "common.h"


/*  */
int quickSort(int *array, int start, int end)
{
    if (start > end) /* 退出判定 */
    {
        return ON_SUCCESS;
    }
    
    int left = start;
    int right = end;
    int baseValue = array[left];
    
    /* 将所有大于base的值移到右边 将所有小于base的值移到左边 */
    while (left < right)
    {
        /* 左索引固定，从右向左找比base小的值 */
        while (left < right && baseValue <= array[right])
        {
            right--;
        }
        /* 2(base) 3 5 1(right) 5 */
        array[left] = array[right];
        array[right] = baseValue;
        /* 右索引固定，从左向右找比base大的值 */
        while (left < right && baseValue >= array[left])
        {
            left++;
        }
        array[right] = array[left];
        array[left] = baseValue;
    }
    
    quickSort(array, start, left - 1);
    quickSort(array, left + 1, end);

    return ON_SUCCESS;
}


int main()
{
    int *array = arrayInit();
    JUDGE_MALLOC_ERROR(array);
    quickSort(array, 0, DEFAULT_SIZE - 1);




    printArray(array, DEFAULT_SIZE);


















    return 0;
}


