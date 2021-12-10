#include<stdio.h>


int main(){
    int x,y,r;
    int dis,d;

    printf("\nEnter radius of circle & coordinates of point(x,y):");
    scanf("%d %d %d",&r,&x,&y);
    dis = x*x + y*y;
    d = r*r;
    if (dis==d)
    {
        printf("Point is on the circle\n");
    }
    else{
    if(dis>d){
        printf("POint is outside the circle\n");
    }
    else{
        printf("Point is inside the circle\n");
    }
    }
    

return 0;
}