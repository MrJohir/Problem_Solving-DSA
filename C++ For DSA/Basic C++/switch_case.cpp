#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // switch (n % 2)
    // {
    // case 0:
    //     cout << "Even";
    //     break;
    // case 1:
    //     cout << "Odd";
    // }
    switch (n)
    {
    case 1:
        cout << "Saturday";
        break;
    case 2:
        cout << "Sunday";
        break;
    case 3:
        cout << "Monday";
        break;
    case 4:
        cout << "Tuesday";
        break;
    case 5:
        cout << "Wednesday";
        break;
    case 6:
        cout << "Thursday";
        break;
    case 7:
        cout << "Friday";
        break;
    default:
        cout << "Others day";
        break;
    }
}