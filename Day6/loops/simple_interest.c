#include<stdio.h>


int main(){
  int p,n,count;
  float r,si;
  count = 1;
  while(count<=3){
      printf("Enter values of p,n and r\n");
      scanf("%d %d %f",&p,&n,&r);
      si = p*n*r/100;
      printf("Simple interest = Rs.%f\n",si);
      count = count + 1;
  }

return 0;
}