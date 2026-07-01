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
    for (int i = 0; i < n; i++)
    {
        cout << class_tan[i].name << " " << class_tan[i].roll << " " << class_tan[i].mark << endl;
    }
    return 0;
}