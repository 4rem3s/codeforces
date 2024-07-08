#include <bits/stdc++.h>

std::string intToHex32BitLowercase(unsigned int num) {
  std::stringstream stream;
  stream << std::hex << std::setw(8) << std::setfill('0') << num;
  std::string result = stream.str();

  for (char &c : result) {
    if (c >= 'A' && c <= 'F') {
      c += 32;
    }
  }

  return result;
}

int main() {
  unsigned int num = 1592237099;
  std::string hexString = intToHex32BitLowercase(num);
  std::cout << hexString << std::endl;
  return 0;
}
