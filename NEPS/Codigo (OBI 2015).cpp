#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, k;
    cin >> n;
    
    int vetor[n];

    for(i=0;i<n;i++){
        cin >> vetor[i];
    }
    k = 0;
    for(i=0;i+2<n;i++){
        if(vetor[i]==1 and vetor[i+1]==0 and vetor[i+2]==0){
            k++;
        }
    }

    cout << k << endl;

    return 0;
}