#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, m, k;
  std::cin >> n >> m >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  if (m <= k) {
    std::cout << "0";
    return 0;
  }
  int x = 0;
  std::sort(arr, arr + n);
  for (int i = n - 1; i > -1; --i) {
    k += arr[i] - 1;
    x++;
    if (k >= m) {
      std::cout << x;
      return 0;
    }
  }
  std::cout << -1;
}
