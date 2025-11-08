#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    while(n--){
        int l;
        cin>> l;
        vector<int> a;
        for(int i=0;i<l;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        vector<int> b;
        vector<int> c;
        long long maxi = *max_element(a.begin(), a.end());
        for(int i=0;i<l;i++){
            if(a[i]!=maxi) b.push_back(a[i]);
            else{
                c.push_back(a[i]);

            }
        }
        if(b.size() == 0){
            cout<<-1;
            cout<<endl;
            continue;
        }
        else{
            cout<<b.size()<<' '<<c.size()<<endl;
            for(auto k : b){
                cout<<k<<' ';
            }
            cout<<endl;
            for(auto l:c){
                cout<<l<<" ";
            }
        }
    }
    return 0;
}