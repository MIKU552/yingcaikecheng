#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return 0;
}

void maxmin(int* pbuf, int len)
{
    int step, min, max;
    if (len < 2)
        return;
    if (pbuf[0] > pbuf[len - 1])
    {
        swap(&pbuf[0], &pbuf[len - 1]);
    }
    step = len - 2;
    min = 0;
    max = len - 1;
    for (int i = 0; i < step; i++)
    {
        if (pbuf[min] > pbuf[1 + i])
        {
            min = i + 1;
        }
        else if (pbuf[max] < pbuf[1 + i])
        {
            max = i + 1;
        }
    }
    swap(&pbuf[0], &pbuf[min]);
    swap(&pbuf[max], &pbuf[len - 1]);
    maxmin(++pbuf, len - 2);//递归方式
}

int main()
{
    int len;
    int *a, i, m, n, * j;
    printf("please input data num:\n");
    scanf_s("%d", &len);
    a = (int*)malloc(len * sizeof(int));
    printf("please input num:\n");
    for (i = 0; i < len; i++)
        scanf_s("%d", &a[i]);
    /*  j=a;
        i=len;
        while(i>=2)
        {
            maxmin(j,i);
            j++;
            i-=2;
        }
    *///循环方式
    maxmin(a, len);
    for (i = 0; i < len; i++)
        printf("%d ", a[i]);
    free(a);
    return 0;
}