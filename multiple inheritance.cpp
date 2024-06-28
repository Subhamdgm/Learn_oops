#include<iostream>
using namespace std;
class Me{
    public:
    void function(){
        cout << "Hello this is subham Anand";
    }
};
class MyChild{

};
class MyGrandchild{
    public:
    void anotherfunction(){
        cout << "I am Grandchild of Subham";
    }
};
class GrandGrandChild:public MyGrandchild,public Me{
       
};
int main(){

 GrandGrandChild obj;
    obj.anotherfunction();
}