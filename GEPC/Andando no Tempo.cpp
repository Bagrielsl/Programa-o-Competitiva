#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C;

    cin >> A >> B >> C;

    if(A == B or A == C or B == C){
        cout << "S" << endl;
    }
    else if(A == B + C or B == A + C or C == A + B){
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }
    
    return 0;
}