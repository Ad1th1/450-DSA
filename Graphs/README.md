Important Points to remember:

BFS - queue implementation for iterative approach\
DFS - stack implementation for iterative approach

Dijkstra Algorithm: 
	> used to find shortest path in a graph\
	> doesn't work for -ve weights	-> reduced maximally -> infinite loop

Bellman-Ford Algorithm:
	> works for negative edges
	

Topological Sort:
	> check if indegree is 0, and push into queue, indegree-- of adjeacent nodes
	> used for job scheduling

Components of a graph = disconnected portions of graph

Dynamic Programming is mainly an optimization over plain recursion. Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming. \
~ like preparing a table

In graph theory, a component of an undirected graph is a connected subgraph that is not part of any larger connected subgraph.

Disjoint set - data structure with parent and rank array for Kruskal's algorithm. also includes path compression and union to find true 
parent

MST 
-> contains N nodes and N-1 edges\
-> every node is reachable -> spanning tree\
-> minimum cost of edge weight -> MST\
-> cannot have cycles \
-> Prims and Kruskal algorithm

Kruskal Algorithm:
-> graph in disjoint set data structure


Connected Graph:\
-> visited array for multiple components

DAG - directed acyclic graph
no cycles, and directed. \
Eg: amazon delivery, not an eg: dominos delivery vehicle(cycle)
