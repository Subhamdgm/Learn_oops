#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
class Car
{
    public:
    string Brand;
    string model;
    int year;
};
int main(){
    Car obj1,obj2;
    obj1.Brand= "BMW";
    obj1.model ="XY";
    obj1.year =2015;

    obj2.Brand= "Mercedes";
    obj2.model ="V5";
    obj2.year = 2020;
    cout << obj2.Brand <<"\t"<<obj1.model;
    return 0;
}