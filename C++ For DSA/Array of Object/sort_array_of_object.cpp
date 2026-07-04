#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, mark;
};
bool Compair(Student l, Student r)
{
    return (l.mark == r.mark) ? l.roll < r.roll : l.mark > r.mark;
    // if(l.mark==r.mark)
    // {
    //     return l.roll<r.roll;
    // }
    // else{
    //     return l.mark>r.mark;
    // }
}
int main()
{
    int n;
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].roll >> s[i].mark;
    }
    sort(s, s + n, Compair);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].mark << endl;
    }
    return 0;
}