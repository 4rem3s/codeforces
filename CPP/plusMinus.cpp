#include <bits/stdc++.h>
#include <vector>

int main() {
  int n, p = 0, m = 0, z = 0;
  std::cin >> n;
  std::vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> vec[i];
    if (vec[i] > 0) {
      ++p;
    } else if (vec[i] < 0) {
      ++m;
    } else {
      ++z;
    }
  }
  std::cout << std::fixed << std::setprecision(6);
  std::cout << static_cast<double>(p) / n << "\n";
  std::cout << static_cast<double>(m) / n << "\n";
  std::cout << static_cast<double>(z) / n << "\n";
  return 0;
}
