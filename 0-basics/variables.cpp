#include <iostream>

using namespace std;

int age = 20;
double money = 50.50;
char direction = 'N';
string north = "North";
bool isLoggedIn = false; // cout returns 0 if false and 1 if true

int main() {
  cout << age << " " << money << " " << direction << " " << north << " " << isLoggedIn << endl;
  age++;
  cout << age << endl;

  int x = 5;
  int y = 12;
  int z = x + y;
  cout << z << endl;
}