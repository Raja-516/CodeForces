#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int sumi=0;
        for(int i=0;i<x;i++){
            int temp;
            cin>>temp;
            sumi+=temp;
        }
        
        if(sumi%2 ==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}