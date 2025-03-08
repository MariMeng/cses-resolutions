#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    vector<int> vt,vc;
    int num;

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> num;
        vt.push_back(num);
    }
    
    for(int i=0;i<m;i++){
        cin >> num;
        vc.push_back(num);
    }

    for(int i = 0;i<m;i++){
        int menor = 0;
        int indxMenor = 0;
        bool b = false;
        
        for(int z = 0;z< n;z++){

            if(vc[i] == vt[z]){
                cout << vt[z] << endl;
                b = true;
                vt.erase(vt.begin()+z);
             //   cout << endl << "funcao" << endl;
            //    for(int x:vt){
            //        cout << x << " ";
             //   }
                break;

            }
            else if((vt[z] < vc[i]) && (vt[z]> menor)){
                menor = vt[z];
                indxMenor = z;
               // cout << "menor: " << menor << "| index: " << indxMenor << endl;
            }
        }
        if((menor!=0) && (b == false)){
            cout << menor  << endl;
            vt.erase(vt.begin()+indxMenor);
        }else if(menor == 0 && b == false) cout << -1 << endl;

        
    }

    return 0;
    
}