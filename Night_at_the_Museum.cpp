#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    int nbr,size ,j;
    string s;
    cin >> s;
    vector<int> vec;
    size = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        nbr = s[i] - 97;
        
        std::cout << nbr << std::endl;
        // size+= vec[nbr - 1];
    }
    cout << size;
}