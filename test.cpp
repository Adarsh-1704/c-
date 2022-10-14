#include<bits/stdc++.h>
using namespace std;

int main(){
    long double t,n,m,ans;
    cin>>t;
    while(t--){
        cin>>n>>m;
        long double z=0;
        for(int i=1;i<=n;i++){
            z=z*10+1;
        }
        if(m>z){
            ans=(z*10+1)-m;
        }
        else{
            ans=z*9-m;
        }
        cout<<ans<<endl;
    }
    return 0;
}