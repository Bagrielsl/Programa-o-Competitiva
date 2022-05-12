#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, cont;
    cont = 0;
    cin >> N;
    while (N > 1){
        if(N % 2 == 0){
            N = N/2;
        }
        else{
            N = 3 * N + 1;
        }
        cont++;
    } 
    cout << cont << endl;

    return 0;
}