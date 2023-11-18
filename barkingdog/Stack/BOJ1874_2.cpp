#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int N, cnt = 1;
    cin >> N;
    stack<int> S;
    vector<char> V;

    while (N--){
        int num;
        cin >> num;

        while (cnt <= num){
            S.push(cnt++);
            V.push_back('+');
        }
        if (S.top() != num){
            cout << "NO";
            return 0;
        }
        S.pop();
        V.push_back('-');
    }
    for (char c : V)
        cout << c << "\n";
    return 0;
}