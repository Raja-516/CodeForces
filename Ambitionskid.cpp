#include<Bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=INT_MAX;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        x=min(abs(k),x);
    }
    cout<<x<<endl;
    return 0;
}