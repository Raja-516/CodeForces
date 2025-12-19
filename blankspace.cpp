#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        vector<int> v;
        for(int i=0;i<k;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        int count=0;
        int ans=0;
        for(int i=0;i<k;i++){
            if(v[i]==0) count++;
            else{
                ans=max(ans,count);
                count=0;
            }

        }
        ans=max(ans,count);
        cout<<ans<<endl;
    }
    return 0;
}