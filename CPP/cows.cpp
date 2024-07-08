#include <bits/stdc++.h>

int main() {
  int p, ans = 1;
  std::cin >> p;

  for (int i = 2; i < p; i++) {
    if (std::gcd(i, p - 1) == 1) {
      ans++;
    }
  }
  std::cout << ans;
}
