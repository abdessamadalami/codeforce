
#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    int a;
    int nbr,t,base,size  , j;
    t = 0;
    int array[4];
    nbr = 0;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> array[i];
        if (array[i] > nbr)
        {
            nbr = array[i];
            j = i;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (i != j)
            cout << nbr - array[i] << " " ;        
    }

}