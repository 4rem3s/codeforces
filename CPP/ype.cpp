#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::unordered_set<int> nums(arr, arr + n);

  int maxFr = 0;
  for (int num : nums) {
    int freq = std::count(arr, arr + n, num);
    if (freq > maxFr) {
      maxFr = freq;
    }
  }
  if (maxFr > (n + 1) / 2) {
    std::cout << "NO";
  } else {
    std::cout << "YES";
  }
  return 0;
}
