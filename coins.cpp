#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long mon,ch;
        cin>>mon>>ch;
        
        if(mon % 2 == 0 || (mon-ch) %2 ==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}