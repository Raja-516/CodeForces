// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int a,b,e;
//         cin>>a>>b>>e;
//         bool x=true;
//         while(e){
//             if(x){
//                 e-=1;
//                 x=false;
//             }
//             else{
//                 x=true;
//                 e-=1;
//             }
//         }
//         while(a || b){
//             if(x){
//                 a-=1;
//                 x=false;
//                 if(a==0) {cout<<"Second"<<endl;break;}   
//             }
//             else{
//                 x=true;
//                 b-=1;
//                 if(b==0) {
//                     cout<<"First"<<endl;
//                     break;
//                 }
//             }
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,e;
        cin>>a>>b>>e;
        if(e%2==0){
            if(a>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
        else{
            if(b>a) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
    }
    return 0;
}