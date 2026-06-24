#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string section;
    int mark;
};
int main()
{
    int test_case;
    cin >> test_case;
    for (int t = 1; t <= test_case; t++)
    {
        Student sakib, rakib, akib;
        cin >> sakib.id >> sakib.name >> sakib.section >> sakib.mark;
        cin >> rakib.id >> rakib.name >> rakib.section >> rakib.mark;
        cin >> akib.id >> akib.name >> akib.section >> akib.mark;

        Student highest_mark = sakib;
        if (highest_mark.mark < rakib.mark)
        {
            highest_mark = rakib;
        }
        else if ((highest_mark.mark == rakib.mark) && (rakib.id < highest_mark.id))
        {
            highest_mark = rakib;
        }
        if (highest_mark.mark < akib.mark)
        {
            highest_mark = akib;
        }
        else if ((highest_mark.mark == akib.mark) && (akib.id < highest_mark.id))
        {
            highest_mark = akib;
        }
        cout << highest_mark.id << " " << highest_mark.name << " " << highest_mark.section << " " << highest_mark.mark << endl;
    }
    return 0;
}