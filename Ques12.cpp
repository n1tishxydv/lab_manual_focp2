#include<iostream>
using namespace std;

int main(){

    float side1,side2,side3;
    cout<< "enter 1 side of triangle:";
    cin>> side1;
    cout<< "enter 2 side of triangle:";
    cin>> side2;
    cout<< "enter 3 side of triangle:";
    cin>> side3;

    if(side1 == side2 && side2 == side3){
        cout<< "equilateral";
    }
    else if((side1 == side2 && side1 != side3) || (side2 == side3 && side2 != side1) || (side1 == side3 && side1 != side2)){
        cout<< " isosceles";
    }
    else{
        cout<< "scalene";
    }
    return 0;
}