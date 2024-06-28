//method defined outside the class and accesed through main
#include<iostream>
using namespace std;
class sol{
    public:
    int  func(int maxspeed);
};
  sol::func(int maxspeed){
    //cout <<"methods defined outside the class";
    return maxspeed;
}



int main(){
sol obj;
cout <<obj.func(200);
}