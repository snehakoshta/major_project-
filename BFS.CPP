#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;


// Graph representation using an adjacency list
class Graph {
public:
    unordered_map<int, vector<int>> adj_list;

    void addEdge(int u, int v) {
        adj_list[u].push_back(v);
        adj_list[v].push_back(u); // For an undirected graph
    }
};

// BFS traversal
void bfs(const Graph& graph, int start_vertex) {
    unordered_map<int, bool> visited;
    queue<int> q;

    visited[start_vertex] = true;
    q.push(start_vertex);

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        cout << vertex << " "; // Process the vertex (you can modify this part)

        for (int neighbor : graph.adj_list[vertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    Graph graph;
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);

    cout << "BFS traversal starting from vertex 0: ";
    bfs(graph, 0);

    return 0;
}
