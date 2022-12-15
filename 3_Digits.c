#include <stdio.h>

int digits(int n, int count)
{
    if (n > 0)
    {
        count++;
        digits(n / 10, count);
    }
    else
    {
        return count;
    }
}

int main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    int dig = digits(n, 0);

    printf("No. of digits: %d\n", dig);

    return 0;
}