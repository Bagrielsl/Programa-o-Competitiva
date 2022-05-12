#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, j, count1, count2;
    cin >> n;
    int vet[n], vetresp[n];
    for(i=0;i<n;i++){
        cin >> vet[i];
        vetresp[i] = 0;
    }
    for(i=0;i<n;i++){
        count1=0;
        count2=0;
        if(vet[i] != 0){
            if(i!=n-1){
                for(j=i;j<n;j++){
                    count1++;
                    if(vet[j+1] == 0){
                        break;
                    }
                }
            }
            if(i!=0){
                for(j=i;j>0;j--){
                    count2++;
                    if(vet[j-1] == 0){
                        break;
                    }
                }
            }
            cout << i << " " << count1 << " " << count2 << " || ";
            if(i==0){
                vetresp[i]=count1;
            }
            else if(i==n-1){
                vetresp[i]=count2;
            }
            else if(count1<=count2){
                vetresp[i]=count1;
            }
            else{
                vetresp[i]=count2;
            }
        }
    }
    cout << endl;
    for(i=0;i<n;i++){
        cout << vetresp[i] << " ";
    }
}