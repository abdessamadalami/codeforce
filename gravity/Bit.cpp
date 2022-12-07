
#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    int a;
    int nbr,t,base,size  , j;
    cin >> a;
    t = 0;
    string s;
    for (size_t i = 0; i < a; i++)
    {
        cin >> s;
        size_t found = s.find("+");
        if (found < s.length())
            t++;
        else
        {
           // cout << "here ";
            t--;
        }   
    }
    cout << t << endl;
}