#include<iostream>

using namespace std;
 
int main(){
    int choice;
    cout<< "choose then temp. coversion:";
    cout<< "\n enter 1 for Fahrenheit to Centigrade:";
    cout<< "\n enter 2 for Centigrade to Fahrenheit:";
    cin>>choice;
    float temp;
    if(choice==1){
        cout<< "enter temp in fahrenheit:";
        cin>> temp;
        float cah = (temp - 32) * 5/9;
        cout<< "the temp in centigrade is:"<< cah;
    }
    else if(choice==2){
        cout<< "enter temp in centigrade:";
        cin>> temp;
        float fah = (temp * 5/9 ) + 32;
        cout<< "the temp in fahrenheit is:"<< fah;
    }
    else{
        cout<< "inviald input";
    }
    return 0;
}