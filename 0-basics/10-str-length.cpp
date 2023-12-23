#include <iostream>
using namespace std;

int main() {
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << txt.length() << endl;
    txt[0] = 'Z';
    cout << txt << endl;
    cout << "We are the so-called \"Vikings\" from the north.\n";

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName;
}