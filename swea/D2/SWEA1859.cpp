#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int prices[1000002];
    int T, cnt = 0;
    cin >> T;

    while (T--){
        int N, sum=0;
        cnt++;
        cin >> N;
        for (int i=0; i<N; i++){
            cin >> prices[i];
        }

        for (int i=N-2; i>0; i++){
            for (int j=i+1; j<N; j--){
                int max = 0;
                if (prices[i] - prices[j] > max)
                    max = prices[i] - prices[j];
                sum += max;
            }
        }
        
        cout << '#' << cnt << ' ' << sum << '\n';

    }

    return 0;
}
