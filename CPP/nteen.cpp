#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int n, i, t, e;
  n = t = i = e = 0;
  std::string str;
  std::cin >> str;

  for (int k = 0; k < str.size(); k++) {
    if (str[k] == 'n') {
      n++;
    }
    if (str[k] == 'e') {
      e++;
    }
    if (str[k] == 't') {
      t++;
    }
    if (str[k] == 'i') {
      i++;
    }
  }

  int ans = std::min({(n - 1) / 2, e / 3, i, t});

  std::cout << ans;
  return 0;
}
