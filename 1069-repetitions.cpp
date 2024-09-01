#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int maior = 0;
    int soma = 0;
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s[i] == s[i + 1])
            soma++;
        else
        {
            if (soma > maior)
                maior = soma;
            soma = 0;
        }
    }
    cout << (maior + 1) << endl;
    return 0;
}