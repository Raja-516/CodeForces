#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        vector<int> v;
        for(int i=0;i<l;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        int mini=INT_MAX;
        for(int i=0;i<l-1;i++){
            if(v[i]>=0){
                mini=min(mini,v[i+1]-v[i]);
            }
        }
        if(mini<0){
            cout<<0<<endl;
        }
        else{
            cout<<(mini/2)+1<<endl;
        }
    }
    return 0;
}