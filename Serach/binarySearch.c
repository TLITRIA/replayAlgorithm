#include <stdio.h>
#include "common.h"

/* 二分查找 */
/***
 * 适用于已排好序的数据
 * 
 * 10   12:56
 * 
*/
/* return >= 0 就是存在 */
int binarySearchIsExist(int *array, int length, int val)
{
    JUDGE_PTR_NULL(array);
    int start = 0;
    int end = length - 1;
    int mid = 0;
    int flag_notin = -1;
    while (start <= end)
    {
        mid = (start + end) >> 1;
        // printf("mid==>array[%d]=%d\n", mid, array[mid]);
        if (array[mid] == val)
        {
            return mid;
        }
        else if (array[mid] < val)  /* val在mid的右边 */
        {
            start = mid + 1;
        }
        else if (array[mid] > val)
        {
            end = mid - 1;
        }
    }

    return flag_notin;
}

int main()
{
    int *array = arrayInit();
    quickSort(array, 0, DEFAULT_SIZE);
    printArray(array, DEFAULT_SIZE);

    int pos = rand() % DEFAULT_SIZE;
    int val = array[pos];
    int isExist = binarySearchIsExist(array, DEFAULT_SIZE, val);
    printf("val:%d\tisExist:%d\n", val, isExist);
    return ON_SUCCESS;
}