#include <stdio.h>
#include "common.h"
/* O(n) */

int foreachSearchIsExist(int *array, int length, int findNum, int *pos)
{
    JUDGE_PTR_NULL(array);
    
    int flag = 0;
    for (int idx = 0; idx < length; idx++)
    {
        if (array[idx] == findNum)
        {
            *pos = idx;
            flag = 1;
        }
    }
    /* 如果没找到 */
    if (flag == 0)
    {
        *pos = -1;
    }
    
    return *pos;
}


int main()
{
    int *array = arrayInit();
    int findNum = array[rand() % DEFAULT_SIZE];
    int pos = 0;
    foreachSearchIsExist(array, DEFAULT_SIZE, findNum, &pos);

    printArray(array, DEFAULT_SIZE);
    printf("findNum:%d\tpos:%d\n", findNum, pos);

    return ON_SUCCESS;
}
