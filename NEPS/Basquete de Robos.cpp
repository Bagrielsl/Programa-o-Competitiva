#include <bits/stdc++.h>

using namespace std;

int main(){
    int D;

    cin >> D;

    if(D <= 800){
        cout << "1" << endl;
    }
    else if(D > 800 and D <= 1400){
        cout << "2" << endl;
    }
    else{
        cout << "3" << endl;
    }

    return 0;
}