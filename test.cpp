#include <iostream>
using namespace std;
 
class Example {
public:
    const static int a = 5;
 
  
};
std::ostream &operator<<(std::ostream &rhs, Example &a)
{
    cout << a.a << endl;
    return rhs;
}
// Example fun()
// {
//      Example E1;
//      //E1.a= 100000;
//      cout << "in fun " << &E1 << endl;
//      return E1;
// }
int main()
{
    Example a;
    Example b;
    Example c;
    cout << a << b << c;;
}