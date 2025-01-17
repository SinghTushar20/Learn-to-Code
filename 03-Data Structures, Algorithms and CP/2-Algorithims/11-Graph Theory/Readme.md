# Introduction

Graph theory is the mathematical theory of the properties and applications of graphs (networks).

---

One source and One Destination

- Use A\* Search Algorithm (For Unweighted as well as Weighted Graphs).

One Source, All Destination

- Use BFS (For Unweighted Graphs)
- Use Dijkstra (For Weighted Graphs without negative weights)
- Use Bellman Ford (For Weighted Graphs with negative weights)

Between every pair of nodes-

- Floyd-Warshall
- Johnson’s Algorithm

---

## Types of Graphs

**Undirected Graph**: An undirected graph is a graph in which edges have no orientation. The edge (u, v) is identical to the edge (v, u).

**Directed Graph (Digraph)**: A directed graph or digraph is a graph in which edges have orientations. For example, the edge (u, v) is the edge from node u to node v.

**Weighted Graphs**: Many graphs can have edges that contain a certain weight to represent an arbitrary value such as cost, distance, quantity, etc.

- Usually edge of a graph is denoted as a triplet (u, v, w) and specify whether the graph is directed or undirected.

### Special Graphs

**Tree**: A tree is an undirected connected graph with no cycles. Equivalently, it is a connected graph with N nodes and N-1 edges.

**Rooted Tree**: A rooted tree is a tree with a designated root node where every edge either points away from or towards the root node.

- When edges point away from the root the graph is called an **arborescence (out-tree)** and **anti-arborescence (in-tree)** otherwise.

**Directed Acyclic Graph**: DAGs are directed graphs with no cycles. These graphs play an important role in representing structures with dependencies.

- Several efficient algorithms exist to operates on DAGs.
- All out-trees are DAGs but not all DAGs are out-trees.

**Bipartite Graph**: A bipartite graph is one whose vertices can be split into two independent groups U, V such that every edge connects betweens U and V.

- The graph is two colourable or there is no odd length cycle.

**Complete Graph**: A complete graph is one where there is a unique edge between every pair of nodes. A complete graph with n vertices is denoted as the graph Kn.

## Representing Graphs

**Adjacency Matrix**: The idea is that the in the matrix cell m[i][j] represents the edge weight of going from node i to node j.

- It is often assumed that the edge of going from a node to itself has a cost of zero.
- Simplest graph representation.
- Space efficient for representing dense graphs.
- Edge weight lookup is O(1).
- Requires Θ(V²) space.
- Iterating over all edges takes Θ(V²) time.

**Adjacency List**: An adjacency list is a way to represent a graph as a map from nodes to lists of edges.

- Space efficient for representing sparse graphs.
- Iterating over all edges is efficient.
- Less space efficient for denser graphs.
- Edge weight lookup is O(E).
- Slightly more complex graph representation.

**Edge List**: An edge list is a way to represent a graph simply as an unordered list of edges. Assume the notation for any triplet (u,v,w) means: “the cost from node u to node v is w”.

- This representation is seldomly used because of its lack of structure. However, it is conceptually simple and practical in a handful of algorithms.
- Space efficient for representing sparse graphs.
- Iterating over all edges is efficient.
- Less space efficient for denser graphs.
- Edge weight lookup is O(E).

## Common Graph Theory Problems

**Shortest path problem**: Given a weighted graph, find the shortest path of edges from node A to node B.

- Algorithms: BFS (unweighted graph), Dijkstra’s, Bellman-Ford, Floyd-Warshall, A\*, and many more.

**Connectivity**: Does there exist a path between node A and node B?

- Typical solution: Use union find data structure or any search algorithm (e.g DFS).

**Detecting Negative cycles**: Does my weighted digraph have any negative cycles? If so, where?

- Algorithms: Bellman-Ford and Floyd-Warshall.

**Strongly Connected Components**: Strongly Connected Components (SCCs) can be thought of as self-contained cycles within a directed graph where every vertex in a given cycle can reach every other vertex in the same cycle.

- Algorithms: Tarjan’s and Kosaraju's algorithm

**Traveling Salesman Problem**: "Given a list of cities and the distances between each pair of cities, what is the shortest possible route that visits each city exactly once and returns to the origin city?”

- The TSP problem is NP-Hard meaning it’s a very computationally challenging problem. This is unfortunate because the TSP has several very important applications.
- Algorithms: Held-Karp, branch and bound and many approximation algorithms

**Bridges**: A bridge / cut edge is any edge in a graph whose removal increases the number of connected components.

- Bridges are important in graph theory because they often hint at weak points, bottlenecks or vulnerabilities in a graph.

**Articulation points**: An articulation point / cut vertex is any node in a graph whose removal increases the number of connected components.

- Articulation points are important in graph theory because they often hint at weak points, bottlenecks or vulnerabilities in a graph.

**Minimum Spanning Tree (MST)**: A minimum spanning tree (MST) is a subset of the edges of a connected, edge-weighted graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight.

- MSTs on a graph are not always unique.
- MSTs are seen in many applications including: Designing a least cost network, circuit design, transportation networks, and etc.
- Algorithms: Kruskal’s, Prim’s & Borůvka's algorithm

**Network flow: (max flow)**: With an infinite input source how much “flow” can we push through the network?

- Algorithms: Ford-Fulkerson, Edmonds-Karp & Dinic’s algorithm

# Graph Traversal/Search Algorithms

## DFS Algorithm

The Depth First Search (DFS) is the most fundamental search algorithm used to explore nodes and edges of a graph.

- It runs with a time complexity of O(V+E) and is often used as a building block in other algorithms.
- A DFS plunges depth first into a graph without regard for which edge it takes next until it cannot go any further at which point it backtracks and continues.
- For DFS iteratively we need a stack or we can do it reccursively.

```python
  # Global or class scope variables
  n = number of nodes in the graph
  g = adjacency list representing graph
  visited = [false, …, false] # size n
  function dfs(node):
      if visited[node]:
          return
      visited[node] = true

      neighbours = graph[node] # get all neighbours of a node
      for next in neighbours:
          dfs(next)
```

**Connected Components**: Sometimes a graph is split into multiple components. It’s useful to be able to identify and count these components (islands).

- One way to do so is by coloring each component with unique color meaning assigning an integer value to each group to be able to tell them apart.
- Algorithm: Start a DFS at every node (except if it’s already been visited) and mark all reachable nodes as being part of the same component.

```python
  # Global or class scope variables
  n = number of nodes in the graph
  g = adjacency list representing graph
  count = 0
  components = empty integer array # size n
  visited = [false, …, false] # size n
  function findComponents():
      for (i = 0; i < n; i++):
          if !visited[i]:
              count++
          dfs(i)
      return (count, components)
  function dfs(node):
      visited[node] = true
      components[node] = count
      for (next : g[node]):
          if !visited[next]:
              dfs(next)
```

### Application of DFS

We can augment the DFS algorithm to:

• Compute a graph’s minimum spanning tree.
• Detect and find cycles in a graph.
• Check if a graph is bipartite.
• Find strongly connected components.
• Topologically sort the nodes of a graph.
• Find bridges and articulation points.
• Find augmenting paths in a flow network.
• Generate mazes.

## BFS Algorithm

The Breadth First Search (BFS) is a fundamental search algorithm used to explore nodes and edges of a graph.

- It runs with a time complexity of O(V+E) and is often used as a building block in other algorithms.
- The BFS algorithm is particularly useful for finding the shortest path on unweighted graphs.
- A BFS starts at some arbitrary node of a graph and explores the neighbour nodes first, before moving to the next level neighbours.
- For BFS iteratively we need a queue or we can do it reccursively

The BFS algorithm uses a queue data structure to track which node to visit next.

- Upon reaching a new node the algorithm adds it to the queue to visit it later.

```python
# Global/class scope variables
n = number of nodes in the graph
g = adjacency list representing unweighted graph
# s = start node, e = end node, and 0 ≤ e,s < n
function bfs(s, e):
    # Do a BFS starting at node s
    prev = solve(s)
    # Return reconstructed path from s -> e
    return reconstructPath(s, e, prev)
function solve(s):
    q = queue data structure with enqueue and dequeue
    q.enqueue(s)
    visited = [false, …, false] # size n
    visited[s] = true

    prev = [null, …, null] # size n
    while !q.isEmpty():
    node = q.dequeue()
    neighbours = g.get(node)
    for(next : neighbours):
    if !visited[next]:
    q.enqueue(next)
    visited[next] = true
    prev[next] = node
    return prev
function reconstructPath(s, e, prev):
    # Reconstruct path going backwards from e
    path = []
    for(at = e; at != null; at = prev[at]):
    path.add(at)

    path.reverse()
    # If s and e are connected return the path
    if path[0] == s:
    return path
    return []
```
