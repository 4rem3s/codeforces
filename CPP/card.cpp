#include <bits/stdc++.h>
#include <regex>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  std::string str = "6789TJQKA";
  std::string f, s;
  char t;
  std::cin >> t >> f >> s;

  if (str.find(f[0]) > str.find(s[0]) && f[1] == s[1]) {
    std::cout << "YES";
  } else if (f[1] == t && s[1] != t) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
  return 0;
}
