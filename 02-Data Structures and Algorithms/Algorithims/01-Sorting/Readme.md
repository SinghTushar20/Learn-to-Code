## Introduction

## Basic Terminologies

- **In-Place Sort** algorithm is one in which we sort the list without any extraneous memory.
- **Comparision Based Algorithm** means that we sort the list by comparing the elements in that list to one another.
- An **unstable algorithm** is one in which the relative order amongst duplicate elements is not preserved.

## Selection Sort

- It is a **in-place**, **comparision based**, **unstable sorting algorithm**, this algorithm slowly builds an unsorted list into a sorted list by repeatedly searching for the **smallest value** and placing it in its correct location.

  - With every outer iteration the smallest element get at it's correct position.

- Time complexity = (n^2) (Best, Average, Worst)
- Space complexity = O(1)

- Don't have much practical use in CS.

## Bubble Sort

- It is a **in-place**, **comparision based**, **stable sorting algorithm** which repeatedly steps through an unsorted list compares adjacent elements and swaps them if they are in the wrong order the algorithm then repeats this process until the list is sorted.

  - With every outer iteration the **largest element** bubbled to the top.

- Time complexity = (n) (Best), (n^2) (Average, Worst)
- Space complexity = O(1)

- We have 2 variations of Bubble sort one a normal one and the other a little optimised one with flag.

- Don't have much practical use in CS.

## Cocktail Shaker Sort

- It is a **in-place**, **comparision based**, **stable sorting algorithm** which repeatedly steps through an unsorted list compares adjacent elements and swaps them if they are in the wrong order.

  - With every outer iteration the **largest element** bubbled to the top and the **smallest one** sinks at the bottom.

- It's just like optimised bubble sort but just a little optimised, here we traverse back and forth the list like we are shaking a cocktail.

- Time complexity = (n) (Best), (n^2) (Average, Worst)
- Space complexity = O(1)

- Don't have much practical use in CS.

## Odd-Even Sort

- Odd-Even sort is a variation on bubble sort which sorts the list through two phases an odd phase and an even phase during the odd phase we perform a bubble sort on odd indexed elements and during the even phase we perform a bubble sort on even indexed elements.

- It's just like optimised bubble sort but just a little optimised, here we traverse back and forth the list like we are shaking a cocktail.

- Time complexity = (n) (Best), (n^2) (Average, Worst)
- Space complexity = O(1)

- Odd-Even sort is mainly used on parallel processors with local interconnections for running local tasks.
