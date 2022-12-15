#include <stdio.h>

void linear(int a[], int n, int i, int key)
{
    if (i < n)
    {
        if (a[i] == key)
        {
            printf("Key found at index: %d", i);
            return;
        }
        else
        {
            linear(a, n, i + 1, key);
        }
    }
    else
    {
        printf("Key not found.");
        return;
    }
}

void binary(int a[], int start, int end, int key)
{
    if (start <= end)
    {
        int middle = (start + end) / 2;
        if (key == a[middle])
        {
            printf("Key found at index: %d", middle);
            return;
        }
        else if (key > a[middle])
        {
            start = middle + 1;
            binary(a, start, end, key);
        }
        else
        {
            end = middle - 1;
            binary(a, start, end, key);
        }
    }
    else
    {
        printf("Key not found.");
        return;
    }
}

int main()
{
    int arr[100], n, key;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements (in ascending order if binary search): ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to find: ");
    scanf("%d", &key);

    int mode;
    printf("1) Linear Search\n2) Binary Search\n");
    printf("Enter mode: ");
    scanf("%d", &mode);

    // Linear Search
    if (mode == 1)
    {
        printf("\nUsing Linear Search\n");
        linear(arr, n, 0, key);
    }

    // Binary Search
    else if (mode == 2)
    {
        printf("\nUsing Binary Search\n");
        binary(arr, 0, n - 1, key);
    }

    return 0;
}