#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    stack<int> S;
    long long sum = 0;
    while (N--)
    {
        long long nxt;
        cin >> nxt;
        while (!S.empty() && S.top() <= nxt)
            S.pop();
        sum += S.size();
        S.push(nxt);
    }
    cout << sum;
}