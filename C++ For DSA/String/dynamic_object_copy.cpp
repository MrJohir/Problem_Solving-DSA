#include <bits/stdc++.h>
using namespace std;

class Footble
{
public:
    string country;
    int jursy;

    Footble(string country, int jursy)
    {
        this->country = country;
        this->jursy = jursy;
    }
};
int main()
{
    Footble *messi = new Footble("Argentina", 7);
    Footble *nymer = new Footble("Brazil", 11);
    // messi=nymer;
    // delete nymer;
    // cout<<messi->country<<" "<<messi->jursy;

    // messi->country=nymer->country;
    // messi->jursy=nymer->jursy;
    // delete nymer;
    // cout<<messi->country<<" "<<messi->jursy;

    *messi=*nymer;
    delete nymer;
    cout<<messi->country<<" "<<messi->jursy;
    return 0;
}