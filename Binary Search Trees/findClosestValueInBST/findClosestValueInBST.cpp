class BST {
 public:
  int value;
  BST* left;
  BST* right;

  BST(int val);
  BST& insert(int val);
};

int findClosestValueInBst(BST* tree, int target) {
  BST* node = tree;
  int closest = tree->value;
  while (node) {
    int nodeVal = node->value;
    if (abs(target - nodeVal) < abs(closest - target)) {
      closest = nodeVal;
    }
    if (nodeVal > target) {
      node = node->left;
    } else {
      node = node -> right;
    }
  }
  return closest;
}

