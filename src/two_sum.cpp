#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {
    if (arr.empty()) {
      return std::nullopt;
    }
    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int left = 0;
    int right = static_cast<int>(arr.size() - 1);
    while (arr[left] + arr[right] != sum and left != right) {
      if (arr[left] + arr[right] < sum) {
        left++;
      } else {
        right--;
      }
    }
    if (left != right) {
      return std::make_pair(left, right);
    }
    return std::nullopt;
  }
}  // namespace assignment