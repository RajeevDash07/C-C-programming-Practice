#include<stdio.h>


int main(){
   char ch;

   printf("Enter a Character from the keyboard:\n");
   scanf("%c",&ch);

   if(ch>=65 && ch<=90)
   printf("The Character is an uppercase letter\n");

   if(ch>=97 && ch<=122)
   printf("The Character is an lowercase letter\n");
   
   if(ch>=48 && ch<=57)
   printf("The Character is a digit\n");

  

  
return 0;
}