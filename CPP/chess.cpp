#include <bits/stdc++.h>
int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int r1, c1, r2, c2;
  std::cin >> r1 >> c1 >> r2 >> c2;
  int Rook, Bishop, King;
  if (r1 == r2 || c1 == c2) {
    Rook = 1;
  } else {
    Rook = 2;
  }
  if (abs(r1 - r2) == abs(c1 - c2)) {
    Bishop = 1;
  } else if ((r1 + c1) % 2 != (r2 + c2) % 2) {
    Bishop = 0;
  } else {
    Bishop = 2;
  }
  King = std::max(std::abs(r1 - r2), std::abs(c1 - c2));

  std::cout << Rook << " " << Bishop << " " << King;
  return 0;
}
