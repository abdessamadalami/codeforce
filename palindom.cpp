#include <iostream>
#include <vector>
#include<cmath>
#include<algorithm>


using namespace std;

int main()
{
    string str;
    cin >> str;
    int f,l;

    str = str.substr(str.find_first_not_of('a'));
    cout << str << endl;
    // for (l = str.length(); l >= 0; l--)
    // {
    //     if (str[l] != 'a')
    //         break;
    //     str.substr(l, 1);
    // }

    // auto noSpaceEnd = std::remove(str.begin(), str.end(), 'a');
}