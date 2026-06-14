#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>> x;

    if(x>=48 && x<= 57)
    {
        x+=48;
        cout<< "IS DIGIT";
    }
    else if(x>='A' && x<='Z')
    {
        cout<< "ALPHA" << endl;
        cout<< "IS CAPITAL";
    }
    else if(x>='a' && x<='z')
    {
        cout<< "ALPHA" << endl;
        cout<< "IS SMALL";
    }
    return 0;
}