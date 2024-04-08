#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    string word;
    cin >> word;
    int count = word.length();
    if (count > 10) {
      int number = count - 2;
      cout << word[0] << number << word.back() << endl;
    } else {
      cout << word << "\n";
    }
  }

  return 0;
}
