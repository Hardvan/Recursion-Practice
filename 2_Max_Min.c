#include <stdio.h>

int max(int a[], int n, int i, int cur_max)
{
    if (i < n)
    {
        if (a[i] > cur_max)
        {
            cur_max = a[i];
        }
        max(a, n, i + 1, cur_max);
    }
    else
    {
        return cur_max;
    }
}

int min(int a[], int n, int i, int cur_min)
{
    if (i < n)
    {
        if (a[i] < cur_min)
        {
            cur_min = a[i];
        }
        min(a, n, i + 1, cur_min);
    }
    else
    {
        return cur_min;
    }
}

int main()
{
    int arr[100], n;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxim = max(arr, n, 0, arr[0]);
    int minim = min(arr, n, 0, arr[0]);

    printf("Max: %d\nMin: %d\n", maxim, minim);

    return 0;
}