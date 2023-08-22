
Bubble Sort:
Recurrence Relation: T(n) = T(n-1) + O(n)
Worst-case Time Complexity: O(n^2)
Average-case Time Complexity: O(n^2)
Best-case Time Complexity: O(n) (with optimized implementation)

Selection Sort:
Recurrence Relation: T(n) = T(n-1) + O(n)
Worst-case Time Complexity: O(n^2)
Average-case Time Complexity: O(n^2)
Best-case Time Complexity: O(n^2)

Insertion Sort:
Recurrence Relation: T(n) = T(n-1) + O(n)
Worst-case Time Complexity: O(n^2)
Average-case Time Complexity: O(n^2)
Best-case Time Complexity: O(n) (when the input is nearly sorted)

Merge Sort:
Recurrence Relation: T(n) = 2T(n/2) + O(n)
Worst-case Time Complexity: O(n log n)
Average-case Time Complexity: O(n log n)
Best-case Time Complexity: O(n log n)

Quick Sort:
Recurrence Relation: T(n) = T(k) + T(n-k-1) + O(n)
Worst-case Time Complexity: O(n^2) (rare, occurs with poor pivot choices)
Average-case Time Complexity: O(n log n) (expected, good pivot choices)
Best-case Time Complexity: O(n log n) (best pivot choices)

Radix Sort:
Recurrence Relation: T(n, k) = T(n, k-1) + O(n)
Time Complexity: O(k * n), where k is the number of digits in the maximum number

Counting Sort:
Recurrence Relation: T(n) = T(n-1) + O(n + k)
Time Complexity: O(n + k), where k is the range of input values

Shell Sort:
Recurrence Relation: T(n) = T(n/2) + O(n^2)
Time Complexity: Depends on the gap sequence; in the worst case, it can be O(n^2)
