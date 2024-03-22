#include <iostream>
#include <vector>

class Graph {
private:
    int numVertices;
    std::vector<std::vector<int>> adjLists;

public:
    Graph(int V) {
        numVertices = V;
        adjLists.resize(V);
    }

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
        // For undirected graphs, add the reverse edge as well:
        // adjLists[dest].push_back(src);
    }

    void printGraph() {
        for (int i = 0; i < numVertices; ++i) {
            std::cout << "Adjacency list of vertex " << i << ": ";
            for (int neighbor : adjLists[i]) {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Graph g(6); // Create a graph with 5 vertices
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(0 ,3);

    g.printGraph();
    return 0;
}