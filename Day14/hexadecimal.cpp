#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y = n%10;
        ans+=x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n){
        int ans=0;
    int x=1;
    while(n>0){
        int y = n%10;
        ans+=x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimalToDecimal(string n){
    int ans = 0;
    int x=1;
    int s = n.size(); 

    for(int i=s-1; i>=0; i--){
        if
    }
}
int main(){
    string n;
    cin >> n;

    cout << hexadecimalToDecimal(n)<<endl;

return 0;
}