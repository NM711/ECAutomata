#ifndef ECAUTOMATA_UTIL_GRID_HPP
#define ECAUTOMATA_UTIL_GRID_HPP

#include <vector>

/*
  Struct that contains information about a position within the grid.
*/

struct Position {
    int row;
    int col;

    Position(int row, int col) {
      this->row = row;
      this->col = col;
    };
};

class Grid {
  public:
    /*
      Sets the rows and columns in our grid
    */
    void setSize(int rows, int cols);
    /*
      Initial element used to populate the grid columns.
    */
    void setPopValue(unsigned int value);
    void setContent(std::vector<std::vector<int>> content);
    std::vector<std::vector<int>> getContent();
    int getRows();
    int getCols();

  private:
    int rows;
    int cols;
    unsigned int value;
    std::vector<std::vector<int>> content;
};

#endif
