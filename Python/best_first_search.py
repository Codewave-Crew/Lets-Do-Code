import heapq

class Graph:
    def __init__(self):
        self.graph = {}

    def add_edge(self, node, neighbor, cost):
        if node in self.graph:
            self.graph[node].append((neighbor, cost))
        else:
            self.graph[node] = [(neighbor, cost)]

    def best_first_search(self, start, goal):
        visited = set()
        priority_queue = [(0, start)]

        while priority_queue:
            cost, current_node = heapq.heappop(priority_queue)

            if current_node == goal:
                print("Goal reached!")
                return

            if current_node not in visited:
                print(f"Visiting node {current_node}")
                visited.add(current_node)

                for neighbor, neighbor_cost in self.graph.get(current_node, []):
                    if neighbor not in visited:
                        heapq.heappush(priority_queue, (neighbor_cost, neighbor))


g = Graph()
g.add_edge("A", "B", 3)
g.add_edge("A", "C", 6)
g.add_edge("B", "D", 2)
g.add_edge("B", "E", 5)
g.add_edge("C", "F", 9)

print("Best-First Search:")
g.best_first_search("A", "F")
