#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y, resp, i;

    cin >> n;

    if(n == 0){
        cout << "1" << endl;
    }
    else{
        x = 0;
        y = 1;
        for(i=0;i<n;i++){
            resp = x + y;
            x = y;
            y = resp;
        }
        cout << resp << endl;
    }

    return 0;
}