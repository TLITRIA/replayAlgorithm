#include <stdio.h>

#define BUFFER_SIZE 10

#define PRINT(buffer)\
for (int idx = 0; idx < BUFFER_SIZE; idx++)\
    {\
        printf("%d\t", buffer[idx]);\
    }\
    printf("\n");\

int main()
{ /* 判空todo */
    int buffer[BUFFER_SIZE] = {61, 12, 44, 25, 3, 15, 11, 38, 20, 14};
    PRINT(buffer);
#if 0
    /* 初始化 */
    int tmpNum = 0;     //交换数据
    int pos = 0;        //比较的数据
    int sortedPos = 0;  //已排好的数列位置的最大值
    int len = sizeof(buffer) / sizeof(buffer[0]);

    
    /*  */
    if (len == 1)
    {
        return 0;
    }

    for (sortedPos = 0; sortedPos < len - 1; sortedPos++)    
    {
        for (int idx = 0; idx <= sortedPos; idx++)
        {
            if (buffer[idx] > buffer[sortedPos + 1])
            {
                /* 多个数据后移 */
                tmpNum = buffer[sortedPos + 1];
                for (int jdx = sortedPos + 1; jdx > idx; jdx--)
                {
                    buffer[jdx] = buffer[jdx - 1];
                }
                buffer[idx] = tmpNum;
                break;
            }
        }
        PRINT(buffer);
    }   


    PRINT(buffer);
#else
    int val = 0;
    int len = sizeof(buffer) / sizeof(buffer[0]);
    for (int idx = 1; idx < len; idx++)
    {   
        val = buffer[idx];
        for (int jdx = idx; jdx >= 0; jdx--)
        {
            if (buffer[jdx - 1] > val)
            {
                buffer[jdx] = buffer[jdx - 1];
            }
            else 
            {
                buffer[idx] = val;
                break;
            }            
        }
        PRINT(buffer);
    }


#endif





    return 0;
}