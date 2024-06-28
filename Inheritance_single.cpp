#include<iostream>
using namespace std;
//single level iheritance
class vehicle{
    public:
    string brand = "Ford";
    void honk(){
        cout<<"This is inheritance\n";

    }
};
//inheriting class objects 
class car: public vehicle{
    public:
        string model = "Mustang";
};
//we can see that throgh one object of derived class we have acceesed both class memeners
 
int main(){
        car obj;
        obj.honk();
        cout << obj.brand + "" + obj.model;
        return 0;
}