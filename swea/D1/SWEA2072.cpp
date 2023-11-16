#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; ++tc){
        int sum=0;
        int tmp;
        for (int i=0; i<10; i++){
            cin >> tmp;
            if (tmp%2==1)   sum+=tmp;
        }
        cout << '#' << tc << ' ' << sum << '\n';
    }
    return 0;
}