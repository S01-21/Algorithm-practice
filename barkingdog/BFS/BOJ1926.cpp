#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int board[501][501];
bool vis[501][501];

int main(){
    int N, M;
    int i, j;
    int cnt = 0, mx = 0;
    cin >> N >> M;
    

    for (i=0; i<N; i++)
        for (j=0; j<M; j++)
            cin >> board[i][j];
    
    for (i=0; i<N; i++){
        for (j=0; j<M; j++){
            if (!board[i][j] || vis[i][j])  continue;
            cnt++;
            queue<pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({i, j});
            int area = 0;
            while (!Q.empty()){
                area++;
                auto cur = Q.front();   Q.pop();
                for (int dir=0; dir<4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    if (vis[nx][ny] || !board[nx][ny])  continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout << cnt << '\n' << mx;
}