#include <bits/stdc++.h>

using namespace std;

int main(){
    long int n,m;
    vector<int> vt,vc;
    long int num;

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> num;
        vt.push_back(num);
    }
    
    for(int i=0;i<m;i++){
        cin >> num;
        vc.push_back(num);
    }

    long int z = 0;
    int pos = 0;
    bool egual = false;

    while(!vt.empty() && z<m){

        int p = 0;
        egual = false;

        for(int i = 0;i<vt.size();i++){
            if(vt[i] == vc[z]){
                egual = true;
                vt.erase(vt.begin() + i);
                break;
            }else if((vt[i]>p) && (vt[i] < vc[z])){
                p = vt[i];
                pos = i;                
            }
        }

        if(egual == true){
            cout << vc[z] << endl;
        }else if(p != 0){
            cout << vt[pos] << endl;
            vt.erase(vt.begin()+pos);
        }else{
            cout << -1 << endl;
        }
        z++;
        // for(int elem:vt){
        //     cout << elem << " ";
        // }
        // cout << endl;
    }
///aqui
    
    if(n<m) cout << -1;
    
    return 0;
}