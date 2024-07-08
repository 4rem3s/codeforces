#include <bits/stdc++.h>
int arr[20];
int main() {
  int a, x;
  char c;
  std::cin >> a;
  for (int i = 1; i <= 16; i++) {
    std::cin >> c;
    if (c != '.') {
      x = c - '0';
      arr[x] = arr[x] + 1;
    }
  }
  for (int i = 0; i <= 9; i++) {
    if (arr[i] > a * 2) {
      std::cout << "NO\n";
      return 0;
    }
  }
  std::cout << "YES\n";
  return 0;
}
