#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int A[21], B[21];
        int N, M;
        cin >> N >> M;
        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < M; i++)
            cin >> B[i];

        int mx = 0;

        if (N >= M)
        {
            for (int std = 0; std < N - M + 1; std++)
            {
                int tmp = 0;
                for (int i = 0; i < M; i++)
                {
                    tmp += B[i] * A[std + i];
                }
                mx = max(tmp, mx);
            }
        }
        else
        {
            for (int std = 0; std < M - N + 1; std++)
            {
                int tmp = 0;
                for (int i = 0; i < N; i++)
                {
                    tmp += A[i] * B[std + i];
                }
                mx = max(tmp, mx);
            }
        }

        cout << '#' << test_case << ' ' << mx << '\n';
    }
    return 0; // 정상종료시 반드시 0을 리턴해야합니다.
}