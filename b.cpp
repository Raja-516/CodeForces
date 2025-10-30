#include<iostream>
#include<string>

using namespace std;
int main(){
    int x=0;
    int n;
    cin>>n;
    string k;
    while(n){
        cin>>k;
        if( k == "++X" || k == "X++" ){
            x+=1;
        }
        else{
            x-=1;
        }
        n-=1;
    }
    cout << x << endl;
    return 0;
}