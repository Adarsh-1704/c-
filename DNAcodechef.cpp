#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>t;
    char c;
    while(t--){
        string s="";
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>c;
            s=s+c;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='A')s[i]='T';
            else if(s[i]=='T')s[i]='A';
            else if(s[i]=='C')s[i]='G';
            else if(s[i]=='G')s[i]='C';
        }
    cout<<s<<endl;
    }
    return 0;
}