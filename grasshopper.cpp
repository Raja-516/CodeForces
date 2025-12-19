#include<bits/stdc++.h>
using namespace std;

int main(){
    int i ;
    cin>> i;
    while (i){
        int l;int n;
        cin>>l>>n;
        if((l%n) == 0) {
            cout<<2 <<endl;
            cout<<1<<' '<<l-1<<endl;
        }
        else{
            cout<<1<<endl;
            cout<<l<<endl;
        }
        i--;
    }

    return 0;
}