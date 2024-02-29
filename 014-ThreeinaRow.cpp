#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,r=0;
    cin>>n;
    m = cbrt(n);
    for(int i=1 ; i<=m;i++){
        long long k = i * (i+1)*(i+2);
        if (k<n){
            r++;
        }

    }
    cout<<r;
    return 0;
}