#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // cout << s.size();
    // cout << s.max_size();
    // cout << s.capacity();
    // s.clear();
    // if(s.empty()==true){
    //     cout<<"Empty";
    // }
    // else{
    //     cout<<"Not Empty";
    // }
    s.resize(25,'j');
    cout<<s;
    return 0;
}

// s.size() -> returns the size of the string.
// s.max_size() -> returns the maximum size that string can hold.
// s.capacity() -> returns current available capacity of the string.
// s.clear() -> clear the string.
// s.empty() -> return true/false if the string is empty.
// s.resize() -> change the size of the string.