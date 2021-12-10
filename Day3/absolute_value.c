#include<stdio.h>


int main(){
    int no;
    
    printf("Enter any number:\n");
    scanf("%d",&no);

    if (no<0)
    {
        no=no*-1;
    }
    printf("The absolute value of the number is %d\n",no);
    


return 0;
}