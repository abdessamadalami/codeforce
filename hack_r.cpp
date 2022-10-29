#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,t, steps,half;
    cin >> t;
    vector<int> vec;
    for (size_t i = 0; i < t; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for (size_t i = 0; i < t; i++) {
        cout << vec[i] << " ";
    }
    return 0;
}
