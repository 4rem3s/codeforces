#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (i != j && j != k && k != i && arr[i] == arr[j] + arr[k]) {
          std::cout << i + 1 << " " << k + 1 << " " << j + 1;
          return 0;
        }
      }
    }
  }
  std::cout << "-1";
  return 0;
}
