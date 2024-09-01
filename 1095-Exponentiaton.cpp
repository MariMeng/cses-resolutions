#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int long r, s;
    long long resul;

    for (int i = 0; i < q; i++)
    {
        cin >> r >> s;
        resul = pow(r, s);
        cout << resul << endl;
    }

    return 0;
}