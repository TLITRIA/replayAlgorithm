#include <stdio.h>


int printArray(int *array, int length)
{
    int ret = 0;
    for (int idx = 0; idx < length; idx++)
    {
        printf("array[%d]:%d\n", idx, array[idx]);
    }
    return ret;
}

int insertSort(int *array, int length)
{
    int ret = 0;
    int num = 0;
    for (int pos = 1; pos < length; pos++)
    {
        num = array[pos];
        for (int idx = pos; idx > 0; idx--)
        {
            if (array[idx - 1] > num)
            {
                array[idx] = array[idx - 1];
            }
            else
            {
                array[idx] = num;
                break;
            }
        }
    }
    return 0;
}

int insertSort02(int *array, int length)
{
    int ret = 0;
    int cur = 0;
    int copyNum = 0;
    for (int idx = 1; idx < length; idx++)
    {
        cur = idx;
        copyNum = array[idx];
        while (cur > 0 && copyNum < array[cur - 1])
        {
            array[cur] = array[cur - 1];
            cur--;
        }
        array[cur] = copyNum;
    }
    return 0;
}


int main()
{
    int array[] = {54, 78, 100, 89, 127, 128};
    int length = sizeof(array) / sizeof(array[0]);
#if 0
    int num = 0;
    for (int pos = 1; pos < length; pos++)
    {
        num = array[pos];
        for (int idx = pos; idx > 0; idx--)
        {
            if (array[idx - 1] > num)
            {
                array[idx] = array[idx - 1];
            }
            else
            {
                array[idx] = num;
                break;
            }
            
        }
    }
#else
    insertSort02(array, length);
#endif




    printArray(array, length);






    return 0;
}