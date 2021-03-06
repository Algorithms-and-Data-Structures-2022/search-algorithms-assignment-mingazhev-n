#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.

    int left_index = 0;
    int right_index = arr.size() - 1;
    while (left_index <= right_index) {
      if (arr[right_index] == search_elem) {
        return right_index;
      }
      if (arr[left_index] == search_elem) {
        return left_index;
      }
      left_index++;
      right_index--;
    }
    return std::nullopt;
  }

}  // namespace assignment