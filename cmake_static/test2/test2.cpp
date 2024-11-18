#include <stdio.h>
#include "sort.h"

int main()
{
    int arr[] = {12, 90, 78, 23, 1, 10, 56};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, 0, (len - 1));
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}