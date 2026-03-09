#include<iostream>
using namespace std;

int main(){
    int num_events;
    cout<< "enter no. of event:";
    cin>> num_events;

    for(int i = 1;i<=num_events;i++){

        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " -> Buzz Fuzz";
        }
        else if (i % 3 == 0) {
            cout << i << " -> Buzz";
        }
        else if (i % 5 == 0) {
            cout << i << " -> Fuzz\n";
        }
        else {
            cout <<"\n"<< i <<"\n";
        }
    }

    return 0;
}