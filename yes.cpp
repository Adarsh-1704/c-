#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),towupper);
        if(s=="YES")
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}