#include<iostream>
using namespace std;

int main(){
    int num;

    cout<< "enter the num:";
    cin>> num;

    bool check = 1;

    for(int i = 2;i < num;i++){
        if(num % i == 0){
            check = 0;
            break;
        }
    }
    if(check == 1){
        cout<< " prime num ";
    }else{
        cout<< "not prime num";
    }
    

}