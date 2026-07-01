#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, mark;
};
int main()
{
    int n;
    cin >> n;
    Student class_tan[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, class_tan[i].name);
        cin >> class_tan[i].roll >> class_tan[i].mark;
    }
    Student mn;
    mn.mark = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(class_tan[i].mark < mn.mark)
        mn=class_tan[i];
    }
    cout << mn.name << " " << mn.roll << " " << mn.mark;
    return 0;
}