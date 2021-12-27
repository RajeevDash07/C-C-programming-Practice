#include<stdio.h>
#include <stdlib.h>
int func (int,int);
int main(){
    int sum= func (3,4);
    printf("%d",sum);
return 0;
}

int func (int a,int b)
{
    int c;
    c=a+b;
    return c;
}