#include <bits/stdc++.h>
#include <cstdio>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n, x, y;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    x = y = 0;
    for (int j = i + 2; j < n; j++) {
      if ((arr[j] > arr[i] && arr[j] > arr[i + 1]) ||
          (arr[j] < arr[i] && arr[j] < arr[i + 1]))
        x++;
      else
        y++;
      if (x && y) {
        std::cout << "yes";
        return 0;
      }
    }
  }
  std::cout << "no";
  return 0;
}
