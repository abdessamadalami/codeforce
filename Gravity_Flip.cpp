
#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    int a;
    int nbr,t,base,size  , j;
    vector<int> gravity;
    cin >> t;
    nbr = 0;
    for (size_t i = 0; i < t; i++)
    {
        cin >> j;
        gravity.push_back(j);
    }
    sort(gravity.begin(), gravity.end());
    for(int x : gravity)
        std::cout<<x<<" ";
}