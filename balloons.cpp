#include<bits/stdc++.h>
using namespace std;\

map<char,bool> m;

int main(){
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(m[s[i]]==false){
                m[s[i]]=true;
                count+=2;
            }
            else{
                count++;
            }
        }
        m.clear();
        cout<<count<<endl;
    }
    return 0;
}