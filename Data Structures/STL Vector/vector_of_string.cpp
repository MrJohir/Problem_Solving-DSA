#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    // vector<string> s(n);
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        // cin>>s[i];
        string x;
        // cin>>x;
        getline(cin, x);
        s.push_back(x);
    }

    for (string x : s)
    {
        cout << x << endl;
    }
    return 0;
}