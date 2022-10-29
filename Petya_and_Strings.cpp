#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    string s1,s2;
    int r;
    cin >> s1;
    cin >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    r = strcmp(s1.c_str() ,s2.c_str());
    // cout << r << "\n";
    if (r < 0)
        cout << "-1\n";
    else
        cout << r;
}