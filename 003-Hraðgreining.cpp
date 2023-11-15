
#include <bits/stdc++.h> 

using namespace std; 

int main() { 
    string sentence;
    cin>>sentence ;
     string segment = "COV"; 
     int found = sentence.find(segment); 
     if (found != string::npos) { 
        cout << "Veikur!" << endl; 
    } else { 
        cout << "Ekki veikur!" << endl; 
        } 
    return 0; 
}
//use of find and string::npos
