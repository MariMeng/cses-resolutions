#include <bits/stdc++.h>

using namespace std;

int main(){
    string  s;
    vector <string> alfa;
    vector <string> beta;
    
    vector <long long> n;

    cin >> s;

    for(char c: s){
        alfa.push_back(string(1,c));
    }

    long long tam = s.length();
    sort(alfa.begin(), alfa.end());
    long long v = 1;
    for(long long i = 0;i< tam;i++){
        
        if(alfa[i]==alfa[i+1]){
            v+=1;
        }else{
            beta.push_back(alfa[i]);
            
            n.push_back(v);
            v = 1;
        }
    }

    bool solut = true; 
    long long impar = 0;
    for(long long c : n){
        if(tam%2==0){
            if(c%2!=0){
                solut = false;
                break;            
            }
        }else{
            if(c%2!=0){
                impar++;
                if(impar>=2){
                    solut = false;
                    break;
                }
            }
        }
    }


    int z = 0;
    int pos = 0;
    long long tamanho = tam-1;
    if(solut){
        vector <string> resul(tam,"");

        for(int i = 0;i<n.size();i++){
            
            if((n[i])%2==0){
                pos +=n[i];
            while(z<pos/2){
                resul[z] = beta[i];
                resul[tamanho-z] = beta[i];
                z++;
            }
        }else{
            if(n[i]==1)
            resul[tam/2] = beta[i];
            else{
                resul[tam/2] = beta[i];
                int u = 0;
                while(u<n[i]/2){
                u++;
                resul[(tamanho/2)-u] = beta[i];
                resul[(tamanho/2)+u] = beta[i];
                }
            }
        }
        }

        for(string s:resul){
            cout << s;
        }
        cout << endl;
        
    }
    else cout << "NO SOLUTION" << endl;
    return 0;
}