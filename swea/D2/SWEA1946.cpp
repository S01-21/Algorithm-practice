#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, N, i, j, num, cnt;
    cin >> T;
    char tmp;

    int apb[26];
    for (int tc = 1; tc <= T; tc++){
        cin >> N;
        fill(apb, apb+26, 0);

        cout << '#' << tc << '\n';
        for (i=0; i<N; i++){
            cin >> tmp >> num;
            apb[tmp-'A'] = num;
        }

        cnt = 0;
        for (i=0; i<26; i++){
            if (!apb[i])    continue;
            for (j=0; j<apb[i]; j++){
                if (cnt == 10){
                    cout << '\n';
                    cnt = 0;
                }
                cout << char('A' + i);
                cnt++;
            }
        }
        cout << '\n';
    }
}