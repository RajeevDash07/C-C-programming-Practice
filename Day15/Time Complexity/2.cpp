#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a=0;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            a = a + rand();
        }
    }

return 0;
}