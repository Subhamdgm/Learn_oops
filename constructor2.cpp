#include<iostream>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x,string y,int z)
    {
        brand = x;
        model =y; year = z;

    }
};

int main(){
    Car obj1("BMW","X5",1000);
    Car obj2("Mercedes","X9",2000);
    cout << obj2.brand;
    return 0;


}
