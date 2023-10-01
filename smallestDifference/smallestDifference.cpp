#include <vector>
#include <algorithm>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  sort(arrayOne.begin(), arrayOne.end());
  sort(arrayTwo.begin(), arrayTwo.end());
  int ptr1 = 0;
  int ptr2 = 0;
  vector<int> smallDiffPair = {arrayOne[ptr1], arrayTwo[ptr2]};
  while (ptr1 < arrayOne.size() - 1 || ptr2 < arrayTwo.size() - 1) {
    bool canMovePtr1 = ptr1 < arrayOne.size() -1;
    bool canMovePtr2 = ptr2 < arrayTwo.size() -1;
    
    int diffMovePtr1;
    int diffMovePtr2;
    if (canMovePtr1) diffMovePtr1 = abs(arrayOne[ptr1+1] - arrayTwo[ptr2]);
    if (canMovePtr2) diffMovePtr2 = abs(arrayOne[ptr1] - arrayTwo[ptr2+1]);
    if (canMovePtr1 && canMovePtr2) {
      if (diffMovePtr1 <= diffMovePtr2) {
        ptr1++;
      } else {
        ptr2++;
      }
    } else if (canMovePtr1) {
      ptr1++;
    } else {
      ptr2++;
    }
    int currDiff = abs(arrayOne[ptr1] - arrayTwo[ptr2]);
    if (currDiff < abs(smallDiffPair[0] - smallDiffPair[1])) {
      smallDiffPair = {arrayOne[ptr1], arrayTwo[ptr2]};
    }
  }
  return smallDiffPair;
}

