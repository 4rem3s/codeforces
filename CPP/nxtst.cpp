#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int n, x = 1;
  std::cin >> n;
  std::vector<int> vec(n);
  for (int i = 0; i < n; i++) {
    std::cin >> vec[i];
  }

  std::sort(vec.begin(), vec.end());

  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] == x) {
      x++;
    }
  }
  std::cout << x;
}
