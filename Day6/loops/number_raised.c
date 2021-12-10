#include<stdio.h>


int main(){
  float x,power;
  int y,i;

  printf("Enter two numbers:\n");
  scanf("%f %d",&x,&y);

  power = i = 1;
  while(i<=y){
      power = power*x;
      i++; 
    
  }
printf("%f to the power %d is %f",x,y,power);
return 0;
}