#include<stdio.h>
#include<stdlib.h>

int main(){
  float hard,carbon,tensile;
  printf("Enter the Hardness of the steel:\n");
  scanf("%f",&hard);
  printf("Enter Carbon content:\n");
  scanf("%f",&carbon);
  printf("Enter Tensile Strength:\n");
  scanf("%f",&tensile);
  
   if(hard>50 && carbon<0.7 && tensile>5600){
       printf("Grade 10\n");
       exit(0);
   }  
   if(hard>50 && carbon<0.7 && tensile<= 5600){
       printf("Grade 9\n");
       exit(0);
   }
   
   if (hard <= 50 && carbon < 0.7 && tensile > 5600)
   {
    printf ("Grade 8\n");
    exit (0);
   }
   if(hard>50 && carbon>=0.7 && tensile>5600){
       printf("Grade 7\n");
       exit(0);
   }
   if (hard > 50 || carbon < 0.7 || tensile > 5600)
   {
       printf ("Grade 6\n");
       exit(0);
    }
    printf ("Grade 5\n");

return 0;
}