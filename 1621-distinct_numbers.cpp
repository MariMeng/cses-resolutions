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

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    set<int> s;
    cin >> n;
    int num;

    for(int i=0;i<n;i++){
        cin >> num;
        s.insert(num);
    }

    cout << s.size() << endl;

    return 0;
}