#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tam;
    cin >> tam;
    vector<int> v(tam - 1);
    for (int i = 0; i < tam - 1; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < tam - 1; i++)
    {
        if (v[i] != (i + 1))
        {
            cout << (i + 1) << endl;
            return 0;
        }
    }
    cout << tam << endl;
    return 0;
}