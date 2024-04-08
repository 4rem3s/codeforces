#include <bits/stdc++.h>

using namespace std;

void sortString(string &str) { sort(str.begin(), str.end()); }

int main() {
  string str;
  cin >> str;
  string nStr;
  string result;

  for (char ch : str) {
    if (ch != '+') {
      nStr += ch;
    }
  }

  sortString(nStr);

  for (int i = 0; i < nStr.length(); ++i) {
    result += nStr[i];
    if (i != nStr.length() - 1) {
      result += '+';
    }
  }

  cout << result << "\n";
  return 0;
}
