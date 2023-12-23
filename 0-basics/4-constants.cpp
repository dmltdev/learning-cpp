#include <iostream>
using namespace std;

const int minutesPerHour = 60;
const float PI = 3.14;

int main() {
  const int num = 20;
  // num = 10; // error: assignment of read-only variable 'num'
  cout << num << ' ' << minutesPerHour << " " << PI << endl;
}