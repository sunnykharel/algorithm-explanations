The O(N^3) brute force solution is to find all triplets using a triple nested for loop and then add the triplet to the solution if it is valid.

The first optimization is an O(N^2) solution first sorts the input. It then iterates rightwards, performing a twoSum on the subarray to the right of the iterator. The twoSum requires a hashSet, so the solution takes O(N) space.

The final optimization is an O(N^2) solution which does not use any space. It first sorts the input and iterates rightwards, like above. It uses a two-pointer algorithm to find complementary couplets on the subarray right of the iterator. The two pointer algorithm uses the property of the sorted array to hone in on valid complementary couplets.
- if array[l] + array[r] > targetSum, decrement r to reduce the sum of the complement
- if array[i] + array[r] < targetSum, increment l to increase the sum of the component
