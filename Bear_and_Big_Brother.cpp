
#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    int a,b;
    int w_a;
    int w_b; 
    cin >> a >> b;

    int index = 1;
    while(a <= b)
    {
        a *= 3;
        b *= 2;
       // cout << a << " " << b << "\n";
        index++;
    }
    cout << index -1 << endl;
}

