- Graph Search: exploring a graph
  - Graph G(V,E)
    - V: Set of vertices
    - E: Set of edges <br>
      can either be unordered pairs (undirected) or ordered pairs (directed)
  - Applications: web crawling, social networking (level of separation),
    network broadcast, garbage collection, model checking, checking mathematical conjecture,
    solving puzzles games

- Pocket Cube: 2 by 2 by 2
  - Configuuration: graph
  - vertex for each possible state of cube (8! * 3^8)
  - edges for each possible move
  - cool to know: diameter of a n * n * n = theta (n^2 / log n)

- Graph representation:
  - Adjacency list: array "Adj" of size V
    - each element is a pointer to linked lists
    - each vertex Adj[u] stores its neighbors
    - time: theta(V+E)
  - Implicit representation:
    - Adj(u) is a function
    - v.neighbor() is a method
    - used to save space, like when computing for cubes
   
- Breath-first search
  - goal: visit all ndes reachable from given s
  - time: O(V+E)
  - look at nodes reachable in 0 moves (s), in 1 move (Adj[s]), ......
  - careful to avoid duplicates
  
