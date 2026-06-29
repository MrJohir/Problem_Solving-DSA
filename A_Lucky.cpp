#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int first_sum = 0;
        int second_sum = 0;
        for (int i = 0; i < 3; i++)
        {
            first_sum += s[i] - '0';
        }
        for (int i = 3; i < 6; i++)
        {
            second_sum += s[i] - '0';
        }
        if (first_sum == second_sum)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}