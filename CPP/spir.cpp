#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int x, y;
  std::cin >> x >> y;

  if (x == 0 && y == 0) {
    std::cout << "0\n";
  } else if (y > x && x >= -y) {
    std::cout << 4 * std::abs(y) - 2;
  } else if (y < x && x <= -y + 1) {
    std::cout << 4 * std::abs(y);
  } else if (y <= x && x > -y + 1) {
    std::cout << 4 * std::abs(x) - 3;
  } else if (y >= x && x < -y) {
    std::cout << 4 * std::abs(x) - 1;
  }

  return 0;
}
