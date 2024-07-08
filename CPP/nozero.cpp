#include <bits/stdc++.h>

int removeZeros(int number) {
  std::string numStr = std::to_string(number);
  numStr.erase(remove(numStr.begin(), numStr.end(), '0'), numStr.end());
  return std::stoi(numStr);
}

int main() {
  int n, m;
  std::cin >> n >> m;
  if (removeZeros(n) + removeZeros(m) == removeZeros(n + m)) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }
  return 0;
}
