#include<iostream>
using namespace std;

int main(){

    int choice,num1,num2;

    do {
        cout<< "     \nmenu-driven calculator\n";
        cout<< "1 -> addtion\n";
        cout<< "2 -> Subtraction\n";
        cout<< "3 -> Multiplication\n";
        cout<< "4 -> Division\n";
        cout<< "5 -> Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; 

        if(choice >=1 && choice <=4){
            cout<< "enter your first num:";
            cin>> num1;
            cout<< "enter your second num:";
            cin>> num2;
        }

        switch (choice) {
            case 1:
                cout<< "result ="<< num1 + num2;
                break;
            case 2:
                cout<< "result ="<< num1 - num2;
                break;
            case 3:
                cout<< "result ="<< num1 * num2;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result = " << num1 / num2;
                else
                    cout << "Error! Division by zero.";
                break;
            case 5:
                cout<< "Exiting calculator...";
                break;
            default:
                cout<< "invaild input";
                break;
        }
    }while (choice !=5);

    return 0;    
}