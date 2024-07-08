#include <bits/stdc++.h>

int co[6] = {0};

int sq(int i) { return i * i; }

void ans(std::string str) {
  int a, b, c;
  a = sq(co[0] - co[2]) + sq(co[1] - co[3]);
  b = sq(co[0] - co[4]) + sq(co[1] - co[5]);
  c = sq(co[4] - co[2]) + sq(co[5] - co[3]);

  if ((a && b && c) == 0) {
    return;
  }
  if (a + b == c || b + c == a || a + c == b) {
    std::cout << str;
    exit(0);
  }
}

int main() {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  for (int i = 0; i < 6; i++) {
    std::cin >> co[i];
  }

  ans("RIGHT");

  for (int i = 0; i < 6; i++) {
    co[i]--;
    ans("ALMOST");
    co[i] += 2;
    ans("ALMOST");
    co[i]--;
  }

  std::cout << "NEITHER";
  return 0;
}
