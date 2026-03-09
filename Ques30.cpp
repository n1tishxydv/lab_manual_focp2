#include <iostream>
using namespace std;

class Payroll {
private:
    float salary[10];
    float total = 0, average;

public:
    void inputSalary() {
        cout << "Enter salaries of 10 employees:\n";
        for(int i = 0; i < 10; i++) {
            cin >> salary[i];
        }
    }

    void calculate() {
        for(int i = 0; i < 10; i++) {
            total += salary[i];
        }
        average = total / 10;
    }

    void display() {
        cout << "Total Salary = " << total << endl;
        cout << "Average Salary = " << average << endl;
    }
};

int main() {
    Payroll p;   // object creation

    p.inputSalary();
    p.calculate();
    p.display();

    return 0;
}