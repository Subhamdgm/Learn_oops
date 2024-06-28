#include<iostream>
using namespace std;
class Summer{
    public:
    void func()
    {
        cout << "meethod defined inside class";

    }
};
int main()
{
    Summer obj;
    obj.func();
    
}