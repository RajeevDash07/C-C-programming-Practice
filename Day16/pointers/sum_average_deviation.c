#include<stdio.h>
#include<math.h>
void stats(int *,int *,double *);
int main(){
    int sum,avg;
    double stdev;
    stats(&sum,&avg,&stdev); //function call by reference
    printf("Sum=%d\n Average=%d\n Standard deviation=%lf",sum,avg,stdev);
return 0;
}
void stats(int *sum,int *avg,double *stdev)
{
    int n1,n2,n3,n4,n5;
    printf("Enter 5 numbers:\n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;//calculate sum
    *avg = *sum/5;//calculate average
    *stdev = sqrt ((pow ((n1 - *avg), 2.0) + pow ((n2 - *avg), 2.0) +  pow ((n3 - *avg), 2.0) + pow ((n4 - *avg), 2.0) +  pow ((n5 - *avg), 2.0)) / 4);

}