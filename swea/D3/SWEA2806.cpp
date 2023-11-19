#include <iostream>
using namespace std;
int T, N, cnt;
bool isused1[12];
bool isused2[24];
bool isused3[24];

void queen(int cur){
    if (cur == N){
        cnt++;
        return;
    }
    for (int i=0; i<N; i++){
        if (isused1[i] ||isused2[cur + i] || isused3[cur-i+N-1])    continue;
        isused1[i] = 1;
        isused2[cur+i] = 1;
        isused3[cur-i+N-1] = 1;
        queen(cur+1);
        isused1[i] = 0;
        isused2[cur+i] = 0;
        isused3[cur-i+N-1] = 0;
    }
}

int main(){
    cin >> T;
    for (int tc = 1; tc <= T; ++tc){
        cin >> N;
        cnt = 0;
        fill(isused1, isused1+N, false);
        fill(isused2, isused2+N*2, false);
        fill(isused3, isused3+N*2, false);
        queen(0);
        cout << '#' << tc << ' ' << cnt << '\n';
    }
    return 0;
}