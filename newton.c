#include <stdio.h>
// #include <conio.h>
#include <math.h>
#include <stdlib.h>

#define f(x) (x * x * x - 3 * x * x + 2 * x - 10.0)
#define g(x) (3 * x * x - 6 * x + 2)

int main()
{
  float x0, x1, f0, f1, g0, e;
  int step = 1, N, i;
  printf("x");
  for (i = -3; i <= 3; i++)
  {
    printf("\t%d", i);
  }
  printf("\nf(x)");
  for (i = -3; i <= 3; i++)
  {
    printf("\t%.2f", f(i));
  }
  printf("\nEnter initial guess:\n");
  scanf("%f", &x0);
  printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\terror\n");
  do
  {
    f0 = f(x0);
    g0 = g(x0);
    x1 = x0 - f0 / g0;
    e = fabs(x1 - x0);
    printf("%d\t\t%f\t%f\t%f\t%f\t%f\n", step, x0, f0, g0, x1, e);
    x0 = x1;
    step++;

  } while (e > 0.0001);

  printf("\nRoot is: %f", x1);
  // getch();
  return 0;
}