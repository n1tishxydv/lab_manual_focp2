#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<< "enter here:";
    cin>> ch;

    if(ch >= '0' && ch <= '9'){
        cout<<" it is num";
    }
    else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        char c = ch;

        if(ch >= 'A' && ch <= 'Z'){
            c = c + 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u'){
            cout<< "vowels";
        }
        else{
            cout<< "consonant";
        }
    }
    else{
        cout<< "symbols";
    }
    return 0;
}