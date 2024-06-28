#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int myNum;
    string myString;
};
int main(){
    solution obj;
    obj.myNum=15;
    obj.myString = "hello";
    cout << obj.myNum<<"\n";
    cout << obj.myString;
    return 0;
}