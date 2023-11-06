#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    string s;
    char inst;
    cin >> s;
    list<char> L;

    for (char c : s){   // { a b c d }
        L.push_back(c);
    }
    auto t = L.end();    // t = d

    N = s.length();
    cin >> M;

    for (int i=0; i<M; i++){
        cin >> inst;
        if (inst == 'P'){
            char add;
            cin >> add;
            L.insert(t, add);
        } else if (inst == 'L'){
            if (t != L.begin()) t--;
        } else if (inst == 'D'){
            if (t != L.end())   t++;
        } else if (inst == 'B'){
            if (t != L.begin()){
                t--;
                t = L.erase(t);
            }
        }
    }
    for (auto i : L)
        cout << i;
}