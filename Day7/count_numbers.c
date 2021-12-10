#include<stdio.h>


int main(){
 int pos,neg,zero,num;
 char ans = 'y';
 pos = neg = zero = 0;
 while (ans=='y'||ans == 'y'){
     printf("Enter a number:\n");
     scanf("%d",&num);
     if(num == 0)
     zero++;
     if(num>0)
     pos++;
     if(num<0)
     neg++;
     fflush(stdin);
     printf("Do you want to continue?\n");
     scanf("%c",&ans);
 }
 printf("You entered %d positive number(s)\n",pos);
  printf("You entered %d negative number(s)\n",neg);
   printf("You entered %d zeros(s) \n",zero);

return 0;
}