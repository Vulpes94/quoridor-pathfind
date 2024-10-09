#ifndef MAP_19_HPP
#define MAP_19_HPP

#include <vector>

std::vector<std::vector<char>> map = {
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', 'S', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+' },
  { '|', '.', '|', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+', ' ', '+' },
  { '|', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|' },
  { '+', '-', '+', '-', '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', '|' },
  { '+', ' ', '+', '-', '+', '-', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
  { '|', '.', '|', '.', ' ', '.', ' ', '.', '|', '.', ' ', '.', ' ', '.', ' ', '.', '|', '.', '|' },
  { '+', ' ', '+', ' ', '+', '-', '+', '-', '+', ' ', '+', '-', '+', '-', '+', '-', '+', '-', '+' },
  { '|', 'E', ' ', 'E', ' ', 'E', ' ', 'E', '|', 'E', ' ', 'E', ' ', 'E', ' ', 'E', ' ', 'E', '|' },
  { '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+', '-', '+' }
};

#endif