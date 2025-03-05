#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x, num;

    vector<int> w;

    cin >> n >> x;

    for(int i = 0;i< n;i++){
        cin >> num;
        w.push_back(num);
    }

    sort(w.begin(), w.end());

    int f = (w.size()-1);
    int i = 0;
    int cont = f;
    int resul = 0;

    while(i<=f){
     //  cout << i << " " << f << " ";

        if(w[f]+w[i]>x){
            f--;
            resul++;
        }
        else if(w[f]+w[i] == x){
            f--;
            resul++;
            i++;
        }
        else{
            cont = w[f];
            cont +=w[i];
            i++;
            f--;
            resul++;
         //   cout << cont << " ";
    
            if(i==f) {
                resul ++;
                break;
            }
        }
}
    cout << resul << endl;

    return 0;
}