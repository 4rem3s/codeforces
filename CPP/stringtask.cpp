#include <bits/stdc++.h>
using namespace std;
int main() {
  string word;
  cin >> word;

  transform(word.begin(), word.end(), word.begin(), ::tolower);

  string nWord;

  for (char ch : word) {
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
        ch != 'y') {
      nWord += '.';
      nWord += ch;
    }
  }

  cout << nWord << "\n";

  return 0;
}
