#include<stdio.h>


int main(){
    float cp,sp,p,l;
    printf("Enter cost price and selling price:\n");
    scanf("%f %f",&cp,&sp);
    p = sp-cp;
    l= cp-sp;
    if (p>0)
    {
        printf("The seller made a profit of Rs.%f\n ",p);
    }

    if (l>0)
    {
        printf("The seller made a loss of Rs.%f\n ",l);
    }

    if (p==0)
    {
        printf("The seller made no profit and no loss\n ");
    }
    

return 0;
}