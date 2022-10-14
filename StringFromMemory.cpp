#include<bits/stdc++.h>
using namespace std;

map<char,bool> m;

int main(){
    int t;
    cin>>t;
    while(t--){
        int count=0,count1=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==false){
                count++;
                if(count==3)
                count1++;
                if(count>3)
                {
                    count=1;
                    m.clear();
                }  
                m[s[i]]=true;
            }
            else
            continue;
        }
        if(count!=3)
        count1++;
        cout<<count1<<endl;
        // int x = count/3;
        // cout<<x<<endl;
        m.clear();
    }
    return 0;
}