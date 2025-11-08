#include<bits/stdc++.h>
using namespace std;


int main(){
    int m,n;
    cin>>m>>n;

    vector<string> mat(m);
    for(int i=0;i<m;i++)cin>>mat[i];

    vector<int> rw(m,0);
    vector<int> cl(n,0);

    

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]=='R'){
                rw[i]++;
                cl[j]++;
            }
        }
    }
   
    
    int r=-1,c=-1;
    for(int i=0;i<m;i++){
        if(rw[i]>1){
           
            r=i;
            break;
        }
    }
    if(r==-1){
        for(int i=0;i<n;i++){
            if(cl[i]>1){
               
                c=i;
                break;

            }
        }
    }

    
    vector<int> st;
    

    if(r!=-1){
        
        int i=r;
        for(int j=0;j<n;j++){
            if(mat[i-1][j]=='C' && mat[i+1][j]=='C'){
                int d;
                if(mat[i][j]=='C')d=1;
                else d=0;
                if(st.size() && st.back()==d){
                    st.pop_back();
    
                }else{
                    st.push_back(d);
                }
            }
        }

    }else{
        int j=c;
        for(int i=0;i<m;i++){
            if(mat[i][j-1]=='C' && mat[i][j+1]=='C'){
                int d;
                if(mat[i][j]=='C')d=1;
                else d=0;
                if(st.size() && st.back()==d){
                    st.pop_back();
    
                }else{
                    st.push_back(d);
                }

            }
        }

    }
    if(st.size()==0){
        cout<<0;
        return 0;
    }else{
        int u=0,d=0;
        for(auto& i:st){
            if(i==1)u++;
            else d++;

        }
        cout<<min(d,u);
    }
    return 0;


}
