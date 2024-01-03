#include <stdio.h>



int main()
{
    int array[] = {54, 78, 100, 89, 127, 128};
    int length = sizeof(array) / sizeof(array[0]);

    int min = array[0];
    int minIndex = 0;

    for (int pos = 0; pos < length; pos++)
    {
        min = array[pos];
        for (int begin = pos + 1; begin < length; begin++)
        {
            if (min > array[begin])
            {
                min = array[begin];
                minIndex = begin;
            }
        }

        if (array[pos] > min)
        {
            array[minIndex] = array[pos];
            array[pos] = min;
        }
    }
    

    for (int idx = 0; idx < length; idx++)
    {
        printf("%d\n", array[idx]);
    }
    return 0;
}


