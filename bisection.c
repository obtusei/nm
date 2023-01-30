#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// #define fun(x) (x * x - 4 * x - 10.0)
#define fun(x) cos(x) - x *exp(x)
// #define fun(x) (x * x * x - 2 * x - 5.0)

int main()
{
  int i, steps = 1;
  float x1, x2, fm, f1, f2;
  float xm, err;
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
  scanf("%f %f", &x1, &x2);

  printf("\ni\tx1\t\tx2\t\txm\t\tf(x1)\t\tf(xm)\t\tf(x1)*f(xm)    \terror|x2-x1|");
  do
  {
    f1 = fun(x1);
    f2 = fun(x2);
    xm = (x1 + x2) / 2;
    fm = fun(xm);
    err = fabs(x2 - x1);
    printf("\n%d\t%f\t%f\t%f\t%f\t%f\t%.10f\t%f", steps, x1, x2, xm, f1, fm, f1 * fm, err);
    if ((fm * f1) < 0)
      x2 = xm;
    else
      x1 = xm;
    steps++;
  } while (err > 0.0001);
  printf("\n The root is %f", xm);
}