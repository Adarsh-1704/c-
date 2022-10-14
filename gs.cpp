#include<bits/stdc++.h>
using namespace std;
int A[10][10];

int abc(int n){
    int x,y,i;
    x=INT16_MAX;
    while(true){
        for(int j=0;j<n;j++){
            if(A[0][j]!=0){
                if(A[0][j]<x){
                    x=A[0][j];
                    y=j;
                }
            }
        }
    }
}