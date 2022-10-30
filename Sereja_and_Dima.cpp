#include <iostream>
#include <vector>
#include<cmath>
#include <list>
using namespace std;



// 7
// 1 2 3 4 5 6 7
int main()
{
    int t,k,f,b;
    int s,d;
     list<int> card; 
    cin >> t;
    s = d = 0;

    int c = 1;
    for (size_t i = 0; i < t; i++)
    {
        cin>>k;
        card.push_back(k);
    }
    int i = 1;
    while (!card.empty())
    {
       if (card.front() > card.back())
       {
          if (i % 2 == 0)
            s+= card.front();
          else
            d+= card.front();
          card.pop_front();
       }
       else
       {
            if (i % 2 == 0)
                s+= card.back();
            else
                d+= card.back();
            card.pop_back();
       }

       i++;
    }   
    cout  << d << " " << s << endl;
}

