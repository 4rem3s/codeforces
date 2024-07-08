#include <bits/stdc++.h>
#include <ios>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int a[12] = {0};
  std::string arr[12] = {"C",  "C#", "D",  "D#", "E", "F",
                         "F#", "G",  "G#", "A",  "B", "H"};
  std::string x, y, z;
  std::cin >> x >> y >> z;
  for (int i = 0; i < 12; i++) {
    if (x == arr[i] || y == arr[i] || z == arr[i]) {
      a[i] = 1;
    }
  }
  for (int i = 0; i < 12; i++) {
    if (a[i] == 1) {
      if (a[(i + 4) % 12] == 1 && a[(i + 7) % 12] == 1) {
        std::cout << "major\n";
        return 0;
      }
      if (a[(i + 3) % 12] == 1 && a[(i + 7) % 12] == 1) {
        std::cout << "minor\n";
        return 0;
      }
    }
  }
  std::cout << "strange\n";
  return 0;
}
