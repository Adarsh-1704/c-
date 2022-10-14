#include<iostream>
#include<math.h>
using namespace std;

int count(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

int myPow(int x, unsigned int p)
{
  if (p == 0) return 1;
  if (p == 1) return x;
  
  int tmp = myPow(x, p/2);
  if (p%2 == 0) return tmp * tmp;
  else return x * tmp * tmp;
}

int main(){
    int t,m;
    cin>>t;
    while (t--)
    {
        cin>>m;
        int x=myPow(10,count(m)-1);
        cout<<m-x<<endl; 
    }
    return 0;
}