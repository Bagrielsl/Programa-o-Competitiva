#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, A, B, C, i, aux, c1, c2, c3, c4, c5;
    A = B = C = 0;
    c1 = c2 = c3 = c4 = c5 = 0;
    cin >> N;
    for(i = 0;i < N;i++){
        cin >> aux;
        if(aux == 1){
            c1++;   
        }
        if(aux == 2){
            c2++;
        }
        if(aux == 3){
            c3++;
        }
        if(aux == 4){
            c4++;
        }
        if(aux == 5){
            c5++;
        }

        if(c1 > 0 and c3 > 0 and c5 > 0){
            c1--;
            c3--;
            c5--;
            A++;
        }
        else if(c1 > 0 and c4 > 0){
            c1--;
            c4--;
            B++;
        }
        else if(c2 > 0 and c4 > 0){
            c2--;
            c4--;
            C++;
        }
    }
    
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;

    return 0;
}