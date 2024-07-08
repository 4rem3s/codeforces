#include <iostream>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int arr[100] = {0};
  int n, x, y;
  std::cin >> n >> x >> y;

  int a, b;
  for (int i = 0; i < n - 1; i++) {
    std::cin >> a >> b;
    for (int j = a; j < b; j++) {
      arr[j]++;
    }
  }
  int c = 0;
  for (int i = x; i < y; i++) {
    if (arr[i] == 0)
      c++;
  }
  std::cout << c << "\n";
  return 0;
}
