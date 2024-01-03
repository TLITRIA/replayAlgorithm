#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define DEFAULT_SIZE 10

enum STATUS_CODE
{
    MALLOC_ERROR = -2,
    PTR_NULL,
    ON_SUCCESS,
};

#define JUDGE_PTR_NULL(ptr)\
if (ptr == NULL)\
    return PTR_NULL;\

#define JUDGE_MALLOC_ERROR(ptr)\
if (ptr == NULL)\
    return MALLOC_ERROR;\


int *arrayInit()
{
    int ret = 0;
    int *array = (int *)malloc(sizeof(int) * DEFAULT_SIZE);
    if (array == NULL)
    {
        return NULL;
    }
    memset(array, 0, sizeof(int) * DEFAULT_SIZE);

    for (int idx = 0; idx < DEFAULT_SIZE; idx++)
    {
        array[idx] = rand()%100 + 1;
    }
    return array;
}

int printArray(int *array, int length)
{
    int ret = 0;
    for (int idx = 0; idx < length; idx++)
    {
        printf("array[%d]:%d\n", idx, array[idx]);
    }
    return ret;
}


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

#endif