#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student student[101];

    for (int i = 0; i < n; i++)
    {
        cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].id;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(student[i].section, student[j].section);
    }

    for (int i = 0; i < n; i++)
    {
        cout << student[i].name << " "
             << student[i].cls << " "
             << student[i].section << " "
             << student[i].id << endl;
    }

    return 0;
}