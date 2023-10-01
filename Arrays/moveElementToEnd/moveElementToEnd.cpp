#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  if (array.size() == 0) {
    return {};
  }
  int l = 0;
  int r = array.size() - 1;
  while ((array[r] == toMove) && r > 0) {
    r--;
  }
  while (l < r) {
    if (array[l] == toMove) {
      array[l] = array[r];
      array[r--] = toMove;
    } else {
      l++;
    }
  }
  return array;
}

