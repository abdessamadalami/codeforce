
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
        index++;
    }
    cout << index -1 << endl;
}

