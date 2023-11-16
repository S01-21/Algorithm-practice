#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    int array[10];
    for (int tc=1; tc<=T; ++tc){

        double min = 10000;
        double max = 0;
        double tmp, i, sum = 0;

        for (i=0; i<10; i++){
            cin >> tmp;
            if (tmp > max)  max = tmp;
            if (tmp < min)  min = tmp;
            sum += tmp;
        }
        int res = round((sum - min - max)/8);
        cout << '#' << tc << ' ' << res << '\n';
    }
}