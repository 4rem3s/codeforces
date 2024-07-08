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
    int x = 0, y = 0;
    for (int j = i + 2; j < n; j++) {
      if ((arr[j] > arr[i] && arr[j] > arr[i + 1]) ||
          (arr[j] < arr[i] && arr[j] < arr[i + 1])) {
        x++;
      } else
        y++;
      if (x != 0 && y != 0) {
        std::cout << "yes\n";
        return 0;
      }
    }
  }
  std::cout << "no";
  return 0;
}
