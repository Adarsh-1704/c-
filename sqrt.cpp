#include<bits/stdc++.h>
using namespace std;

long long int mySqrt(int x) {
    int s = 0;
    int e = x;
    long long int mid = s + (e-s)/2;
    long long int ans = mid;
    
    while(s<=e){
        if((mid*mid) == x){
            return mid;
        }
        else if((mid*mid)> x){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double preciseAns(int n, int prec){
    double ans = mySqrt(n);
    double factor = 1;
    for(int i = 0; i< prec; i++){
        factor/=10;
        for(double j = ans;j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n,p;
    cout<<"Enter the integer"<<endl;
    cin>>n;
    cout<<"Enter the precision:"<<endl;
    cin>>p;
    cout<<mySqrt(n)<<endl;
    cout<<preciseAns(n,p)<<endl;
    return 0;
}