#include<stdio.h>

int linearSearch(int array[] , int n, int key)
{
    for(int i=0 ; i<n ; i++)
    {
        if (array[i] == key)
        {
            return i;
        }

    }
    return 69;
}

int main()

{
  int arr[100], size, key, i, index;
  printf("Size: ");
  scanf("%d", &size);

  printf("elements :");

  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);

  printf("Key :");
  scanf("%d", &key);


  for (index = 0; index < size; index++)
    if (arr[index] == key)
      break;

  if (index < size)
    printf("found on index %d", index);
  else
    printf("not found");

  return 0;
}

