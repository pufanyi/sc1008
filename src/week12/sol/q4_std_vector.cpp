#include <algorithm>  // for std::sort
#include <iostream>
#include <numeric>  // for std::accumulate
#include <vector>

int main() {
  // Declare a vector to store daily sales.
  std::vector<int> dailySales;

  // TO-DO: Add seven daily sales values to the vector:
  //         120, 200, 150, 80, 90, 220, 100
  //
  //
  dailySales.push_back(120);
  dailySales.push_back(200);
  dailySales.push_back(150);
  dailySales.push_back(80);
  dailySales.push_back(90);
  dailySales.push_back(220);
  dailySales.push_back(100);

  // TO-DO: Print all sales values by using an iterator
  //
  //
  // for (std::vector<int>::const_iterator it = dailySales.begin(); it !=
  // dailySales.end(); ++it) {
  //   std::cout << *it << " ";
  // }
  // std::cout << std::endl;
  for (const auto& sale : dailySales) {
    std::cout << sale << " ";
  }
  std::cout << std::endl;

  // TO-DO: Calculate the average of the sales values and print it
  //
  //
  double sum = std::accumulate(dailySales.begin(), dailySales.end(), 0.0);
  double average = static_cast<double>(sum) / dailySales.size();
  std::cout << "Average: " << average << std::endl;

  // TO-DO: Sort the vector in ascending order using std::sort.
  //
  std::sort(dailySales.begin(), dailySales.end());

  // TO-DO: Print all the sorted sales values by using an iterator
  //
  //
  for (const auto& sale : dailySales) {
    std::cout << sale << " ";
  }
  std::cout << std::endl;

  return 0;
}
