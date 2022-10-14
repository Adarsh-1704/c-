#include<bits/stdc++.h>
using namespace std;
int a[100];

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n;
        char c;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>m;
            for(int j=0;j<m;j++){
                cin>>c;
                if(c=='D')
                a[i]++;
                else
                a[i]--;
            }
            if(a[i]>9)
            a[i]=a[i]-10;
            else if(a[i]<0)
            a[i]=a[i]+10;
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}