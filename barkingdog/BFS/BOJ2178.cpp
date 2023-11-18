#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
string board[102];
int dist[102][102];

int main(){
    int N, M, i, j;
    cin >> N >> M;
    
    for (i=0; i<N; i++)
        cin >> board[i];

    queue<pair<int, int>> Q;
    Q.push({0, 0});
    dist[0][0] = 1;
    while (!Q.empty()){
        auto cur = Q.front();   Q.pop();
        for (int dir = 0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || ny < 0 || nx >= N || ny >= M)   continue;
            if (board[nx][ny]!='1' || dist[nx][ny]) continue;
            Q.push({nx, ny});
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
        }
    }
    cout << dist[N-1][M-1];
}