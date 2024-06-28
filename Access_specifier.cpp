//Error since member is private and trying to access 
//from outside
//By default all members are private 
#include<iostream>
using namespace std;
class sol{
    public:
    int x;
    private
    int y;
};
int main()
{
    sol obj1;
    obj1.x = 10;
    obj1.y =20;
    cout << obj1.x <<"\n";
    cout << obj1.y <<endl;
    return 0;
}