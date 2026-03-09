#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter marks for 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}