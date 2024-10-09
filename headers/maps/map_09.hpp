#ifndef MAP_09_HPP
#define MAP_09_HPP

#include <vector>

std::vector<std::vector<char>> map = {
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', 'S', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', '-', '+', '-', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', '|', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', '|' },
  { '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+' },
  { '|', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', '|' },
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' }
};

#endif