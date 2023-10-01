O(N) one-pass using O(N) space to store result

An observation is that higher magnitude negative values are at the beginning of the array, and higher magnitude positive values are at the end of the array. Knowing this, we can keep two pointers -- one at the beginning of the array and the other end of the array; we would progressively append the square of the value of the pointer which has highest magnitude to the last unoccupied index our result, and increment/decrement that pointer accordingly. We would continue until the pointers clash.

