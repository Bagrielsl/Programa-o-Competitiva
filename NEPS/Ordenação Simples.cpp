#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, aux, j;

    cin >> n;

    int vetor[n];

    for(i=0;i<n;i++){
        cin >> vetor[i];
    }
    for(i=0;i<n;i++){
        aux=vetor[i];
        j=i;
        while(j>0 and aux < vetor[j-1]){
            vetor[j]=vetor[j-1];
            j--;
        }
        vetor[j]=aux;
    }
    for(i=0;i<n;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}