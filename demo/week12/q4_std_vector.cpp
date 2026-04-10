#include <algorithm>  // for std::sort
#include <iostream>
#include <numeric>  // for std::accumulate
#include <vector>
// #include <map>

int main() {
  // Declare a vector to store daily sales.
  std::vector<int> dailySales;

  dailySales.push_back(120);
  dailySales.push_back(200);
  dailySales.push_back(150);
  dailySales.push_back(80);
  dailySales.push_back(90);
  dailySales.push_back(220);
  dailySales.push_back(100);

  std::cout << "Daily Sales: ";
  for (const auto x: dailySales) {
    std::cout << x << ' ';
  }
  std::cout << std::endl;

  int total = std::accumulate(dailySales.begin(), dailySales.end(), 0);
  double average = static_cast<double>(total) / dailySales.size();
  std::cout << "Average sales: " << average << std::endl;

  std::sort(dailySales.begin(), dailySales.end());

  std::cout << "Sorted Sales: ";
  for (const auto x: dailySales) {
    std::cout << x << ' ';
  }
  std::cout << std::endl;

  return 0;
}
