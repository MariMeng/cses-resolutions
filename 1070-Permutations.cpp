#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int z = n-1;
    int meio = n/2;
    
    if((n == 2) || (n == 3)){ 
        cout << "NO SOLUTION";
    }else{
        for (int i= 0;i<n;i++){    
        if(i == meio){
            cout << n << " ";
            z = n;
        }else if(i<(n/2)){
            cout << z << " ";
            z-=2;
        }else{
            cout << z-2 << " ";
            z -=2;
        }

    }
}
    cout << endl;
    return 0;
}