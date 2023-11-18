#include <iostream>
using namespace std;
int board[2200][2200];
int cnt[3];
bool check(int n, int r, int c){
    for (int i=r; i<n+r; i++)
        for (int j=c; j<n+c; j++)
            if (board[r][c] != board[i][j])
                return false;
        return true;
}
void paper(int n, int r, int c){
    int tmp = board[r][c];
    if (check(n, r, c)){
        cnt[tmp+1]++;
        return;
    }
    int next = n/3;
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
            paper(next, r+next*i, c+next*j);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            cin >> board[i][j];
    paper(N, 0, 0);
    for (int i=0; i<3; i++)
        cout << cnt[i] << '\n';
    return 0;
}