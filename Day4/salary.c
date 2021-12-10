#include<stdio.h>


int main(){
   char g;
   int yos,qual,sal=0;
   printf("Enter the Gender,Years of service and Qualification(0=G,1=PG):\n");
   scanf("%c%d%d",&g,&yos,&qual);

   if(g=='m' && yos>=10 && qual==1)
   sal = 15000;

   else if ((g=='m' && yos>=10 && qual==0)||(g=='m' && yos<10 && qual==1))
   sal=10000;

   else if (g=='m' && yos<10 && qual==0)
   sal=7000;

   else if (g=='f' && yos>=10 && qual==1)
   sal=12000;

    else if (g=='f' && yos>=10 && qual==0)
    sal=9000;

     else if (g=='f' && yos<10 && qual==1)
     sal=10000;

     else if (g=='f' && yos<10 && qual==0)
     sal=6000;

     printf("Salary of the Employee = %d\n",sal);

     return 0;
}
   


   

   