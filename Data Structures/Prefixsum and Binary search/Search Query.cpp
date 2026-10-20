#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0;
        int r = n - 1;
        int flag = 0;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (x == v[mid])
            {
                flag = 1;
                break;
            }
            else if (x < v[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}