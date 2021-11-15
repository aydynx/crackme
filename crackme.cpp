#include <iostream>
#include <string>
using namespace std;
int main() {

    string password = "crackme";
    string userInput;

    cout << "password: ";
    cin >> userInput;

    if (userInput == password) {
        cout << "success!" << endl;
    } else {
        cout << "fail." << endl;
    }

    return 0;
}