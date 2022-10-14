#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,p;
    cin>>t;
    while(t--){
        cin>>p;
        if(p<0||p>1000){
            cout<<"-1"<<endl;
        }
        else{
            int x;
            x=(p/100)+(p%100);
            if(x>10){
                cout<<"-1"<<endl;
            }
            else{
                cout<<x<<endl;
            }
        }
    }
    return 0;
}