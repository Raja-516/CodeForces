#include<algorithm>
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        vector<int> v;
        int c=INT_MAX;
        unordered_set<int> hs;
        for(int i =0;i<k;i++){
            int temp;
            cin>>temp;
            hs.insert(temp);
            c=min(c,temp);
            if(temp > k){ cout<<"NO"<<endl;continue;}
            v.push_back(temp);
        }
        
        if(c != v[0]) {cout<<"NO"<<endl;continue;;}
        if(hs.size() != k) {cout<<"NO"<<endl;continue;}
        
        cout<<"YES"<<endl;
    }

    return 0;

}