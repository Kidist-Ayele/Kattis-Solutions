# include <bits/stdc++.h>
using namespace std;
int main (){
    int n,i;
    double q,y,ave,sum=0.00;
    cin>>n;
    for(i=0;i<n;i++){
        
            cin>>q>>y;
            ave=q*y;
            sum +=ave;
      }
    cout<<fixed<<setprecision(3)<<sum<<endl;

  return 0;

}
// How to use fixed!!!