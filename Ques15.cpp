#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "how much num you will enter:";
    cin>> n;

    int num,maxValue;

    cout<< "enter num";
    cin>> maxValue;

    for(int i = 1;i <= n;i++){

        cin>> num;

        if(num > maxValue){
            maxValue = num;
        }
    }
    cout<<"largest num is:"<< maxValue;
    return 0;
}