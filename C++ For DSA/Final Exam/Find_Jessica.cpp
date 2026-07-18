#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    // bool flag = true;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            // flag = false;
            // break;
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    // if (flag == false)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }
    return 0;
}