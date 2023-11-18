#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
char board[1002][1002];
int hm[1002][1002];
int fire[1002][1002];

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, i, j;
        cin >> M >> N;
        bool isEscape = false;
        queue<pair<int, int>> SQ;
        queue<pair<int, int>> FQ;
        for (i=0; i<N; i++){
            fill(hm[i], hm[i]+M, -1);
            fill(fire[i], fire[i]+M, -1);
        }
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++)
            {
                cin >> board[i][j];
                if (board[i][j] == '@'){
                    SQ.push({i, j});
                    hm[i][j] = 0;
                }
                if (board[i][j] == '*'){
                    FQ.push({i, j});
                    fire[i][j] = 0;
                }
            }
        while (!FQ.empty())
        {
            auto cur = FQ.front();
            FQ.pop();
            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                    continue;
                if (board[nx][ny] == '#' || fire[nx][ny] >= 0)
                    continue;
                FQ.push({nx, ny});
                fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            }
        }
        while (!SQ.empty() && !isEscape)
        {
            auto cur = SQ.front();
            SQ.pop();
            for (int dir = 0; dir < 4; dir++)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                {
                    cout << hm[cur.X][cur.Y]+1 << '\n';
                    isEscape = true;
                    break;
                }
                if (board[nx][ny]=='#' || hm[nx][ny] >= 0)  continue;
                if (fire[nx][ny] != -1 && fire[nx][ny] <= hm[cur.X][cur.Y]+1) continue;
                    SQ.push({nx, ny});
                    hm[nx][ny] = hm[cur.X][cur.Y] + 1;
            }
        }
        if (!isEscape)  cout << "IMPOSSIBLE" << '\n';
    }
}