#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int l;
        cin>>l;
        unordered_map<int, int> mp;
        for(int i=0;i<l;i++){
            int temp;
            cin>>temp;
            mp[temp]++;
        }
        if(mp.size()== 1) {cout<<"YES"<<endl;continue;}
        if(mp.size()>2) {cout<<"NO"<<endl;continue;}
        auto it = mp.begin();
        int x = it->second;
        it++;
        int y = it->second;
        
        
         if (l % 2 == 0 && x == y)
            cout << "YES\n";
        else if (l % 2 != 0 && abs(x - y) <= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}