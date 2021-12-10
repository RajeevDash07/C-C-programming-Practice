#include<stdio.h>

void leapyear(int);
int main(){
    int year;
 printf("Enter the year:\t");
 scanf("%d",&year);
 leapyear(year);//function Call
return 0;
}
void leapyear(int year){
    if(year%4==0 && year%100 !=0||year%400==0)
    printf("%d is a leap year",year);
    else
    printf("%d is not a Leap Year",year);
}