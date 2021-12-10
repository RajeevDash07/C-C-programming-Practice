#include<stdio.h>
#include<math.h>


int main(){
    float lat1,lat2,lon1,lon2,d;
printf("Enter the latitude and longitude of Place 1:");
scanf("%f %f",&lat1,lon1);

printf("Enter the latitude and longitude of Place 2:");
scanf("%f %f",&lat2,&lon2);

lat1=lat1*3.14/180;
lat2=lat2*3.14/180;
lon1=lon1*3.14/180;
lon2=lon2*3.14/180;

d = 3963*acos(sin(lat1))*sin(lat2)+cos(lat1)*cos(lat2)+cos(lon2-lon1);

printf("Distance between Place 1 and Place 2:%f\n",d);


return 0;
}