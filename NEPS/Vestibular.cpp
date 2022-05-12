#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i, resp;

    cin >> N;

    char gabarito[N], respostas[N];

    for(i=0;i<N;i++){
        cin >> gabarito[i];
    }
    for(i=0;i<N;i++){
        cin >> respostas[i];
    }
    resp = 0;
    for(i=0;i<N;i++){
        if(gabarito[i] == respostas[i]){
            resp++;
        }    
    }
    cout << resp << endl;

    return 0;
}