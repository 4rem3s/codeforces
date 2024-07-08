#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  long long n, i, j;
  std::cin >> n;

  for (i = 1; i * (i + 1) <= n; i++) {
    int j = std::sqrt(2 * n - i * (i + 1));
    if ((i * (i + 1)) + (j * (j + 1)) == 2 * n) {
      std::cout << "YES";
      return 0;
    }
  }
  std::cout << "NO";
  return 0;
}
