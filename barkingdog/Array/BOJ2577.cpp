#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int check[10]={};
    
    int a, b, c;
    cin>>a;    cin>>b;    cin>>c;
    
    int mtp = a*b*c;
    while (mtp>0){
        check[mtp%10]++;
        mtp /= 10;
    }
    
    for (int i=0; i<10; i++){
        cout<<check[i]<<"\n";
    }
}