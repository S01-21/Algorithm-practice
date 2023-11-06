#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, cnt=0;
    bool check[2000001];
    cin>>n;
    
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>x;
    
    for (int i=0; i<n; i++){
        int num = arr[i];
        if (x-num>0 && check[x-num])    cnt++;
        check[arr[i]]=true;
    }
    cout<<cnt;
}