#include <iostream>
#include <string>
using namespace std;

class UsernameValidator {
private:
    string username;

public:
    void input() {
        cout << "Enter username: ";
        cin >> username;
    }

    bool validate() {
        for(int i = 0; i < username.length(); i++) {
            if(!isalnum(username[i])) {
                return false;
            }
        }
        return true;
    }

    void display() {
        if(validate())
            cout << "Username Accepted" << endl;
        else
            cout << "Invalid Username (No spaces or special characters allowed)" << endl;
    }
};

int main() {
    UsernameValidator u;   // object

    u.input();
    u.display();

    return 0;
}