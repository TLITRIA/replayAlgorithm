#include <stdio.h>

/* 相较于冒泡排序减少了交换次数 */
/* 时间复杂度为O(n) */

int printArray(int *array, int length)
{
    int ret = 0;
    for (int idx = 0; idx < length; idx++)
    {
        printf("array[%d]:%d\n", idx, array[idx]);
    }
    return ret;
}

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
    int array[] = {54, 78, 100, 89, 127, 128};
    int length = sizeof(array) / sizeof(array[0]);

    selectSort(array, length);
    
    printArray(array, length);
    return 0;
}


