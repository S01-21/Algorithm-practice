#include <iostream>
using namespace std;

int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
        int N;
        cin >> N;
        for (int i=1; i<=N; i++){
            int tmp = i;
            int checked = 0;
            while (tmp > 0){
                if (tmp%10 == 3 || tmp%10 == 6 || tmp%10 ==9) checked++;
                tmp = tmp/10;
            }
            if (checked){
                for (int j=0; j<checked; j++)
                    cout << '-';
            }
            else {
                cout << i;
            }
            cout << ' ';
        }
}