#include<stdio.h>
#include<math.h>

int main(){
float x,y,r,theta;

printf("Enter x and y co-ordinates:\n");
scanf("%f %f",&x,&y);

r = sqrt(x*x + y*y);

theta = theta * 180/3.14;
printf("r =%f theta=%f\n",r,theta);

return 0;
}