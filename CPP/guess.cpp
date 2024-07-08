#include <bits/stdc++.h>
#include <climits>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, a = -2e9, b = 2e9;
  std::cin >> n;
  while (n--) {
    std::string x;
    int y;
    char z;
    std::cin >> x >> y >> z;
    if ((x == ">=" && z == 'N') || (x == "<" && z == 'Y')) {
      b = std::min(b, y - 1);
    } else if ((x == "<=" && z == 'N') || (x == ">" && z == 'Y')) {
      a = std::max(a, y + 1);
    } else if ((x == "<" && z == 'N') || (x == ">=" && z == 'Y')) {
      a = std::max(a, y);
    } else {
      b = std::min(b, y);
    }
  }
  if (a > b) {
    std::cout << "Impossible\n";
  } else
    std::cout << a;
  return 0;
}
