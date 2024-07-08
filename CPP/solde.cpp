#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  std::cin >> n;
  std::vector<int> vec(n);

  for (int i = 0; i < n; i++) {
    std::cin >> vec[i];
  }

  int y = 0, z = 1;
  int min_diff = std::abs(vec[y] - vec[z]);

  for (int i = 0; i < n; i++) {
    int nx = (i + 1) % n;
    int dif = std::abs(vec[i] - vec[nx]);

    if (dif < min_diff) {
      min_diff = dif;
      y = i;
      z = nx;
    }
  }

  std::cout << y + 1 << " " << z + 1 << "\n";
  return 0;
}

