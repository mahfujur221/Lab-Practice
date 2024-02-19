//Binary search
#include <stdio.h>
int binaryIter(int ar[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (ar[mid] == key)
        {
            return 1;
        }
        else if (ar[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}
int binaryRe(int ar[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (ar[mid] == key)
        {
            return 1;
        }
        else if (ar[mid] < key)
        {
            return binaryRe(ar, mid + 1, high, key);
        }
        else
        {
            return binaryRe(ar, low, mid - 1, key);
        }
    }
    return 0;
}
int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int resultIter = binaryIter(ar, n, a);
    int resultRe = binaryRe(ar, 0, n - 1, a);
    if (resultIter || resultRe)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}


