#include <iostream>
#include <vector>
#include<cmath>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string str = "abcdefghijklmnopqrstuvwxyz";
    string c;
    cin >> c;
    auto it;
    // std::for_each(itera, nums.end(),
    //     [](int& n) { (n % 2 == 0) ?  n= n + 1 :  n - 1;});
    std::for_each(str.begin(),str.end(),[&](char l){
      
            std::cout << "1" << std::endl;
        });
    // std::for_each(itera, nums.end(),
}
