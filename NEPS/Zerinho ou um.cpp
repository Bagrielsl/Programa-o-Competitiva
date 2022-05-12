#include <bits/stdc++.h>

using namespace std;

int main(){
    int X, Y, Z;

    cin >> X >> Y >> Z;

    if(X != Y and X != Z){
        cout << "A" << endl;
    }
    else if(Y != X and Y != Z){
        cout << "B" << endl;
    }
    else if(Z != X and Z != Y){
        cout << "C" << endl;
    }
    else{
        cout << "*" << endl;
    }

    return 0;
}