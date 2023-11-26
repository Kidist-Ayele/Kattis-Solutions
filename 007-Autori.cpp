
# include <bits/stdc++.h> 

using namespace std; 

int main() { 
    string name;
    int n;
    cin>>name; 
    string x,result;
    n= name.length();
    
    for(int i =0;i<n-1;i++){
        if(name[i]=='-'){
            x= name[i+1];
            result += x;
        }
       
    }    
    cout<<name[0]<<result;
   
    return 0;

}