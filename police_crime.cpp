#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int police ,crime,h, crime_index;;
    int n;
    cin >> n;
    police = crime_index = 0;
    crime = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> h;
        if ( i > 0)
        {
            if (h < 0)
            {
                crime = h;
                if (police > 0)
                {
                    police += crime;
                }
                else
                    crime_index++;
            }
            else
                police += h;
        }
       else if (h < 0)
       {
           crime = h;
           crime_index++;
       }
       else if (h > 0)
            police = h;
    }
    cout << crime_index << endl;
}
