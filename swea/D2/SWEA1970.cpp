#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, N, tmp, i;
    int money[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
    int cnt[8];
    cin >> T;
    for (int tc = 1; tc <= T; ++tc){
        cin >> N;
        fill(cnt, cnt+8, 0);
        tmp = N;
        for (i=0; i<8; i++){
            if (tmp >= money[i]){
                cnt[i] += tmp/money[i];
                tmp %= money[i];
            }
        }
        
        cout << '#' << tc << '\n';
        for (i=0; i<8; i++)
            cout << cnt[i] << ' ';
        cout << '\n';
    }
}