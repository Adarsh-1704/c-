#include<bits/stdc++.h>
using namespace std;

void solve(int n, vector<int>& v){
    if(n<=0){
        v.push_back(n);
        return;
    }

    v.push_back(n);
    solve(n - 5,v);
    v.push_back(n);
}

vector<int> pattern(int n){
    vector<int> ans;
    solve(n, ans);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    v = pattern(n);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}