#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for (char ch : s)
    {
        ch = tolower(ch);
        if (ch == 'e')
            e++;
        else if (ch == 'g')
            g++;
        else if (ch == 'y')
            y++;
        else if (ch == 'p')
            p++;
        else if (ch == 't')
            t++;
    }
    cout << min({e, g, y, p, t});
    return 0;
}