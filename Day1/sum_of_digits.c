#include<stdio.h>


int main(){
    int num,a,n;
    int sum = 0;
    
    printf("Enter a 5 digit number (less than 32767):");
    scanf("%d",&num);
    a = num%10; 
    n= num/10;
    sum= sum+a;
   
    a = n%10; 
    n= n/10;
    sum= sum+a;
   
    a = n%10; 
    n= n/10;
    sum= sum+a;

    a = n%10; 
    n= n/10;
    sum= sum+a;

    a = n%10; 
    n= n/10;
    sum= sum+a;   

    printf("Sum of the 5 digits of %d is %d",num,sum); 
    

return 0;
}