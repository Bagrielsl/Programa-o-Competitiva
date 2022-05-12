#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
	int j, S;
    S = 0;
    for(j=0;j<n;j++){
        S += v[j];
    }
    return S;
}

int main(){
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> v[i];
    }
	cout << soma_vetor(n,v) << "\n";
}
