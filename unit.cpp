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
        int mini=0;
        int j=0;
        for(int i=0;i<l;i++){
            if(v[i] == 1){
                j=max(j,mini);
                mini=0;
            }
            else{
                mini++;
            }
    }
    j=max(j,mini);
    cout<<j<<endl;
}

}