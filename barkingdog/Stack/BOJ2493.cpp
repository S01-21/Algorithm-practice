#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define X first
#define Y second

int main(){
    int N;
    cin >> N;
    stack<pair<int, int>> S;
    S.push({10000001, 0});
    for(int i = 1; i<= N; i++){
        int H;
        cin >> H;
        while (S.top().X < H)
            S.pop();
        cout << S.top().Y << " ";
        S.push({H, i});
    }
    return 0;
}