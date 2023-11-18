#include <iostream>
using namespace std;
char board[65][65];


bool check(int n, int r, int c){
    for (int i=r; i<n+r; i++)
        for (int j=c; j<n+c; j++)
            if (board[i][j] != board[r][c])
                return false;
    return true;
}

void tree(int n, int r, int c){
    char tmp = board[r][c];
    if (check(n, r, c)){
        cout << tmp;
        return;
    }
    cout << '(';
    int next = n/2;
    for (int i=0; i<2; i++)
        for (int j=0; j<2; j++)
            tree(next, r+i*next, c+j*next);
    cout << ')';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, i, j;
    cin >> N;
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            cin >> board[i][j];
    tree(N, 0, 0);
    return 0;
}