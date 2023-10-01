This solution iterates the competitions and results simultaneously, keeping track of score in a hash table of competitor to cumulative score. After filling the hash table, it returns the competitor with the max cumulative score. The algorithm keeps track of the current winner, while iterating, to avoid searching searchafter the table has been filled.
 
The algorithm is O(N) time where N is the number of competions, and O(K) space where K is the number of competitors.
