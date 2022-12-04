
#include <iostream>
#include <vector>
#include<cmath>

using namespace std;


int main()
{
    string n;
    char c;
    cin >> n;
    string j = "hello";
    int m = 0;
    for (size_t i = 0; i < n.length(); i++)
    {
        if (j[m] == n[i])
            m++; 
    }
    if(m == j.length() )
        cout << "YES\n";
    else
        cout << "NO\n";
}