#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define DEFAULT_SIZE 10

/* 相较于冒泡排序减少了交换次数 */
/* 时间复杂度为O(n) */

int *arrayInit()
{
    int ret = 0;
    int *array = malloc(sizeof(int) * DEFAULT_SIZE);
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



int main()
{
    int *array = arrayInit();
    printArray(array, DEFAULT_SIZE);


    return 0;
}


