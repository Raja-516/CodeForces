#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        vector<int> v;
        for(int i=0;i<a;i++){
            int temp;
            cin>>temp;
            
            v.push_back(temp);
        }
        vector<int> ans;
        for(int i=0;i<a;i++){
            ans.push_back(a+1-v[i]);
        }
        for(int i=0;i<a;i++){
            cout<<ans[i]<<' ';
        }

    }
    return 0;
}