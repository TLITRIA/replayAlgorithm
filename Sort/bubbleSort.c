#include <stdio.h>
#include "common.h"

int swap(int *swapA, int *swapB)
{
    JUDGE_PTR_NULL(swapA);
    JUDGE_PTR_NULL(swapB); 
    int tmp = *swapA;
    *swapA = *swapB;
    *swapB = tmp;
    return ON_SUCCESS;
}

int bubbleSort(int *array, int length)
{ /* todo 优化 */
    JUDGE_PTR_NULL(array);
    for (int pos = DEFAULT_SIZE; pos > 1; pos--) /* pos是每次“泡”浮起来的位置 */
    {
        for (int idx = 0; idx < pos - 1; idx++)
        {
            if (array[idx] > array[idx + 1])
            {
                swap(&array[idx], &array[idx + 1]);
            }
        }
    }
    return ON_SUCCESS;
}


int main()
{
    int *array = arrayInit();
    JUDGE_MALLOC_ERROR(array);
    // printArray(array, DEFAULT_SIZE);
    bubbleSort(array, DEFAULT_SIZE);
    printArray(array, DEFAULT_SIZE);



    return 0;
}