#include<iostream>
using namespace std;

int main(){
    int qty ,price, total, discount = 0;
    cout<< "enter qty:";
    cin>> qty;

    cout<< "enter the price:";
    cin>> price;

    total = price * qty;

    if(qty > 1000){
        discount = total * 0.1;
        total = total - discount;
    }

    cout<< "total expenses:" << total;

}