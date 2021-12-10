#include<stdio.h>
 int fact(int);

int main(){
int num;
int factorial;
printf("Enter a Number:\n");
scanf("%d",&num);
factorial=fact(num);
printf("Factorial of %d=%ld\n",num,factorial);   

return 0;
}
int fact(int num){
    int i;
    int factorial=1;
    for (i=1;i<=num;i++){
        factorial=factorial*i;
    }
    return (factorial);
}