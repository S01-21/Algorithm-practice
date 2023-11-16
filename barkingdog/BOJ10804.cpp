#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    int pA, pB;
    int a[21];
    for (int i=1; i<21; i++)
        a[i] = i;

    for (int i=0; i<10; i++){
        cin >> pA >> pB;
        while (pB > pA){
            int tmp = a[pA];
            a[pA] = a[pB];
            a[pB] = tmp;
            pB--;
            pA++;
        }
    }
    for (int i=1; i<21; i++)
        cout << a[i] << ' ';
}