#include <bits/stdc++.h>

using namespace std;

int main(){
    double X, Y;

    cin >> X >> Y;

    if((X + Y) / 2 >= 7){
        cout << "Aprovado" << endl;
    }
    else if((X + Y) / 2 < 7 and (X + Y) / 2 >= 4){
        cout << "Recuperacao" << endl;
    }
    else{
        cout << "Reprovado" << endl;
    }

    return 0;
}