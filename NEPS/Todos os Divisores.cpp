#include <bits/stdc++.h>

using namespace std;

int main(){
    int X, i;

    cin >> X;

    for(i = 1;i <= X;i++){
        if(X % i == 0){
            printf("%d ",i);
        }
    }

    return 0;
}