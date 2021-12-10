#include<stdio.h>

void prime(int);

int main(){
int num;
printf("Enter Number:\t");
scanf("%d", &num);
prime(num);//function call
return 0;
}
void prime(int num){
    int i=2;
    printf("Prime factor of %d are:\t",num);
    while(num !=1){
        if(num%i==0)
        printf("%d\t",i);
        else{
            i++;
            continue;

        }
        num=num/i;
    }
}