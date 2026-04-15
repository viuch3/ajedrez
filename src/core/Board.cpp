#include "Board.h"

int Board::getIndex(std::string coord) {
  return 8 * (int(coord[1]) - int('0') - 1) + int(coord[0]) - 65;
}

std::string Board::getCoord(int index) {
  char c = char(65 + (index % 8));
  int f = (index / 8) + 1;

  std::string coord;
  coord += c;
  coord += std::to_string(f);
  return coord;
}
