#include <stdio.h>

int main()
{
  int array[100], m, i, n;

  printf("Enter number of elements in array\n");
  scanf("%d", &n);

  printf("Enter %d integer(s)\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  printf("Enter a number to search \n");
  scanf("%d", &m);

  for (i = 0; i < n; i++)
  {
    if (array[i] == m)    
    {
      printf("%d is present in the array .\n", m);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", m);

  return 0;
}


