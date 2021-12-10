#include<stdio.h>


int main(){
 int l,b,area,peri;

 printf("Enter Length and Breadth of the Rectangle:\n");
 scanf("%d %d",&l,&b);

 area=l*b;
 peri=2*(l+b);
 
 if (area>peri)
 {
     printf("Area is greater than perimeter\n");
 }
 else{
     printf("area is lesser than the perimeter\n");
 }
 

return 0;
}