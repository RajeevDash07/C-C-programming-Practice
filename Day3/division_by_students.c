#include<stdio.h>


int main(){
    float m1,m2,m3,m4,m5,per;
    printf("Enter marks in Five Subjects\n");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);

    per=(m1+m2+m3+m4+m5)*100/500;
     printf("Student get %0.2f percentage.\n",per);

     if(per>60)
        printf("1st division");
    else if (per>=50 && per<=59)
        printf("2nd division");
    else if (per>=40 && per<=49)
        printf("3rd division");
    else if (per<40)
        printf("Fail");    
        

return 0;
}