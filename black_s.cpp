#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    int nbr,size ,j;
    string s;
    vector<int> vec;
    size = 0;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> j;
        vec.push_back(j);
    }
    cin >> s;
    for (size_t i = 0; i < s.length(); i++)
    {
        nbr = s[i] - '0';
        size+= vec[nbr - 1];
    }
    cout << size;
}

// Fireball *fireball = dynamic_cast<Fireball*>(spell);
//     Frostbite *frostbite = dynamic_cast<Frostbite*>(spell);
//     Thunderstorm *strom = dynamic_cast<Thunderstorm*>(spell);
//     Waterbolt *water = dynamic_cast<Waterbolt*>(spell);