#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, x;
  std::vector<int> vec;
  int a = 0, b = 0, c = 0, d = 0, e = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {

    std::cin >> x;

    if (x == 0) {
      a = 1;
    } else if (x == 100) {
      b = 1;
    } else if (x < 10) {
      c = x;
    } else if (x % 10 == 0) {
      d = x;
    } else
      e = x;
  }

  if (a) {
    vec.push_back(0);
  }
  if (b) {
    vec.push_back(100);
  }
  if (c) {
    vec.push_back(c);
  }
  if (d) {
    vec.push_back(d);
  }
  if (!d && !c && e) {
    vec.push_back(e);
  }

  std::cout << vec.size() << "\n";

  for (auto i : vec) {
    std::cout << i << " ";
  }
  return 0;
}
