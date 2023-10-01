#include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  unordered_set<int> seen;
  for (int num: array) {
    int complement = targetSum - num;
    if (seen.find(complement) != seen.end())
      return { num, complement };
    seen.insert(num);
  }
  return {};
}
