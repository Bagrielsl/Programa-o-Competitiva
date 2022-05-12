#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, res, i, x;
    res = 0;
    cin >> n;

    for(i=0;i<n;i++){
        cin >> x;
        res += x;
    }
    cout << res << endl;
}