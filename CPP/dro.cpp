#include <bits/stdc++.h>

int main() {
  int k, d;
  std::cin >> k >> d;
  if (d == 0 && k > 1) {
    std::cout << "No solution\n";
  } else {
    std::cout << d;
    for (int i = 1; i < k; i++) {
      std::cout << 0;
    }
  }
  return 0;
}
