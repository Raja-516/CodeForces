#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--){
        int x;
        cin>>x;
        if(x%3 == 0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    return 0;
}