#include<iostream>
using namespace std;
int main()
{
    int nbr,n,l,c;
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            cin >> nbr;
            if (nbr == 1)
            {
                l = i;
                c = j;
                printf("\n%d\n",abs(2 - l)+ abs(2-c));
                break;
            }
        }
    }
}