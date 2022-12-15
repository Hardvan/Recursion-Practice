#include <stdio.h>

void display(int a[], int n, int i)
{
    if (i < n)
    {
        printf("%d ", a[i]);
        display(a, n, i + 1);
    }
    else
    {
        return;
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

    display(arr, n, 0);

    return 0;
}