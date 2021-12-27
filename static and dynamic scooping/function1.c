#include<stdio.h>

int main(){
    int a=10,b=20;
    int fun();
    {
        int a=5;
        {
            int c;
            c=b/a;
            printf("%d",c);
        }
    }
return 0;
}