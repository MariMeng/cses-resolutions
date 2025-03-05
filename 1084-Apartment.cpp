#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int n,m,k;

    vector<int> apart;
    vector<int> disp;
    int resul = 0;

    cin >> n >> m >> k;
    int t;

    for(int i = 0;i< n;i++){
        cin >> t;
        apart.push_back(t);
    }

    for(int i = 0;i< m;i++){
        cin >> t;
        disp.push_back(t);
    }

    sort(apart.begin(), apart.end());
    sort(disp.begin(), disp.end());
    int i = 0;
    int b = 0;
    for(int v = 0;v<n;v++){
        i=b;
        while(i<m){
            if(apart[v]<(disp[i]-k)){
                b=(i);
                break;
            }
            else if((apart[v] <= (disp[i]+k)) && (apart[v] >= (disp[i]-k)) ){
                b=(i+1);
                resul++;
                break;
            }
            i++;
        }
}
    cout<< resul<< endl;
    return 0;
}
