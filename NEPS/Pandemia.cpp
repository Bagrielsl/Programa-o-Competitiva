#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, i, r, count1, a, count2, count3, count4, count5, aux, count6;
    count6=1;
    cin >> n >> m;
    cin >> i >> r;
    int infectados[n];
    for(count1=0;count1<n;count1++){
        infectados[count1]=0;
    }
    infectados[0]=i;
    for(count1=0;count1<m;count1++){
        cin >> a;
        int reuniao[a];
        for(count2=0;count2<a;count2++){
            cin >> reuniao[count2];
        }
        if(count1>=r){
            for(count2=0;count2<a;count2++){
                for(count3=0;count3<n;count3++){
                    if(reuniao[count2]==infectados[count3]){
                        for(count5=0;count5<n;count5++){
                            aux=0;
                            for(count4=0;count4<a;count4++){
                                if(reuniao[count4]==infectados[count5]){
                                    aux++;
                                }
                            }
                            if(aux==0){
                                infectados[count6]=reuniao[count4];
                                count6++;
                            }
                        }
                    }
                }
            }
        }
    }
    for(count1=0;count1<n;count1++){
        cout << infectados[count1] << " ";
    }
}