#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int tc = 1; tc <= T; ++tc){
        double sum = 0;
        double num;
        for (int i=0; i<10; i++){
            cin >> num;
            sum += num;
        }
        int res = round(sum/10);
        cout << '#' << tc << ' ' << res << '\n';
    }
}