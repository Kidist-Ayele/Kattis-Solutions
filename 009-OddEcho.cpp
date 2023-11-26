#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    string m,all;
    cin>>n;
    for ( i =0;i<n;i++){
        cin>>m;
        if ( i%2==0){     
            all+= m+"\n";  
        }

    }
    cout<<all<<endl;
    
   
}