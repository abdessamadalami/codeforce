
#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    int a;
    int nbr,t,base,size  , j;
    cin >> a;
    cin >> nbr;
    t = 0;
    int array[a];
    for (size_t i = 0; i < a; i++)
    {
        cin >> array[i];
        // if (array[i] >= nbr)
        //     t++;
    }
    if (array[nbr - 1] > nbr)
    {
        cout << nbr;
    }
    else
     cout << 0 << endl;
    // cout << t << endl;
}