The brute force algorithm is to create all possible combinations of numbers and then find the min difference pair out of those. This solution is O(N^2). 

The optimal solution sorts the list, then scans the two lists, using a greedy hiuristic, with two pointers.

The greedy hieuristic is detailed below:
- if moving ptr1 yields an absolute difference < the current absolute difference, then move ptr1 right.
- else if moving ptr2 yields an absolute difference < the current, move ptr2 right.

This greedy hieuristic works because the array is sorted. We move ptr2/ptr1 based on which one yields the smallest absolute difference between ptr2 and ptr1 the entire time. Because the algorithm visits all values in each array, this means that the algorithm finds the smallest absolute difference for every pair, which guarentees correctness. 
