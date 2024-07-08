#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, m, x;
  std::cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cin >> x;
      if (x == 1 && (i == 0 || i == n - 1 || j == 0 || j == m - 1)) {
        std::cout << "2\n";
        return 0;
      }
    }
  }
  std::cout << "4\n";
  return 0;
}
