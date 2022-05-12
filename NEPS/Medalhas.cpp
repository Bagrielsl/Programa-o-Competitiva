#include <bits/stdc++.h>

using namespace std;

int main(){
    int vetor[3], vetoraux[3], i, j, aux;

    for(i=0;i<3;i++){
        cin >> vetor[i];
        vetoraux[i]=vetor[i];
    }
    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            aux = 0;
            if(vetor[i]>vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(vetor[i]==vetoraux[j]){
                cout << j+1 << endl;
            }
        }
    }

    return 0;
}