#include <bits/stdc++.h>
#include <vector>

int main() {
  int n, m;
  char c;
  std::cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      std::cin >> c;
      if (c == '.') {
        if (i + j % 2 == 0) {
          std::cout << 'B';
        } else {
          std::cout << 'W';
        }
      } else {
        std::cout << '-';
      }
    }
    std::cout << "\n";
  }
  return 0;
}
