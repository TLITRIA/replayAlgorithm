#include <stdio.h>
#include "common.h"

/* 相较于冒泡排序减少了交换次数 */
/* 时间复杂度为O(n) */

int selectSort(int *array, int length)
{
    int ret = 0;
    int minValue = 0;
    int minIndex = 0;

    for (int pos = 0; pos < length; pos++)
    {
        minValue = array[pos];
        for (int begin = pos + 1; begin < length; begin++)
        {
            if (minValue > array[begin])
            {
                minValue = array[begin];
                minIndex = begin;
            }
        }

        if (array[pos] > minValue)
        {
            array[minIndex] = array[pos];
            array[pos] = minValue;
        }
    }
    return ret;
}

int main()
{
    int *array = arrayInit();
    JUDGE_MALLOC_ERROR(array);

    selectSort(array, DEFAULT_SIZE);
    
    printArray(array, DEFAULT_SIZE);
    return 0;
}


