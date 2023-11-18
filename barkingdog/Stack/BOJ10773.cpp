#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int K;
    cin >> K;
    int N, sum = 0;
    stack<int> S;
    while (K--){
        cin >> N;
        if (!N && !S.empty()){
            S.pop();
            continue;
        }
        S.push(N);
    }
    while (!S.empty()){
        sum += S.top();
        S.pop();
    }
    cout << sum;
    return 0;
}