#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    long long id;
    int math;
    int english;
};

bool cmp(Student a, Student b)
{
    if (a.english != b.english)
        return a.english > b.english;

    if (a.math != b.math)
        return a.math > b.math;

    return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;

    Student student[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> student[i].name
            >> student[i].cls
            >> student[i].section
            >> student[i].id
            >> student[i].math
            >> student[i].english;
    }

    sort(student, student + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << student[i].name << " "
             << student[i].cls << " "
             << student[i].section << " "
             << student[i].id << " "
             << student[i].math << " "
             << student[i].english << endl;
    }

    return 0;
}