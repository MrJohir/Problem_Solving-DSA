#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int english;
};

bool cmp(Student a, Student b)
{
    int totalA = a.math + a.english;
    int totalB = b.math + b.english;

    if (totalA == totalB)
    {
        return a.id < b.id;
    }

    return totalA > totalB;
}

int main()
{
    int n;
    cin >> n;

    Student student[100];

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