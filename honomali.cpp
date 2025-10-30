#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        vector<int> v;
            for(int i=0;i<a;i++){
                int k;
                cin>>k;
                v.push_back(k);}
        if(b!=1){
            cout<<"YES"<<endl;
        }
        else if(b==1)
           {
            if(is_sorted(v.begin(),v.end())){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
           }
        
    }
    return 0;
}