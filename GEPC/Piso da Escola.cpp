#include <bits/stdc++.h>

using namespace std;

int main(){
    int L, C, Area, tipo1, tipo2;
    cin >> L >> C;

    tipo1 = (L*C) + ((L-1)*(C-1));
    tipo2 = (L - 1)*2 + (C - 1)*2;

    cout << tipo1 << endl;
    cout << tipo2 << endl;

    return 0;
}