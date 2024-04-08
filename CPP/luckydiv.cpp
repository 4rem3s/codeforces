#include <bits/stdc++.h>

using namespace std;

int main() {

  int number;
  cin >> number;
  if (number % 7 == 0 || number % 4 == 0 || number % 47 == 0 ||
      number % 74 == 0 || number % 447 == 0 || number % 474 == 0 ||
      number % 477 == 0 || number % 747 == 0 || number % 774 == 0) {
    cout << "YES";
  }

  else {
    cout << "NO";
  }
  return 0;
}
