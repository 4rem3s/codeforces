#include <bits/stdc++.h>

using namespace std;

int main() {
  string str;
  cin >> str;
  string hello = "hello";
  int j = 0;
  for (int i = 0; i < str.length(); ++i) {
    if (str[i] == hello[j]) {
      ++j;
      if (j == 5) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
  return 0;
}
