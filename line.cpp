#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int siz,dis;
        cin>>siz>>dis;
        vector<int> v={0};
        for(int i=0;i<siz;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        int ans=0;
        // cout<<siz<<dis<<endl;
        for(int i=0;i<siz;i++){
            ans=max(ans,v[i+1]-v[i]);
        }
       int res = max(ans, 2 * (dis - v.back()));
       cout<<res<<endl; 

    }
    return 0;
}