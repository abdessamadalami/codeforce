#include<iostream>
using namespace std;
int main()
{
    int n,l,c;

    cin >> n;

    string str;
    int nbr = 1;
    char s;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> str;
        if(i == 0)
            s = str[1];
        else if (i != 0 && str[1] != s)
        {
            s = str[1];
            nbr++;
        }
    }
    cout << nbr << endl;
}