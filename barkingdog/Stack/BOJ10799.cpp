#include <iostream>
#include <stack>
using namespace std;

int main(){
    char c;
    stack<char> S;
    int sum = 0;
    string s;
    cin >> s;
    for (int i=0; i<s.length(); i++){
        c = s[i];
        if (c == '('){
            S.push(c);
        } else {
            if (s[i-1] == '('){
                S.pop();
                sum += S.size();
            } else {
                S.pop();
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}