#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    int array[10][10];

    for (int tc = 1; tc <= T; ++tc){
        int N;
        cin >> N;

        for (int i=0; i<10; i++)
            fill(array[i], array[i]+10, 1);

        for (int i=1; i<N; i++)
            for (int j=1; j<i+1; j++){
                if (j==i)   continue;
                array[i][j] = array[i-1][j-1] + array[i-1][j];
            }

        cout << '#' << tc << '\n';
        for (int i=0; i<N; i++){
            for (int j=0; j<i+1; j++)
                cout << array[i][j] << ' ';
            cout << '\n';
        }
    }
}