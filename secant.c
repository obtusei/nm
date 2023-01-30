#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #define fun(x) (x * x - 4 * x - 10.0)
#define fun(x) cos(x) - x *exp(x)
// #define fun(x) (x * x * x - 2 * x - 5.0)

int main()
{
  int i, steps = 1;
  float x0, x1, x2, f0, f1, err;
  printf("x");
  for (i = -3; i <= 3; i++)
  {
    printf("\t%d", i);
  }
  printf("\nf(x)");
  for (i = -3; i <= 3; i++)
  {
    printf("\t%.2f", fun(i));
  }

  printf("\nEnter the initial guess value:");
  scanf("%f %f", &x0, &x1);

  printf("\ni\tx0\t\tx1\t\tf(x0)\t\tf(x1)\t\tx2    \terror|x2-x1|");
  do
  {
    f0 = fun(x0);
    f1 = fun(x1);
    x2 = (x0 * f1 - x1 * f0) / (f1 - f0);
    err = fabs(x2 - x1);
    printf("\n%d\t%f\t%f\t%f\t%f\t%f\t%f", steps, x0, x1, f0, f1, x2, err);
    x0 = x1;
    x1 = x2;
    steps++;
  } while (err > 0.0001);
  printf("\n The root is %f", x2);
}