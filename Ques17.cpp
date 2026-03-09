#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // int num,sum = 0;

    // cout<< "enter the num:";
    // cin>> num;

    // for(int i = 1;i < num;i++){

    //     if(num % i == 0){
    //         sum += i;
    //     }
    // }
    // if(num == sum){
    //     cout<< num << " is a perfect num.";
    // }else{
    //     cout<< num << " not prefect num.";
    // }


    int num, original, remainder, digits = 0;
    int result = 0;


    cout<< "enter the num:";
    cin>> num;
    original = num;

    if (num == 0) {
        cout << "Armstrong Number";
        return 0;
    }

    while (original != 0)
    {
        digits++;
        original /= 10;
    }
    original = num;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if (result == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
    
}