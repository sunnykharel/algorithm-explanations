using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int seqPtr = 0;
  for (int val: array) {
    if (seqPtr == sequence.size()) return true;
    if (val == sequence[seqPtr]) seqPtr ++;
  }
  return seqPtr == sequence.size();
}

