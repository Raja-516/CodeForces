#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int mon,ch;
        cin>>mon>>ch;
        int rem=mon-ch;
        if(mon % 2 == 0 || rem %2 ==0){
            cout<<"YES"<<endl;
        }
        else if(mon%ch==0){
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}