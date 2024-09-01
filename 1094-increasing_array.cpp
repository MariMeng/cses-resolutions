#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int long long resul = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int dife = 0;
        if (v[i + 1] < v[i])
        {
            dife = v[i] - v[i + 1];
            v[i + 1] = v[i + 1] + dife;
            resul += dife;
        }
    }

    cout << resul << endl;
    return 0;
}