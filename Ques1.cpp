#include<iostream>

using namespace std;

int main(){
    int num1,num2,num3;
    cout<< "enter num1 :";
    cin>> num1;
    cout<< "enter num2:";
    cin>>num2;
    cout<< "enter num3:";
    cin>>num3;
    int avg = (num1+num2+num3)/3;
    cout<< "the avg is:" << avg;
    return 0;
}