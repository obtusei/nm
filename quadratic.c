
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{

  float a, b, c;
  float r1, r2;
  printf("Enter the value of a,b,c:");
  scanf("%f %f %f", &a, &b, &c);
  float dis = b * b - 4 * a * c;
  if (dis == 0)
  {
    printf("\n Roots are real and equal");
    r1 = -b / (2 * a);
    r2 = r1;
    printf("\n Roots are %f and %f", r1, r2);
  }
  else if (dis > 0)
  {
    printf("\n Roots are real and unequal huncha");
    r1 = (-b - sqrt(dis)) / (2 * a);
    r2 = (-b + sqrt(dis)) / (2 * a);
    printf("\n Roots are %f and %f", r1, r2);
  }
  else
  {
    printf("\n Roots are imaginary and unequal");
    float rp = -b / (2 * a);
    float ip = sqrt(dis) / 2 * a;
    printf("Roots are %f+i%f and %f-%f", rp, ip, rp, ip);
  }
  getch();
  return 0;
}