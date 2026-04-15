#pragma once
#include <array>
#include <string>

struct Board {
  std::array<int, 64> tablero{};
  Board () {}
  
  int getIndex(std::string coord);
  std::string getCoord(int index);
};
