#include<iostream>
using namespace std;
class Me
{
    public:
    void function(){
    cout << "Subham Anand";
    }
};
class Mychild:public Me{

};
//Grandchild access
class MyGrandchild:public Mychild{
    
};
int main(){
    MyGrandchild obj;
        obj.function();
        return 0;
}