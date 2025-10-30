#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        int sum=0;
        
        for(int i=0;i<k-1;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<-1*sum<<endl;

    }
    return 0;
}