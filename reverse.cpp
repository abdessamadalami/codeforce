#include <vector>
#include<cmath>
#include <algorithm>
#include <iostream>

using namespace std;


int main()
{
    
    string s1;
    int S,L;

    cin >> S;
    cin >> s1;
    S--, L--;
    for (int i = 0; i < S; i++)
    {
        cout << s1[i];
    }
    for (int i = L; i >= S; i--)
    {
        cout << s1[i];
    }
    for (int i = L + 1; i < s1.length(); i++)
    {
        cout << s1[i];
    }

    //     cout<< "NO\n"<< std::endl;
    // }
}
