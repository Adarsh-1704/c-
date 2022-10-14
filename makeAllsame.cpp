#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    map<int,int> m;
    while(t--){
        cin>>n;
        int a[n],x=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
            x=max(x,m[a[i]]);
        }
        cout<<n-x<<endl;
        m.clear();
    }
    return 0;
}