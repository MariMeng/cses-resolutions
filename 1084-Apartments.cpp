#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;

    cin >> n >> m >> k;
    vector<int> v;
    vector<int> s;
    int elem;
    int resul = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        v.push_back(elem);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> elem;
        s.push_back(elem);
    }
    int i = 0;

    for (int z = 0; z < n; z++)
    {
        while (!((v[z] >= (s[i] - k)) && (v[z] <= (s[i] + k))))
        {
            i++;
            if (i == m)
                break;
        }

        if (v[z] >= s[i] - k && v[z] <= s[i] + k)
        {
            s.erase(s.begin() + i);
            resul++;
        }
        i = 0;
    }
    cout << resul << endl;

    return 0;
}