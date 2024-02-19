//Max
#include <stdio.h>
int main()
{
    int n,ar[100];
    printf("Enter the number of elements you want to input: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (ar[0] < ar[i])
        {
            ar[0] = ar[i];
        }
    }
    printf("The greater number is %d", ar[0]);
    return 0;
}
