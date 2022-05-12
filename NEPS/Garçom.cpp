#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i, L, C, soma;
    soma = 0;

    cin >> N;

    for(i = 0;i < N;i++){
        cin >> L >> C;
        if(L > C){
            soma += C;
        }
    }

    cout << soma << endl;

    return 0;
}