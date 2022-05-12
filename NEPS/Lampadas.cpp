#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, op, i, l1, l2;
    l1 = 0;
    l2 = 0;

    cin >> N;

    for(i=0;i<N;i++){
        cin >> op;
        if(op == 1){
            if(l1 == 0){
                l1 = 1;
            }
            else{
                l1 = 0;
            }
        }
        else{
            if(l1 == 0 and l2 == 0){
                l1 = 1;
                l2 = 1;
            }
            else if(l1 == 0 and l2 == 1){
                l1 = 1;
                l2 = 0;
            }
            else if(l1 == 1 and l2 == 0){
                l1 = 0;
                l2 = 1;
            }
            else if(l1 == 1 and l2 == 1){
                l1 = 0;
                l2 = 0;
            }
        }
    }
    cout << l1 << endl;
    cout << l2 << endl;

    return 0;
}