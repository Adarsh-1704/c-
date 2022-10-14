#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        int a;
        string s="";
        cin>>n>>m;
        for(int i=0;i<m;i++)
        s=s+'B';
        for(int i=0;i<n;i++){
            cin>>a;
            if(a<=m+1-a)
            mp[a]++;
            else
            mp[m+1-a]++;
        }
        for(int i=1;i<=(m+1)/2;i++){
            if(mp[i]==1)
            s[i-1]='A';
            else if(mp[i]>1){
                s[i-1]='A';
                s[m-i]='A';
            }
        }
        cout<<s<<endl;
        mp.clear();
    }
    return 0;
}