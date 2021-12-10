#include<stdio.h>

void printStr(char str[]){
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main(){
 //char str[] = {'R','A','J','E','E','V','\0'};
 char str[6]="RAJEEV";
 printStr(str);
return 0;
}