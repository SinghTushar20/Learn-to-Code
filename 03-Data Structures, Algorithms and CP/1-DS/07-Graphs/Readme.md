# Union-Find or Disjoint Sets

Given a set of N objects, connect two objects, or ask if two objects are connected (directly or in-directly). Connected components are subsets, each consists of connected objects.

An equivalence relation partitions the objects into equivalence classes or connected components.

- Reflexive: p is connected to p.
- Symmetric: If p is connected to q, then q is connected to p.
- Transitive: If p is connected to q, and q is connected to r, then p is connected to r.

The Operations.

- Find: In which component is object p ?
- Connected: Are objects p and q in the same component?
- Union: Connect two components containing objects p and q (if not already).

Implementation Approaches: It can be implemented by several different algorithms. 2 common approaches are Quick Find & Quick Union.

## Quick Find

Each object in the array has a value, or an id, and the id is it’s index initially. An element p is connected to element q if they have the same id.

### Union

When connecting two objects p and q, change the id of all objects that have the id of p to that of q, or vice-versa. So, we will have to loop on all array elements to check the id of each.

### Connected

Two objects are connected if and only if they have the same id.

### Complexity Analysis

It’s fast in checking whether there is a connection, slow in constructing the array of objects, and connecting objects.

Initialize & Union: O(N)
Connected: O(1)

## Quick Union

The array represent the parent of each object. Initially, the parent of an object is the object itself; every object is a root. We can imagine the data structure consists of trees, each tree has connected objects, and, trees mightn’t be connected together.

### Union

When connecting two objects p and q, connect the roots. So, change the parent of the root of p to the root of q, or vice-versa.

### Connected

Two objects are connected if their root is the same. So, we have to check the parents of each object up to the root.

### Complexity Analysis

It’s slow in checking whether there is a connection, slow in construct the array of objects, and connecting objects.

Initialize & Union & Connected → O(N).
