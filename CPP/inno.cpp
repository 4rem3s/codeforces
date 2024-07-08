#include <bits/stdc++.h>

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, m, i, j, a, b, z = INT_MAX;
  std::cin >> n >> m >> i >> j >> a >> b;

  int x[] = {1, n, n, 1};
  int y[] = {m, 1, m, 1};

  for (int k = 0; k < 4; k++) {
    if (abs(x[k] - i) % a == 0 && abs(y[k] - j) % b == 0) {
      int l = abs(x[k] - i) / a;
      int m = abs(y[k] - j) / b;
      if ((l - m) % 2 == 0)
        z = std::min(std::max(l, m), z);
    }
  }
  if (z == INT_MAX || (z != 0 && (n <= a || m <= b))) {
    std::cout << "Poor Inna and pony!";
  } else {
    std::cout << z;
  }
  return 0;
}
