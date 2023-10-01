The solution uses an unordered_set (hashset) to memoize previously seen values. Subsequent values can do an o(1) lookup for their complement in the unordered_set. This makes the solution O(N).
