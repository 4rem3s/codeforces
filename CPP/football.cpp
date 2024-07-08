#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::string str[1001];
  for (int i = 0; i < n; i++) {
    std::cin >> str[i];
  }
  std::sort(str, str + n);
  std::cout << str[n / 2];
  return 0;
}
