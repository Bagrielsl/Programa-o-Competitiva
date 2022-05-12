#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, v[10], n, contador;
    contador=0;
    for(i=0;i<10;i++){
        cin >> v[i];
    }
    cin >> n;
    for(i=0;i<10;i++){
        if(v[i]==n){
            contador++;
        }
    }
    if(contador>0){
        cout << contador << endl;
        for(i=0;i<10;i++){
            if(v[i]==n){
                cout << i << " ";
            }
        }
    }
    else{
        cout << "Mia x";
    }
}