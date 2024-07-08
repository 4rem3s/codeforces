#include <bits/stdc++.h>

int main() {
  int c = 0;
  std::string s1, s2;
  std::cin >> s1 >> s2;
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] != s2[i]) {
      c++;
    }
  }
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  if (c == 2 && s1 == s2) {
    std::cout << "YES\n";
  } else
    std::cout << "NO\n";
  return 0;
}
