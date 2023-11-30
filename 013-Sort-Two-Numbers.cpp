
# include <bits/stdc++.h> 

using namespace std; 

int main() { 
    int a,b,x=0;
    cin>>a>>b;
   if (a>b){
    x=a;
    a=b;
    b=x;
    
   }
   cout<<a<<" "<<b;
    return 0; 
}