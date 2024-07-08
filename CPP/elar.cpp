#include <bits/stdc++.h>

int main() {

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n;
  std::cin >> n;
  std::string str;
  std::cin >> str;

  for (int i = 1; i <= n / 2; i++) {
    if (str[i - 1] == 'R') {
      std::cout << n / 2 + i << " " << i << "\n";
    } else {
      std::cout << i << " " << n / 2 + i << "\n";
    }
  }

  return 0;
}
