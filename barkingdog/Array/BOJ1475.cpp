#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int check[10]={};
    int cnt=1;
    
    int n;
    cin>>n;
    
    while(n>0){
        check[n%10]++;
        n/=10;
    }
    
    for (int i=0; i<10; i++){
        if (i==6 || i==9)    continue;
        cnt = max(cnt, check[i]);
    }
    cnt = max(cnt, (check[6]+check[9]+1)/2);
    cout<<cnt;
}