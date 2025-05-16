# [Algorithms Lab](https://hackmd.io/@arthurzllu/SkZBc7GoI)
- the following notes are taken from the Algorithms Lab offered by NTU information training system

## Array
- Why is the first element of arrays starting from the array index 0? <br/>
-> It implies how arrays are continuous and that each index represents the offset from the start.
A[3] → 3 is the offset from the start

## Stack vs. Heap
- the stack segment is near the top of memory with high address
- The allocation and deallocation for stack memory is automatically done
stack: LIFO, last in first out 
- heap memory is allocated explicitly by programmers and it won’t be deallocated until it is explicitly freed

## Analysis of algorithms
- Big O develops the upper bound on cost → determined by “most difficult” input
- Big Theta is the asymptotic order of growth → used to classify algorithms
- Big Omega develops the lower bound on cost → proof that no algorithm can do better

## Binary Search Trees: A binary tree in symmetric order
- A BST is either empty or two disjoint binary trees
- left node → smaller; right node → larger
- perfect balance: every path from root to null link has same length
- Traversal
  - Pre-order: root → left → right
  - In-order: left → root → right
  - Post-order: left → right → root
- Deletion: if we delete a key, we have to find its successor 
  - it’s either the maximum in the left subtree or the minimum in the right subtree
  - ideally, choose the subtree whose level is higher
- 2-3 tree: allow 1 or 2 keys per node (2-node: one key, two children, and so on)
- red-black tree: 
  - edges are colored red or black
  - no two consecutive red edges or any root-leaf path
  - same number of black edges
 
  ## Hashing: a key-indexed table (index is a function of the key)



