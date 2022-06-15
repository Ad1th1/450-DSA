- B+ tree -> all elements are stored at leaf, contains indexes
- AVL Trees -> height balanced binary trees

- Drawback of BST 
  - height depends on order of insertion

- Tree = connected graph with no cycle, V = n, E = n-1
- Forest = graph with each connected component

- For a BST, TC for searching, inserting and removal is the same, ie: O(log(n))
- BST
  - left subtree is smaller
  - right subtree is greater

- on deleting a node from bst, replace with:
  - max in left or min in right
  - copy value in tartgetted node
  - delete duplicate from right sub-tree

