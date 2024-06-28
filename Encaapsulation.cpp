//Here as we know the default access apecifiers 
//is private so to access private members 
//if users want to set or modify the value
//then they programmers let them do through 
//getter and setter
#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary = s;
    }
    //Getter
    int getSalary(){
        return salary;
    }
};
int main()
{
        Employee obj;
        obj.setSalary(50000);
        cout<<obj.getSalary();
        return 0;
}