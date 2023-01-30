#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;
    vector<int> score(a);
    for(int score_i = 0; score_i < a; score_i++){
       cin >> score[score_i];
    }
    int c = score[0];
    int d = score[0];

    int e=0;
    int f=0;
    for(int i=1;i<a;++i){
        if(score[i]>c){
            ++e;
            c=score[i];
        }
        if(score[i]<d){
            ++f;
            d=score[i];
        }
    }
    
    cout << e << " "<<f;
    return 0;
}
