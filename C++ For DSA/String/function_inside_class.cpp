#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int english;
    int math;

    Student(string name, int english, int math)
    {
        this->name = name;
        this->english = english;
        this->math = math;
    }
    void total()
    {
        cout << name << " Total Mark is: " << english + math << endl;
    }
};
int main()
{
    Student johir("Johirul", 89, 74);
    Student jihan("Jihan Khan", 56, 80);
    johir.total();
    jihan.total();
    return 0;
}