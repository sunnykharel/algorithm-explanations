This solution uses a two pointer approach to progressively find and swap target values to the end. The right pointer always points to the first non-target value from the right. The left pointer actively searches for target values from the left which can be used to swap with the right pointer. This continues until the two pointers collide.