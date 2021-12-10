#include<stdio.h>
#include<math.h>

int main(){
  int n1,n2,n3;
  float angle,sum;
  printf("Enter angles in degrees:\n");
  scanf("%d",&angle);
  angle = angle*3.14/180;
  sum = pow(sin(angle),2) + pow(cos(angle),2);
  if (sum == 1)
  printf ("sum of squares of sin & cos is equal to 1\n");
  else
  printf ("sum of squares of sin & cos is not equal to 1\n");


return 0;
}