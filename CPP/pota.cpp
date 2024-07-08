#include <bits/stdc++.h>

int main() {
  int x, y, n, k;
  std::cin >> y >> k >> n;

  x = k - y % k;

  if (x + y > n) {
    std::cout << "-1";
  }

  while (x + y <= n) {
    std::cout << x << " ";
    x += k;
  }

  return 0;
}
