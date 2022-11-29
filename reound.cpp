#include <vector>
#include<cmath>
#include <algorithm>
#include <iostream>

using namespace std;



// int main()
// {
//     std::vector<int> nums;
//     int e = -1, o = -1, e1 = -1, o1 = -1 ;
//     int N;
//     cin >> N;
//     int elem;
//     for (size_t i = 0; i < N; i++)
//     {
//        cin >> elem;
//        if (elem % 2)
//        {
//         if (o == -1)
//             o = elem ;
//         else if (o1 == -1)
//             o1 = elem ;
//         else
//         {
//             if (elem > o)
//             {
//                 o1 = o ;
//                 o = elem ;
//             }
//             else if (elem > o1)
//                 o1 = elem ;
//         }
//             if (o1 > o)
//             {
//                 int k = o1 ;
//                 o1 = o ;
//                 o = k ;
//             }
//        }
//        else
//        {
//         if (e == -1)
//             e = elem ;
//         else if (e1 == -1)
//             e1 = elem ;
//         else
//         {
//             if (elem > e)
//             {
//                 e1 = e ;
//                 e = elem ;
//             }
//             else if (elem > e1)
//                 e1 = elem ;
//         }
//             if (e1 > e)
//             {
//                 int k = e1 ;
//                 e1 = e ;
//                 e = k ;
//             }
//        }
//        nums.push_back(elem);
//     }   
//     if (o1 + o > e1 + e && o1 != -1 && o != -1)
//         cout << o1 + o << endl ;
//     else
//     {
//         if (e1 == -1 || e == -1)
//             std::cout << -1 << endl ;
//         else
//             cout << e1 + e << endl ;
//     }
//     // sort(nums.begin(), nums.end());
//     // reverse(nums.begin(), nums.end());
//     // int sum = 0;
//     // int index = 0;
//     //  for (size_t i = 0; i < N - 1; i++)
//     // {
//     //     sum = nums[i] + nums[i + 1];
//     //     if (sum % 2 == 0)
//     //         break;
//     // }

//     // else
//     //     cout << sum << endl;
     
// }

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{
    
    string s1,s2;

    cin >> s1;
    s2 = s1;
    // reverseStr(s2);
    int leng = s1.length()/2;
    cout << "s1: " <<  s1 << endl;
    cout << "s2: "<<  s2 << endl;
    if (s1 == s2)
    {
       cout << "YES" << endl;
    }
    s1 = "a" + s1;
    
    //     cout<< "NO\n"<< std::endl;
    // }
}







