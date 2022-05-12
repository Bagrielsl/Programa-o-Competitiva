#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;

    cin >> N;

    if(N > 0){
        cout << "positivo" << endl;
    }
    else if(N == 0){
        cout << "nulo" << endl;
    }
    else{
        cout << "negativo" << endl;
    }

    return 0;
}