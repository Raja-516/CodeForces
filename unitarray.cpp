// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//     int k;
//     cin>>k;
//     vector<int> v;
//     for(int i=0;i<k;i++){
//         int temp;
//         cin>>temp;
//         v.push_back(temp);
//     }
//     int tol=0;
//     for(int i=0;i<k;i++){
//         if(v[i]==-1) tol+=1;

//     }
//     int y=k-tol;
//     int x=tol-y;
//     if((tol-x)%2 == 0) cout<<x<<endl;
//     else if(x<0) cout<<0<<endl;
//     else cout<<(x/2)<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int neg = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1) neg++;
        }

        int pos = n - neg;
        int operations = 0;

        // Fix sum condition
        while (pos - neg < 0) {
            neg--;
            pos++;
            operations++;
        }

        // Fix product condition
        if (neg % 2 == 1) {
            operations++;
        }

        cout << operations << "\n";
    }

    return 0;
}
