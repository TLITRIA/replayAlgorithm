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

#endif