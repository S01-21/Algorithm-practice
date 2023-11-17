#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, N, K;
    int i;
    cin >> T;

    string g[] = {"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};

    for (int tc = 1; tc <= T; ++tc){
        cin >> N >> K;
        double sum[100];

        int cnt = 0;
        int mid, last, hw;
        for (i=0; i<N; i++){
            cin >> mid >> last >> hw;
            sum[i] = 0.35*mid + 0.45*last + 0.2*hw;
        }
        for (i=0; i<N; i++)
            if (sum[i] > sum [K-1])
                cnt++;
        cout << '#' << tc << ' ' << g[cnt/(N/10)] << '\n';
    }
}