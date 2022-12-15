#include <stdio.h>

int sum(int a[], int n, int i, int running_sum)
{
    if (i < n)
    {
        running_sum += a[i];
        sum(a, n, i + 1, running_sum);
    }
    else
    {
        return running_sum;
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

    int s = sum(arr, n, 0, 0);

    printf("Sum: %d", s);

    return 0;
}