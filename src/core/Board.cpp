#include "Board.h"
#include <iostream>

int main() {
  Board b = Board();
  for (int i = 0; i < b.tablero.size(); i++) {
    std::cout << b.tablero[i] << "\n";
  }
}


