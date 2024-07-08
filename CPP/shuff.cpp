#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::ifstream inputFile("input.txt");
  std::ofstream outputFile("output.txt");

  int n;
  inputFile >> n;
  for (int i = 0; i < 3; i++) {
    int x, y;
    inputFile >> x >> y;
    if (x == n) {
      n = y;
    } else if (y == n) {
      n = x;
    }
  }
  outputFile << n;

  inputFile.close();
  outputFile.close();

  return 0;
}

