#include <stdio.h>

int main()
{
  int i, n;
  float x[10], fx[10], a, x1, x2, f1, f2, y;
  printf("\nEnter the number of data points:");
  scanf("%d", n);
  printf("\nEnter the value of x:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%f", &x[i]);
  }
  printf("\nEnter the value of f(x):\n");
  for (i = 0; i < n; i++)
  {
    scanf("%f", &fx[i]);
  }
  printf("\nTable\n");
  printf("x\t");
  for (i = 0; i < n; i++)
  {
    printf("%f", x[i]);
  }
  printf("\nf(x)\t");
  for (i = 0; i < n; i++)
  {
    printf("%f", fx[i]);
  }
  printf("\nEnter the value of a:\n");
  scanf("%f", &a);
  printf("\nEnter the value of x1 and x2:");
  scanf("%f %f", &x1, &x2);
  printf("\nEnter the value of f(x1) and f(x2):");
  scanf("%f %f", &f1, &f2);
  y = f1 + (a - x1) * ((f2 - f1) / (x2 - x1));
  printf("\nThe answer is %f", y);
  getch();
  return 0;
}