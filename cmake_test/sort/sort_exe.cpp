#include <stdio.h>
#include "sort.h"
int one_sort(int *arr, int low, int high)
{
    int base = arr[low];
    while (low < high)
    {
        while (low < high && arr[high] >= base)
        {
            high--;
        }
        arr[low] = arr[high];
        while (low < high && arr[low] <= base)
        {
            low++;
        }
        arr[high] = arr[low];
    }
    arr[low] = base;
    return low;
}
void sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int ret = one_sort(arr, low, high);
        sort(arr, low, ret - 1);
        sort(arr, ret + 1, high);
    }
}
