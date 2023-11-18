#include <iostream>
#include <stack>
using namespace std;

int main(){
    int N, max = 0;
    cin >> N;
    stack<int> S;
    string res;

    while (N--){
        int num;
        cin >> num;
        if (num > max){
            for (int i=max+1; i<=num; i++){
                S.push(i);
                res += "+\n";
            }
            S.pop();
            res += "-\n";
            max = num;
        } else {
            if (S.empty()){
                S.push(num);
                res += "+\n";
            } else {
                if (S.top() == num){
                    S.pop();
                    res += "-\n";
                } else {
                    cout << "NO" << '\n';
                    return 0;
                }
            }
        }
    }
    cout << res;
    return 0;
}