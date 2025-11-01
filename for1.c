#include <stdio.h>

int main()
{
  int lim;
  printf("Digite o valor maximo que deseja: ");
  scanf("%d", &lim);
  for (int i = 0; i <= lim; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d ", i);
    }
  }
  return 0;
}