#include <stdio.h>
void bubble_sort(int arr[], int len) //int len = (int)sizeof(arr) / sizeof(*arr);
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void selection_sort(int arr[], int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
        for (j = i + 1; j < len; j++)     //���Lδ�����Ԫ��
            if (arr[j] < arr[i])    //�ҵ�Ŀǰ��Сֵ
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;//�����Q
            }
}