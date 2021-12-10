#include<stdio.h>


int main(){
    float fr,cent;
    printf("Enter the temperature(F):\n");
    scanf("%f",&fr);
    
    cent = 5.0/9.0 *(fr-32);
    
    printf("Temperature in centigrade =%f\n",cent);

return 0;
}