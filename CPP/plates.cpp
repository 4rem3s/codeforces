#include <bits/stdc++.h>

int main() {
  int x, y, r;
  std::cin >> x >> y >> r;

  if (x >= 2 * r && y >= 2 * r) {
    std::cout << "First";
  } else {
    std::cout << "Second";
  }
  return 0;
}
