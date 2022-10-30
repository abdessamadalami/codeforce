#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n,index,k;
    string s;

    cin >> n;
     cin >> s;
    index = 0;
    k = 0;
    while (index < n)
    {
        if (index + 1 < n && s[index] == s[index +1] )
        {
            k++;
         //   cout << "here\n"; 
        }
        index++;
    }
    cout << k;
}