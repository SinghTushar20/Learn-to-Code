# Introduction

Sorting is an algorithm that arranges the elements of a list in a certain order [either ascending or descending].

Sorting can significantly reduce the complexity of a problem, and is often used for database algorithms and searches.

A quick Google search reveals that there are over 40 different sorting algorithms used in the computing world today.

## Basic Terminologies

**In-Place Sort** algorithm is one in which we sort the list without any extraneous memory.

- It also doesn’t include the space used for stack in the recursive algorithms.

**Comparision Based Algorithm** means that we sort the list by comparing the elements in that list to one another.

- A comparator is defined to compare elements or items of a data sample. This comparator defines the ordering of elements.

**Counting-based sorting** mean there’s no comparison involved between elements in these types of sorting algorithms but rather work on calculated assumptions during execution.

An **unstable algorithm** is one in which the relative order amongst duplicate elements is not preserved.

When the occurrence of the elements to be sorted of an input array matters the time complexity of a sorting algorithm, then that algorithm is called **Adaptive sorting algorithm**.

Sort algorithms that use main memory exclusively during the sort are called **internal sorting algorithms**.

Sorting algorithms that use external memory, such as tape or disk, during the sort are called **external sorting algorithms**.

# Selection Sort

It is a **in-place**, **comparision based**, **unstable sorting algorithm**, this algorithm slowly builds an unsorted list into a sorted list by repeatedly searching for the **smallest value** and placing it in its correct location.

- With every outer iteration the smallest element get at it's correct position.

## Complexity Analysis

Time complexity = (n^2) (Best, Average, Worst)
Space complexity = O(1)

## Applications

Selection sort works well for small files. It is used for sorting the files with very large values and small keys. This is because selection is made based on keys and swaps are made only when required.

Selection sort is best suits for elements with bigger values and small keys.

Don't have much practical use in CS.

# Bubble Sort

It is a **in-place**, **comparision based**, **stable sorting algorithm** which repeatedly steps through an unsorted list compares adjacent elements and swaps them if they are in the wrong order the algorithm then repeats this process until the list is sorted.

- With every outer iteration the **largest element** bubbled to the top.

We have 2 variations of Bubble sort one a normal one and the other a little optimised one with flag with modified version best case of bubble sort improved to O(n).

## Complexity Analysis

Time complexity = (n) (Best), (n^2) (Average, Worst)
Space complexity = O(1)

## Applications

The only significant advantage that bubble sort has over other implementations is that it can detect whether the input list is already sorted or not

Don't have much practical use in CS.

# Cocktail Shaker Sort

It is a **in-place**, **comparision based**, **stable sorting algorithm** which repeatedly steps through an unsorted list compares adjacent elements and swaps them if they are in the wrong order.

- With every outer iteration the **largest element** bubbled to the top and the **smallest one** sinks at the bottom.

It's just like optimised bubble sort but just a little optimised, here we traverse back and forth the list like we are shaking a cocktail as opposed to just forward like in bubble sort.

## Complexity Analysis

Time complexity = (n) (Best), (n^2) (Average, Worst)
Space complexity = O(1)

## Applications

Don't have much practical use in CS.

# Odd-Even Sort

Odd-Even sort is a variation on bubble sort which sorts the list through two phases an odd phase and an even phase during the odd phase we perform a bubble sort on odd indexed elements and during the even phase we perform a bubble sort on even indexed elements.

It's just like optimised bubble sort but just a little optimised, here we traverse back and forth the list like we are shaking a cocktail.

## Complexity Analysis

Time complexity = (n) (Best), (n^2) (Average, Worst)
Space complexity = O(1)

## Applications

Odd-Even sort is mainly used on parallel processors with local interconnections for running local tasks.

# Merge sort

Merge sort algorithm is called 2-way merging.

If we merge K files at a time then we call it K-way merging.

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Quick Sort

Quicksort is one of the fastest sorting algorithms out there, and it’s a very good example of D&C.

## Pseudocode

1. Pick a pivot.
2. Partition the array into two sub-arrays: elements less than the pivot and elements greater than the pivot.
3. Call quicksort recursively on the two sub-arrays.

## Partitioning

Quicksort is unique because its speed depends on the pivot you choose i.e. it's performance heavily depends on the pivot you choose.

Quicksort doesn’t check to see whether the input array is already sorted.

## Complexity Analysis

Time Complexity = O(nlogn) (Best and Average), O(n^2) (Worst)
Space Complexity = O(n) (Worst)

## Quick Sort VS Merge Sort

When we analyse any two algorithms we usually neglect lower terms and constants, because if two algorithms have
different Big O times, the constant doesn’t matter.

- This is only good but if both the algorithms have different curve equation.

- The constant in Big O notation can matter sometimes. That’s why quicksort is faster than merge sort.

- Quicksort has a smaller constant than merge sort. So if they’re both O(n log n) time, quicksort is faster.

Quicksort is faster in practice because it hits the average case way more often than the worst case.

## Applications

# Cycle Sort

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Bitonic Sort

## Bitonic Sequences

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Bucket Sort

## Hashing Algorithm

Stability of bucket sort depends upon the stability of the underlying sorting algorithm used to sort items of each bucket.

## Complexity Analysis

Time Complexity = O(n+k) (Best and Average), O(n^2) (Worst)
Space Complexity = O(n+k) (Worst)

## Applications

This is mainly used when the data is uniformaly distributed.

# Radix Sort

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Counting Sort

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Tree Sort

## Representing Tree as an Array

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Heap Sort

## Representing Heap as an Array

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Topological Sort

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Insertion Sort

Insertion sort is used when the data is nearly sorted (due to its adaptiveness) or when the input size is small (due to its low overhead).

Due to its stability, insertion sort is used as the recursive base case (when the problem size is small) for higher overhead divide-and-conquer sorting algorithms, such as merge sort or quick sort.

Insertion sort is almost linear for partially sorted input.

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# Shell Sort

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# External Sort

## K way merging

## Complexity Analysis

Time Complexity =
Space Complexity =

## Applications

# inbuilt sorting algorithms of different programming languages and the algorithm they use internally

**C++**: The sorting algorithm used by the C++ standard library, in both GCC and MSVC, is called **introsort**.

- It is a hybrid of quick sort, heap sort and insertion sort.
- It uses quicksort until it hits a certain recursion depth, at which point it switches to heapsort in order to maintain the required O(nlogn) worst-case behavior. (Otherwise, quicksort can devolve to O(n^2) in some pathological cases.)
- On sufficiently random data, it is effectively pure quicksort, since it should seldom (if ever) get to a deep enough recursion level to switch over.

**Python**: Pythons build in sort is called **TimSort**.

- Its a merge sort and insertion sort hybrid.

**Java**: The collections' sort algorithm uses **merge sort** while the Array.sort uses **timsort**.

# When to use which sorting technique

If the occurrence of the same element important

- Use: Insertion, Bubble, Merge, Quick
- Don't Use: Heap, Quick

If the data size small

- Use: Insertion, Bubble
- Don't Use: Heap, Merge, Quick

If memory for extra space an issue

- Use: Insertion, Bubble, Heap
- Don't Use: Merge, Quick

If the input data nearly sorted

- Use: Insertion, Bubble
- Don't Use: Heap, Merge, Quick

If speed important

- Use: Heap, Merge, Quick
- Don't Use: Insertion, Bubble

## Conclusion

For small dataset any algorithm is good.
For medium dataset of 60-1k items comparision sorts are great.
For large dataset radix sort is the boss.

# Misc

There are a lot of other complex sorting algorithms as well.

1. **Bogocounting sort**: Create an array of all possible elements. Select a random index in the array and a random index in the list until the element is found, then put it in the sorted list.

2. **Natural selection sort**: Score the list using a fitness function (such as number of items out of order) then copy it but introduce some random swapping of items. Check a random list. If that list has at least the best score so far, reproduce the list but mutate it. If the list does not have the best score so far, delete the list. The list is considered sorted when it has equal fitness to a sorted list.

3. **Adaptation sort**: Inspired by natural selection sort but trimmed down to improve speed and memory usage. Count the number of inversions in the list. Randomly swap two items and check their immediate neighbors to see if it reduces inversions. If it doesn't, then undo the swap. Repeat until there are no inversions.
