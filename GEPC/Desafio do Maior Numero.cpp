#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, maior;
    maior = 0;
    do{
        cin >> N;
        if(N > maior){
            maior = N;
        }
    } while (N != 0);
    
    cout << maior << endl;

    return 0;
}