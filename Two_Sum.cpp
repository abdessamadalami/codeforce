#include"sultan.hpp"
#define loop(vec,n) for(int index = 0; index < n; ++index) {cout <<" "<< vec[index] << endl;}
#define input(vec,n) for(int index = 0; index < n; ++index) { cin >> vec[index];}

void add(int element)
{
    cout << " "<< element;   
}
int main()
{
    // 2 7 11 15
    // -1 -2 -3 -4 -5
    // 2 5 5 11 
    int n = 4;
    int target = 10;
    vector<int> nums(n,0);
    vector<int> v;
    input(nums,n);
    
    // copy_if(vec.begin(), vec.end(), v.begin(),[](int n) { return (n % 2) == 0; });
    vector<int> sum(2);

    // copy_if(vec.begin(), vec.end(), v.begin(),[](int n) { return (n % 2) == 0; });
    for (int i = 0; i < nums.size(); i++)
        v.push_back(nums[i]);
    sort(begin(v),end(v));
    loop(v,n);
    int dif;
    int index;
    for (int i = 0; i < v.size(); i++)
    {
        dif = target - v[i];
        auto it = find(v.begin(), v.end(), dif);
        if(it - v.begin() < v.size())
        {
            sum[0] = find(nums.begin(), nums.end(), v[i]) - nums.begin();
            sum[1] = find(nums.begin(), nums.end(), dif) - nums.begin();
            if (sum[0] == sum[1])
            {
                cout << " i am here " << sum[0];
                sum[1] = find(nums.begin() + sum[0] + 1, nums.end(), dif) - nums.begin();
            }
            if (sum[0] > sum[1])
                swap(sum[0],sum[1]);
            cout << sum[0] << " "<< sum[1];
            break;
        }
    }
    // loop(,v.size());
    // copy_if(v1.begin(), v1.end(), v2.begin(), [](int i){return i%2!=0;});
    // cin_v(vec,7);
    // p_v(vec);

}