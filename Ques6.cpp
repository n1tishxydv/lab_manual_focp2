#include<iostream>
using namespace std;
int main(){
    int basic_sal, net_sal,bouns;
    cout<< "enter your basic salary:";
    cin>> basic_sal;

    bouns = basic_sal * 0.12;
    net_sal = basic_sal + bouns;

    cout<< " basic salary:"<< basic_sal;
    cout<< " \nbouns:"<< bouns;
    cout<< " \nnet_sal:"<< net_sal;
    return 0;

}