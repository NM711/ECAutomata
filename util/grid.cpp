#include "./grid.hpp"

void Grid::setSize(int rows, int cols) {
  this->rows = rows;
  this->cols = cols;
  this->content = std::vector<std::vector<int>>(rows, std::vector<int>(cols, this->value));
};

void Grid::setPopValue(unsigned int value) {
  this->value = value;
};

void Grid::setContent(std::vector<std::vector<int>> content) {
  this->content = content;
};

std::vector<std::vector<int>> Grid::getContent() {
  return this->content;
};

int Grid::getRows() {
  return this->rows;
};

int Grid::getCols() {
  return this->cols;
};
