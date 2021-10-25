## Introduction
- Odd-Even sort is a variation on bubble sort which sorts the list through two phases an odd phase and an even phase during the odd phase we perform a bubble sort on odd indexed elements and during the even phase we perform a bubble sort on even indexed elements.
	- An in-place algorithm is one in which we sort the list without any extraneous memory.
	- Comparison based algorithm means that we sort the list by comparing the elements in that list to one another.
	- An unstable algorithm is one in which the relative order amongst duplicate elements is not preserved.

- It's just like optimised bubble sort but just a little optimised, here we traverse back and forth the list like we are shaking a cocktail.

- Time complexity = (n) (Best), (n^2)  (Average, Worst)
- Space complexity = O(1)

- Odd-Even sort is mainly used on parallel processors with local interconnections for running local tasks.

## PseudoCode