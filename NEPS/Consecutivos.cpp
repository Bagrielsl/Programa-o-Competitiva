#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, j, aux, resp;

    cin >> n;

    int vetor[n];

    for(i=0;i<n;i++){
        cin >> vetor[i];
    }
    resp=0;
    for(i=0;i<n;i++){
        aux=0;
        for(j=i;j<n;j++){
            if(vetor[i]==vetor[j]){
                aux++;
            }
            else{
                break;
            }
        }
        if(aux>resp){
            resp=aux;
        }
    }
    cout << resp << endl;
    return 0;
}