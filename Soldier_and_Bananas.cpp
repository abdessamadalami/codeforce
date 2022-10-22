#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

int main()
{
    int k,n,w;

    cin >> k;
    cin >> n;
    cin >> w; // 3 17 4 30
    
    int a = k * ((pow(w,2) + w) / 2) - n;
    if (a < 0)
     cout << 0 << endl;
    else
        cout << a << endl;
}