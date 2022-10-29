#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    // cout << s1 - s2;
    // std::string str = "hello world";
    printf("%s\n", strcmp(s1.c_str() ,s2.c_str()));
    if (s1 == s1)
        cout << "0\n";
    else if (s1 > s2)
        cout << "1\n";
    else
        cout << "-1\n";
    cout <<endl<< s1 << "\n" << s2 << "\n";
}