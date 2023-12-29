#include <stdio.h>

#define BUFFER_SIZE 10

#define PRINT(buffer)\
for (int idx = 0; idx < BUFFER_SIZE; idx++)\
    {\
        printf("%d\t", buffer[idx]);\
    }\
    printf("\n");\

int main()
{
    int buffer[BUFFER_SIZE] = {61, 12, 44, 25, 3, 15, 11, 38, 20, 14};



    int pos = 0;
    int minPos = 0;
    int tmpNum = 0;
    for (pos = 0; pos < BUFFER_SIZE - 1; pos++)
    {
        minPos = pos + 1;
        for (int idx = pos + 1; idx < BUFFER_SIZE; idx++)
        {
            if (buffer[minPos] > buffer[idx])
            {
                minPos = idx;
            }
        }
        if (buffer[pos] > buffer[minPos])
        {
            tmpNum = buffer[minPos];
            buffer[minPos] = buffer[pos];
            buffer[pos] = tmpNum;
        }
        // PRINT(buffer);
    }






    return 0;
}