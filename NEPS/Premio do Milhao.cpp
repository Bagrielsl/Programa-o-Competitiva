#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, A, i, soma, count;
    soma = 0;
    count = 0;

    cin >> N;

    for(i=0;i<N;i++){
        cin >> A;
        if(soma < 1000000){
            soma += A;
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}