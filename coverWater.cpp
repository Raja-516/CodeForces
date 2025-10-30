#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int length;
        cin>>length;
        string s;
        cin>>s;
        bool isthr =false;
        int count=0;
        int l = s.length();
        for(int i=0;i<l;i++){
            if(s[i] == '.' && i+1 < l && s[i+1] =='.' && i+2 < l && s[i+2] == '.'){
                isthr=true;
                break;
            }
            else if(s[i] == '.')  count+=1;
        }
        int res = isthr ? 2 : count;
        cout<<res<<endl;
    }

    return 0;
}