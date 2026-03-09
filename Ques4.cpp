#include<iostream>
using namespace std;
int main(){
    int item_no , quantity, unit_price;
    cout<< "enter item_no:";
    cin>> item_no;
    cout<< "enter quantity:";
    cin>> quantity;
    cout<< " enter unit_price:";
    cin>> unit_price;

    int amount = (quantity * unit_price);
    int discount = amount * 0.2;

    cout<< " total amount:"<< amount;
    cout<< " \ndiscount is:"<< discount;
    cout<< " \ntotal amount after discount:"<< (amount - discount);
    return 0;
}