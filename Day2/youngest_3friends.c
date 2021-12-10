#include<stdio.h>


int main(){
    int r,s,a,young;
    printf("Enter age of Ram,Shyam and Ajay:\n");
    scanf("%d %d %d",&r,&s,&a);

    if (r<s && r<a)
    {
        printf("Ram is youngest");
    }
    if (s<r && s<a)
    {
        printf("Shayam is youngest");

    }
    else if (a<r && a<s)
    {
        printf("Ajay is youngest");
    }
    

return 0;
}