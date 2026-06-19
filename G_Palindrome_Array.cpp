#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            cout << "NO";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "YES";
    return 0;
}