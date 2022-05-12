#include <bits/stdc++.h>

using namespace std;

int main(){
    cout.precision(4);
    double N, X, i;

    cin >> N;

    for(i = 0;i < N; i++){
        cin >> X;
        cout << fixed << sqrt(X) << endl;
    }

    return 0;
}