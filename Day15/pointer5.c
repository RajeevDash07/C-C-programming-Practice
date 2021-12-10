#include<stdio.h>

int main(){
    int A[] = {2,4,5,8,1};
    int i;
    int *p = A;
    for (i=0; i < 5; i++)
    {
        printf("Address =%d\n",&A[i]);
        printf("Address=%d\n",A+1); 
        printf("Value=%d\n",A[i]); 
        printf("Value=%d\n",*(A+1)); 
    }
    
return 0;
}