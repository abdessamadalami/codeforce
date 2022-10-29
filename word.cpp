#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    string s1,s2, s;
    int r,r2;
    r = r2 = 0;
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
            r++;
        else if (islower(s[i]))
            r2++;
    }
    if (r > r2)
         transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
         transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
}