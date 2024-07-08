#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, x, y;
  std::cin >> n;
  std::set<int> a;
  std::set<int> b;

  for (int i = 0; i < n; i++) {
    std::cin >> x >> y;
    a.insert(x);
    b.insert(y);
  }
  std::cout << std::min(a.size(), b.size());
}
