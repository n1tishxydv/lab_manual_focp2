#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class TextProcessor {
private:
    string text;

public:
    void input() {
        cout << "Enter a string: ";
        getline(cin, text);
    }

    void removeExtraSpaces() {
        string result = "";
        int i = 0;

        while(i < text.length() && text[i] == ' ')
            i++;

        for(; i < text.length(); i++) {
            if(text[i] == ' ' && result[result.length()-1] == ' ')
                continue;
            result += text[i];
        }

        if(result[result.length()-1] == ' ')
            result.pop_back();

        text = result;
    }

    void convertSentenceCase() {
        if(text.length() == 0)
            return;

        text[0] = toupper(text[0]);

        for(int i = 1; i < text.length(); i++)
            text[i] = tolower(text[i]);
    }

    void analyze() {
        int words = 0, digits = 0, special = 0;

        for(int i = 0; i < text.length(); i++) {
            if(isdigit(text[i]))
                digits++;
            else if(!isalnum(text[i]) && text[i] != ' ')
                special++;
        }

        if(text.length() > 0)
            words = 1;

        for(int i = 0; i < text.length(); i++)
            if(text[i] == ' ')
                words++;

        cout << "\nProcessed String: " << text << endl;
        cout << "Total Words: " << words << endl;
        cout << "Total Digits: " << digits << endl;
        cout << "Total Special Characters: " << special << endl;
    }

    void validate() {
        bool valid = true;

        for(char ch : text) {
            if(!isalnum(ch) && ch != ' ') {
                valid = false;
                break;
            }
        }

        if(valid)
            cout << "Validation: String contains only alphabets, digits, and spaces.\n";
        else
            cout << "Validation: Invalid characters detected.\n";
    }
};

int main() {
    TextProcessor obj;

    obj.input();
    obj.removeExtraSpaces();
    obj.convertSentenceCase();
    obj.analyze();
    obj.validate();

    return 0;
}