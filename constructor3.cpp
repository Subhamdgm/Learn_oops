//constructor defined outside the class
#include<iostream>
using namespace std;
class  Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x,string y,int z);

};
Car::Car(string x,string y,int z){
    brand = x;
    model = y;
    year = z;
}
int main(){
    Car obj1("BMW","x6",200);
    cout << obj1.year;
}