#include<bits/stdc++.h>
using namespace std;
int a[100][100];

int main(){
    int t,n;
    cin>>t;
    while(t--){
        int count=0,x;
        char c;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>c;
                a[i][j]=(int)c-48;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                x=a[i][j]+a[j][n-1-i]+a[n-1-i][n-1-j]+a[n-1-j][i];
                if(x==2)
                count+=2;
                else if(x>2)
                count+=(4-x);
                else
                count+=x;
            }
        }
        count/=4;
        cout<<count<<endl;
    }
    return 0;
}