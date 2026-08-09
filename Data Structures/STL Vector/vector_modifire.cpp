#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {10, 20, 30, 40};
    v2.push_back(6);
    v2.pop_back();
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    // v.erase(v.begin()+2,v.begin()+6);
    // replace(v.begin(),v.end(),5,50);
    // for(int x: v)
    // cout<<x<<endl;
    auto it = find(v.begin(), v.end(), 5);
    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    cout << v.back() << endl;
    cout << v[v.size() - 1] << endl;
    cout << v.front() << endl;
    cout << v[0] << endl;

    // iterators
    for(auto it = v.begin(); it<v.end(); it++)
    {
        cout<< *it<<" ";
    }
    return 0;
}