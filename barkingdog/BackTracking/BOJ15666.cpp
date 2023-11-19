#include <iostream>
using namespace std;
int N, M;
int arr[10];
int inp[10];

void func(int k){
    if (k == M){
        for (int i=0; i<M; i++)
            cout << inp[arr[i]] << ' ';
        cout << '\n';
        return;
    }
    int tmp = 0;
    int st = 0;
    if (k!=0)   st = arr[k-1];
    for (int i=st; i<N; i++){
        if (tmp != inp[i]){
            arr[k] = i;
            tmp = inp[i];
            func(k+1);
        }
    }
}
int main(){
    cin >> N >> M;
    for (int i=0; i<N; i++)
        cin >> inp[i];
    sort(inp, inp+N);
    func(0);
}