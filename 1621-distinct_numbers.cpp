#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     vector<int> v;
//     int x, elem;
//     cin >> x;
//     for (int i = 0; i < x; i++)
//     {
//         cin >> elem;
//         v.push_back(elem);
//     }
//     sort(v.begin(), v.end());

//     v.erase(unique(v.begin(), v.end()), v.end());

//     cout << v.size() << endl;
//     return 0;
// }

int main()
{
    set<int> s;
    int x, a;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> a;
        s.insert(a);
    }
    cout << s.size();
    return 0;
}


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