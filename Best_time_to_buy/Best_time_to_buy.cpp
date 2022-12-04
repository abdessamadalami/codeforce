#include "../sultan.hpp"

#define loop(vec,n) for(int index = 0; index < n; ++index) {cout <<" "<< vec[index] << endl;}
#define input(vec,n) for(int index = 0; index < n; ++index) { cin >> vec[index];}

// void add(int element)
// {
//     cout << " "<< element;   
// }
int max_index; 
int min_index; 

int main()
{

    int n;
    cin >> n;
    vector<int> nums(n,0);
    input(nums, n);
    int min = nums[0];
    int diff = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > nums[i])
        {
            min = nums[i]; 
        }
        if (min < nums[i])
        {
            if(diff < nums[i] - min)
            {
                cout << "i am in if ";
                diff = nums[i] - min;
            }
        }
    }
}