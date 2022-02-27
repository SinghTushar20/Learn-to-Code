## Introduction
- It is a in-place, comparision based, stable sorting algorithm which repeatedly steps through an unsorted list compares adjacent elements and swaps them if they are in the wrong order.
	- With every outer iteration the **largest element** bubbled to the top and the **smallest one** sinks at the bottom.
	- An in-place algorithm is one in which we sort the list without any extraneous memory.
	- Comparison based algorithm means that we sort the list by comparing the elements in that list to one another.
	- An unstable algorithm is one in which the relative order amongst duplicate elements is not preserved.

- It's just like optimised bubble sort but just a little optimised, here we traverse back and forth the list like we are shaking a cocktail.

- Time complexity = (n) (Best), (n^2)  (Average, Worst)
- Space complexity = O(1)

- Don't have much practical use in CS.

## PseudoCode