#include <iostream>
using namespace  std;
int main()
{
    int a,b,t, steps,half;
    cin >> t;
 
 for (size_t i = 0; i < t; i++)
 {
    cin >> a;
    cin >> b;
     steps = 0;
    half = b/2 + 1;
    if (a % b == 0)
    {
        cout << 0 << endl;
        continue;;
    }
    if (b > a)
    {
        cout << b - a << endl;
    }
    else
        cout <<  b - a % b << endl; 
 }
}