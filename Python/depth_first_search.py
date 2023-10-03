class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, node, neighbor):
        if node in self.graph:
            self.graph[node].append(neighbor)
        else:
            self.graph[node] = [neighbor]

    def dfs_recursive(self, start_node):
        visited = set()

        def dfs(node):
            if node not in visited:
                print(node, end=" ")
                visited.add(node)
                for neighbor in self.graph.get(node, []):
                    dfs(neighbor)

        dfs(start_node)


g = Graph()
g.add_edge(0, 1)
g.add_edge(0, 2)
g.add_edge(1, 2)
g.add_edge(2, 0)
g.add_edge(2, 3)
g.add_edge(3, 3)

print("DFS starting from node 2:")

g.dfs_recursive(2)
