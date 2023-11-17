#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, max, cnt, i, j;
    int bd[1002];
    for (int tc = 1; tc <= 10; ++tc){
        cin >> N;

        cnt = 0;
        for (i=0; i<N; i++)
            cin >> bd[i];

        for (i=2; i<=N-2; i++){
            max = 0;
            for (j=i-2; j<=i+2; j++){
                if (j == i) continue;
                if (bd[j] > max)
                    max = bd[j];
            }
            if (bd[i] >= max)
                cnt += bd[i] - max;
        }

        cout << '#' << tc << ' ' << cnt << '\n';
    }
}