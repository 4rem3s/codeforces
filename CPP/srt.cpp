#include <algorithm>
#include <bits/stdc++.h>

int main() {
  int n = 7;
  int arr[] = {4, 3, 5, 2, 9, 1, 7};
  std::sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    std::cout << arr[i];
  }
  return 0;
}
