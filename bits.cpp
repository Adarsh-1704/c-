#include<bits/stdc++.h>
using namespace std;

int main() {
    cout<<"HI"<<endl;

    int x = 0;
    cout<<"Enter any int : ";
    cin>>x;

    int y1 = x & 1;
    int y2 = x & 0;
    
    int z1 = x | 1;
    int z2 = x | 0;

    cout<<x<<" & 1 = "<<y1<<endl;
    cout<<x<<" | 1 = "<<z1<<endl;
    cout<<x<<" & 0 = "<<y2<<endl;
    cout<<x<<" | 0 = "<<z2<<endl;
    
    int pow;
    cout<<"Enter a power of 2 : ";
    cin>>pow;
    cout<< (1<<pow)<<endl;
    return 0;
}