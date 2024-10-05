#ifndef GRID_NAVIGATOR_HPP
#define GRID_NAVIGATOR_HPP

#include <vector>

class GridNavigator {
public:
  // 생성자 - 맵 데이터와 방문 배열 초기화
  GridNavigator(const std::vector<std::vector<char>> &map)
      : map(map), visited(map.size(), std::vector<bool>(map[0].size(), false)) {}

  // 유효한 이동인지 확인하는 함수
  virtual bool isValidMove(int x, int y) const {
    if (x < 0 || x >= map.size() || y < 0 || y >= map[0].size())
      return false;                  // 맵 경계를 벗어난 경우
    if (visited[x][y]) return false; // 이미 방문한 경우
    if (map[x][y] == '+' || map[x][y] == '|' || map[x][y] == '-')
      return false; // 벽 또는 장애물인 경우
    return true;
  }

  // 휴리스틱 함수 (맨해튼 거리)
  int heuristic(int x1, int y1, int x2, int y2) const {
    return std::abs(x1 - x2) + std::abs(y1 - y2);
  }

protected:
  const std::vector<std::vector<char>> &map; // 맵 데이터 (참조로 보관)
  std::vector<std::vector<double>> g;
  std::vector<std::vector<double>> rhs;
  std::vector<std::vector<bool>> visited; // 방문 여부 벡터

  const int dx[4] = { -1, 1, 0, 0 }; // 이동 방향 배열 (상, 하, 좌, 우)
  const int dy[4] = { 0, 0, -1, 1 }; // 이동 방향 배열 (상, 하, 좌, 우)
};

#endif