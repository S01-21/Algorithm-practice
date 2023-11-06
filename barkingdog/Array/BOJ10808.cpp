#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string word;
    cin >> word;
    
    int apb[26] = {};
    for (char c : word){
        apb[c-'a']++;
    }
    for (int i : apb){
        cout << i << ' ';
    }
}