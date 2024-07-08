#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n, m, z, neg = 0, ps = 0, x = 0, y = 0;
  std::cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    std::cin >> z;
    if (z == 1) {
      ps++;
    } else {
      neg++;
    }
  }
  z = std::min(ps, neg);
  for (int i = 1; i <= m; i++) {
    std::cin >> x >> y;
    int len = y - x + 1;
    if ((len % 2) != 0 || (len / 2 > z)) {
      std::cout << "0\n";
    } else {
      std::cout << "1\n";
    }
  }
  return 0;
}

