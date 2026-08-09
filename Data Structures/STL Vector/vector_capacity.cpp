#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout<<v.size();
    // cout<<v.max_size();
    // cout << v.capacity();
    // v.push_back(5);
    // v.clear();
    // // cout<<v[0];
    // if(v.empty())
    // {
    //     cout<<"ture";
    // }
    // else{
    //     cout<<"false";
    // }

    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.resize(2);
    v.resize(8,100);
    for(int x:v)
    cout<<x<<" ";

    return 0;
}