
#include <iostream>
#include <string>



//static cast with operato just in c++ 11 and in 98 not working 

using namespace std;
class Int {
private:
    int x;
public:
    Int(int x_in):x(x_in)
    {
        cout << "Conversion Constructor called" << endl;
    }
    operator string()
    {
        cout << "Conversion Operator" << endl;
        return to_string(x);
    }
};
int main()
{
    Int obj(3);
    string str = obj;
    obj = 20;
    //string str2 = static_cast<string>(obj);
    //obj = static_cast<Int>(30);
    return 0;
}