
#include <bits/stdc++.h>
int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  int r1, r2, c1, c2, d1, d2, a, b, c, d;
  std::cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  d = ((c2 + d1) - r1) / 2;
  c = r2 - d;
  b = c2 - d;
  a = c1 - c;
  if (b == a || b == d || b == c || a == d || a == c || d == c || a < 1 ||
      b < 1 || c < 1 || d < 1 || a > 9 || b > 9 || c > 9 || d > 9) {
    std::cout << "-1";
  } else {
    std::cout << a << " " << b << "\n" << c << " " << d;
  }
  return 0;
}
