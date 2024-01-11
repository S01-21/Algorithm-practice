#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int visited[200001];
    fill(visited, visited + 200001, -1);

    queue<int> Q;
    Q.push(N);
    visited[N] = 0;

    while (visited[K] == -1)
    {
        int cur = Q.front();
        Q.pop();
        for (int next : {cur - 1, cur + 1, cur * 2})
        {
            if (next < 0 || next > 200000)
                continue;
            if (visited[next] != -1)
                continue;
            Q.push(next);
            visited[next] = visited[cur] + 1;
        }
    }
    cout << visited[K];
}