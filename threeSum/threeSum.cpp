#include <vector>
#include <algorithm>

using namespace std;

int tripletSum(vector<int> array, int i, int j, int k) {
  return array[i] + array[j] + array[k];
}

vector<int> getTriplet(vector<int> array, int i, int j, int k) {
  return vector<int> { array[i], array[j], array[k] };
}

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
  vector<vector<int>> triplets;
  sort(array.begin(), array.end());
  for (int i = 0; (i <= array.size() - 3) && (array[i] < targetSum); i++) {
    int l = i+1;
    int r = array.size() - 1;
    while (l < r) {
      int sum = tripletSum(array, i, l, r);
      if (sum == targetSum) triplets.push_back(getTriplet(array, i, l, r));
      if (sum >= targetSum) r--;
      if (sum <= targetSum) l++;
    }
  }
  return triplets;
}

