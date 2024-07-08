#include <bits/stdc++.h>
int main() {
  int n, ans;
  std::cin >> n;
  std::vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> vec[i];
    ans = std::gcd(ans, vec[i]);
  }

  std::cout << ans * n << std::endl;
  return 0;
}
