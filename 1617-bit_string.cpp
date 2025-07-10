#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;
long long  n;
long long expo_rap(long long base, long long exp){
    int resul = 1;
    for(int i = 0;i<exp;i++){
        resul= (resul*base)%MOD;
    }
    return resul;
}

long long exp_rap(long long base, long long exp){
    long long resul = 1;
    while(exp>0){
        if(exp&1LL)
            resul = (resul*base)%MOD;;
        base = (base*base)%MOD;
        exp = exp/2;
    }
    return resul;
}

int main(){

    cin >> n;

    long long resul = exp_rap(2,n);
    cout << resul << endl;

    return 0;

}