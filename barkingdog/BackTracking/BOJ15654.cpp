#include <iostream>
using namespace std;

int N, M;
int arr[10];
int isused[10];
int inp[10];

void func(int k){
    if (k == M){
        for (int i=0; i<M; i++)
            cout << inp[arr[i]] <<' ';
        cout << '\n';
        return;
    }
    for (int i=0; i<N; i++){
        if (!isused[i]){
            arr[k] = i;
            isused[i] = 1;
            func(k+1);
            isused[i] = 0;
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