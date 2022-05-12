#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i;

    cin >> n;

    int vetor[n], resp[n];

    for(i=0;i<n;i++){
        cin >> vetor[i];
        resp[i]=0;
    }
    for(i=0;i<n;i++){
        if(i==0 and vetor[i]==1){
            resp[i] += 1;
            resp[i+1] += 1;
        }
        else if(i==n-1 and vetor[i]==1){
            resp[i-1] += 1;
            resp[i] += 1;
        }
        else if(vetor[i]==1){
            resp[i-1] += 1;
            resp[i] += 1;
            resp[i+1] += 1;
        }
    }
    for(i=0;i<n;i++){
        cout << resp[i] << endl;
    }

    return 0;
}