#include <vector>
#include <math.h>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  vector<int> result(array.size());
  int count = array.size();
  int l = 0;
  int r = array.size() - 1;
  while (l < r) {
    if (abs(array[l]) > abs(array[r]))
      result.at(--count) = pow(array[l++], 2);
    else
      result.at(--count) = pow(array[r--], 2);
  }
  result.at(--count) = pow(array[l], 2);
  return result;
}

