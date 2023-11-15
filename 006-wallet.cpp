# include <bits/stdc++.h>
 using namespace std;
 int main(){
    int m,f,d;
    cin>>m>>f>>d;

    if (m<f && m<d){
        cout<<"Monnei"<<endl;
    }
    else if (f<m && f<d){
        cout<<"Fjee"<<endl;
    }
    else {
        cout<<"Dolladollabilljoll"<<endl;
    }
    return 0;
 }