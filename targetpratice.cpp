
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//     vector<vector<char>> v;
//     for(int i=0;i<10;i++){
//         for(int j=0;j<10;j++){
//             if((i == 0 || i== 4) && (0<=j<=4)){
//                 char ch;
//                 cin>>ch;
//                 v[i].push_back(ch);
//             }
//         }
//     }
//     int sumi=0;
//     for(int i=0;i<10;i++){
//         for(int j=0;j<10;j++){
//             if(v[i][j] == 'X'){
//                 if((i==0 || i== 9) && (0<=j<=9)) sumi+=1;
//                 else if((i==1 || i== 8) && (1<=j<=8)) sumi+=2;
//                 else if((i==2 || i== 7) && (2<=j<=7)) sumi+=3;
//                 else if((i==3 || i== 6) && (3<=j<=6)) sumi+=4;
//                 else if((i==4 || i== 5) && (4<=j<=5)) sumi+=5;

//                 if((j==0 || j== 9) && (0<=i<=9)) sumi+=1;
//                 else if((j==1 || j== 8) && (1<=i<=8)) sumi+=2;
//                 else if((j==2 || j== 7) && (2<=i<=7)) sumi+=3;
//                 else if((j==3 || j== 6) && (3<=i<=6)) sumi+=4;
//                 else if((j==4 || j== 5) && (4<=i<=5)) sumi+=5;
                
//             }
//         }
//     }

//     // display
//     for(int i=0;i<5;i++){
//         for(int j =0;j<5;j++){
//             cout<<v[i][j];
//         }
//     }
//     cout<<sumi<<endl;
// }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> v(10, vector<char>(10));

        // ✅ Read the 10×10 grid properly
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> v[i][j];
            }
        }

        int sumi = 0;

        // ✅ Calculate total score
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (v[i][j] == 'X') {
                    // each cell’s score = ring number based on distance to border
                    int ring = min({i, j, 9 - i, 9 - j}) + 1;
                    sumi += ring;
                }
            }
        }

        cout << sumi << "\n";
    }
    return 0;
}
