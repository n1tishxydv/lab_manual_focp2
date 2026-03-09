#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,D ,root1,root2;
    cout<< "enter coffisent of x^2:";
    cin>> a;
    cout<< "enter coffisent:";
    cin>> b;
    cout<< "enter constant:";
    cin>> c;

    D = (b * b) - (4 * a * c);


   
    if (D > 0){
        cout<< "real and dist";
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        cout<< "root1:" << root1;
        cout<< "\nroot2:" << root2;
    }
    else if(D == 0){
        cout<< "real and equal roots\n";
        root1 = -b /(2*a);
        cout<< "root:"<< root1;
    }
    else{
        cout<< " Complex roots\n";
        int realpart = (-b /(2*a));
        int imagpart = sqrt(-D)/(2*a);
        cout<< "root1:" << realpart << "+" << imagpart << "i\n";
        cout<< "root2:" << realpart << "-" << imagpart << "i\n";
    }
    return 0;
}