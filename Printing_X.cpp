#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = n / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i < mid && i == j)
            {
                cout << "\\";
            }
            else if (i < mid && i + j == n - 1)
            {
                cout << "/";
            }

            else if (i == mid && j == mid)
            {
                cout << "X";
            }
            else if (i > mid && i + j == n - 1)
            {
                cout << "/";
            }
            else if (i > mid && i == j)
            {
                cout << "\\";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}