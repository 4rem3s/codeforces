#include <bits/stdc++.h>
#include <utility>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, t;
  std::string s;

  std::cin >> n >> t;
  std::cin >> s;

  while (t--) {
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        std::swap(s[i], s[i + 1]);
        i++;
      }
    }
  }
  std::cout << s;
  return 0;
}
