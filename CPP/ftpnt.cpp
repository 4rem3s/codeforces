#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;

  for (int i = 0; i < n; i++) {
    if (s[i] != '.') {
      if (s[i] == 'R') {
        while (s[i] == 'R')
          i++;
        std::cout << i << " " << i + 1;
        return 0;
      } else {
        std::cout << i + 1 << " " << i;
      }
      break;
    }
  }
  return 0;
}
