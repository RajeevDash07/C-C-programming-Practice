#include<stdio.h>


int main(){
    int l,b,r,area1,perimeter;
    float area2,circum;
    printf("Enter Length and breadth of Rectangle:\n");
    scanf("%d %d",&l,&b);
    area1 = l*b;
    perimeter = 2*l + 2*b;
    printf("Area of the rectangle = %d\n",area1);
    printf("The perimetre of the rectangle is %d\n",perimeter);

    printf("Enter the value of the radius of the circle:\n");
    scanf("%d",&r);

    area2= 3.14*r*r;
    circum= 2*3.14*r;
    printf("Area of the circle = %f\n",area2);
    printf("circumference of the circle = %f\n",circum);

return 0;
}