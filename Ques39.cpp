#include <iostream>
using namespace std;

class PascalTriangle {
private:
    int rows;

public:
    void input() {
        cout << "Enter number of rows: ";
        cin >> rows;
    }

    void generate() {
        for(int i = 0; i < rows; i++) {
            int value = 1;

            for(int space = 1; space <= rows - i; space++)
                cout << " ";

            for(int j = 0; j <= i; j++) {
                cout << value << " ";
                value = value * (i - j) / (j + 1);
            }

            cout << endl;
        }
    }
};

int main() {
    PascalTriangle p;   // object creation

    p.input();
    p.generate();

    return 0;
}